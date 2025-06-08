#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
        
   ofstream school("subjects.txt", ios::app);
   
    if (!school.is_open()){
        cout << "ERROR FILE CAN'T OPEN" << endl;
        return 1;
    }
    else 
   {
           
       string  subject;
       cout << "Enter subjects (one per line). Enter '0' to finish:\n";
       while(true){
             getline (cin, subject);

       if (subject == "0"){
           break;
       }
       else 
       {
           if (!subject.empty())
           {
               school << subject << endl;

       }
     }  
   }
       school.close();
       cout << "All subject add in file" << endl;

}
}
