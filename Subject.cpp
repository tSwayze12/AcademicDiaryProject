#include "Subject.h"
#include <fstream>
using namespace std; 

    Subject:: Subject(const string& name) : subName_(name)
    {
        if (initFile(subName_) == false) 
        {
            cout << "An unexpected error has occured\n";
        }
        else 
        {
        initFile(subName_); 
        }
    }      

    bool Subject :: initFile(const string& subName)
    {
         ofstream fileInput; 
         fileInput.open(subName + ".txt");
            
         if(!fileInput.is_open()) 
         {
            return false;  
         }
         
        return true;  
    }  
   
    
    bool Subject:: putMark(int mark, float coefficient)
    {
        if(mark <= 0 or mark > 5) 
        {
            return false;  
        }

        if (coefficient < 0.3 || coefficient > 3)
        {
            return false;  
        }
        marks_.push_back(mark);
        coeffs_.push_back(coefficient);

        fstream ofs;
        ofs.open(subName_ + ".txt");

        if (ofs.is_open() == false) 
        {
            return false;  
        }

        ofs << mark << "\n" << coefficient;
        return true; 
    } 
 
    float Subject ::  getAverage()
    {
        double coeffSum{};
        double sumOf{};
        double average{};

        for(int i = 0; i < marks_.size(); i++)
        {
            coeffSum += coeffs_[i];
            sumOf += marks_[i] * coeffs_[i]; 
        } 

        average = sumOf / coeffSum; 
        return average; 
    }
