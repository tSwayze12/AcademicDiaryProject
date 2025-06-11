#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
       int choose;
       cout << "Add subjects - 1" << endl;
       cout << "Show subject - 2" << endl;
 while (true) {
     cin >> choose;
       switch (choose) {
             case 1:{
       
   ofstream school_out("subjects.txt", ios::app);
   
    if (!school_out.is_open()){
        cout << "ERROR FILE CAN'T OPEN" << endl;
        return 1;
    }
    else 
   {
           
       string  subject;
       cout << "Enter subjects (one per line). Enter '0' to finish:\n";
        
       cin >> subject;

           if (!subject.empty())
           {
               school_out<< subject << endl;
     }  
       }
       school_out.close();
       cout << "Choose next action" << endl;
    break;
       }
    case 2:{
       ifstream school_in ("subjects.txt");
       if (!school_in.is_open()){
           cout << "ERROR FILE CAN'T OPEN" << endl;
           return 1;
       }else {
       string line;

     cout << "It's your subjects" << endl;
     while (getline(school_in, line)) {
         cout << line << endl;
        }
      school_in.close();
      }
    }
           break;
    default:
    cout << "Error, wrong character " << endl;
    exit(1);
}
}
}

