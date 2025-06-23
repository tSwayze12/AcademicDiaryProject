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
   case 3: {
    int choice;
    do {
        cout << "Choose which subject you want to move:" << endl;
        cout << "1 - Algebra" << endl;
        cout << "2 - Biology" << endl;
        cout << "3 - Geography" << endl;
        cout << "4 - Geometry" << endl;
        cout << "5 - Foreign Language" << endl;
        cout << "6 - Computer Science" << endl;
        cout << "7 - History" << endl;
        cout << "8 - Literature" << endl;
        cout << "9 - Mathematics" << endl;
        cout << "10 - Social Studies" << endl;
        cout << "11 - Russian Language" << endl;
        cout << "12 - Technology (Labor)" << endl;
        cout << "13 - Physics" << endl;
        cout << "14 - Physical Education" << endl;
        cout << "15 - Chemistry" << endl;
        cout << "16 - Class Teacher Conversations" << endl;
        cout << "0 - Back to main menu" << endl;

        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1:
                cout << "Algebra selected" << endl;
                break;
            case 2:
                cout << "Biology selected" << endl;
                break;
            case 3:
                cout << "Geography selected" << endl;
                break;
            case 4:
                cout << "Geometry selected" << endl;
                break;
            case 5:
                cout << "Foreign Language selected" << endl;
                break;
            case 6:
                cout << "Computer Science selected" << endl;
                break;
            case 7:
                cout << "History selected" << endl;
                break;
            case 8:
                cout << "Literature selected" << endl;
                break;
            case 9:
                cout << "Mathematics selected" << endl;
                break;
            case 10:
                cout << "Social Studies selected" << endl;
                break;
            case 11:
                cout << "Russian Language selected" << endl;
                break;
            case 12:
                cout << "Technology (Labor) selected" << endl;
                break;
            case 13:
                cout << "Physics selected" << endl;
                break;
            case 14:
                cout << "Physical Education selected" << endl;
                break;
            case 15:
                cout << "Chemistry selected" << endl;
                break;
            case 16:
                cout << "Class Teacher Conversations selected" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

        if (choice >= 1 && choice <= 16) {
            cout << "1 - putMark" << endl;
            cout << "2 - getAverage" << endl;
            cout << "3 - evaluateAverageOnMark" << endl;
            cout << "4 - deleteMark" << endl;
            cout << "5 - showmarks" << endl;
            cout << "6 - readmarks" << endl;
            cout << "0 - Back to subjects menu" << endl;
            int action;
            cin >> action;

            switch (action) {
                case 1:{
                    cout << "PutMark selected" << endl;
                       }
                    break;
                case 2:{
                    cout << "getAverage selected" << endl;
                       }
                    break;
                case 3:{
                    cout << "evaluateAverageOnMark selected" << endl;
                       }
                    break;
                case 4:{
                    cout << "deleteMark" << endl;
                       }
                case 5:{
                    cout << "5 - showmarks" << endl;
                       }
                case 6: {
                    cout << "readmarks" << endl;
                        }
                case 0:
                    break;
                default:
                    cout << "Invalid action. Please try again." << endl;
                    break;
            }
        }
    } while (choice != 0);
    break;
}
}
}
}
