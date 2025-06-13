#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() {
  while (true) {

    cout << "==========================================\n";
    cout << "YOU ARE NOW IN THE MAIN MENU\n";
    cout << "PLEASE ENTER A NUMBER TO CHOOSE THE ACTION\n";
    cout << "1 - Show all current subjects\n";
    cout << "2 - Add a subject\n";
    cout << "3 - Move to a certain subject\n";
    cout << "==========================================\n";

    int choose;

    cin >> choose;

    switch (choose) {
        case 1:{

        ofstream school_out( "subjects.txt", ios::app);

            if (!school_out.is_open()) {
                cout << "ERROR FILE CAN'T OPEN" << endl;
                            return 1;
        } else {

            string subject;
            cout << "Enter subjects (one per line). Enter '0' to finish:\n";

     
            if (!subject.empty()) {
           school_out << subject << endl;
         }
       }
       school_out.close();
       cout << "Choose next action" << endl;
       break;
               }
        case 2:{
                ifstream school_in("subjects.txt");
      if (!school_in.is_open()) {
        cout << "ERROR FILE CAN'T OPEN" << endl;
        return 1;
      } else {
        string line;

        cout << "It's your subjects" << endl;
        while (getline(school_in, line)) {
          cout << line << endl;
        }
        school_in.close();
      }break;
    }
       case 3:{
              cout << "Choose which subject you want move" << endl;
          int subject;
       cout << "Add 1 - Algebra" << endl;
       cout << "Add 1 - Algebra" << endl;
       cout << "Add 2 - Biology" << endl;
       cout << "Add 3 - Geography" << endl;
       cout << "Add 4 - Geometry" << endl;
       cout << "Add 5 - Foreign Language" << endl;
       cout << "Add 6 - Computer Science" << endl;
       cout << "Add 7 - History" << endl;
       cout << "Add 8 - Literature" << endl;
       cout << "Add 9 - Mathematics" << endl;
       cout << "Add 10 - Social Studies" << endl;
       cout << "Add 11 - Russian Language" << endl;
       cout << "Add 12 - Technology (Labor)" << endl;
       cout << "Add 13 - Physics" << endl;
       cout << "Add 14 - Physical Education" << endl;
       cout << "Add 15 - Chemistry" << endl;
       cout << "Add 16 - Class Teacher Conversations" << endl;
       
            cin >> subject;
        cout << "Add 1 - PutMark" << endl;
        cout << "Add 2 - getAverage" << endl;
        cout << "Add 3 -  evaluateAverageOnMark" << endl;
        cout << "Add 0 - get back" << endl;
            switch (subject) {
                case 1:
        cout << "Add 0 - get back" << endl;
                case 2:
        cout << "Add 0 - get back" << endl;
                case 4:
        cout << "Add 0 - get back" << endl;
                case 5: 
        cout << "Add 0 - get back" << endl;
                case 6:
        cout << "Add 0 - get back" << endl;
                case 7:
        cout << "Add 0 - get back" << endl;
                case 8:
        cout << "Add 0 - get back" << endl;
                case 9:
        cout << "Add 0 - get back" << endl;
                case 10:
        cout << "Add 0 - get back" << endl;
                case 11:
        cout << "Add 0 - get back" << endl;
                case 12:
        cout << "Add 0 - get back" << endl;
                case 13:
        cout << "Add 0 - get back" << endl;
                case 14:
        cout << "Add 0 - get back" << endl;
                case 15:
        cout << "Add 0 - get back" << endl;
                case 16:
        cout << "Add 0 - get back" << endl;

                    







