#include "Subject.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    while (true) {
        cout << "==========================================\n";
        cout << "YOU ARE NOW IN THE MAIN MENU\n";
        cout << "PLEASE ENTER A NUMBER TO CHOOSE THE ACTION\n";
        cout << "1 - Work with a subject\n";
        cout << "0 - Exit\n";
        cout << "==========================================\n";

        int choose;
        cin >> choose;
        cin.ignore(); 

        if (choose == 0) break;

        switch (choose) {
            case 1: {
                const vector<string> subjects = {
                    "Algebra", "Biology", "Geography", "Geometry", "Foreign Language",
                    "Computer Science", "History", "Literature", "Mathematics", "Social Studies",
                    "Russian Language", "Technology", "Physics", "Physical Education", "Chemistry",
                    "Class Teacher Conversations"
                };
                cout << "Choose a subject:\n";
                for (int i = 0; i < subjects.size(); ++i) {
                    cout << i + 1 << " - " << subjects[i] << endl;
                }
                cout << "0 - Back to main menu\n";

                int choice;
                cin >> choice;

                if (choice == 0 || choice < 0 || choice > subjects.size()) {
                    break;
                }

                string selectedSubject = subjects[choice - 1];
                Subject subj(selectedSubject);

                while (true) {
                    cout << endl << "Working with: " << selectedSubject << endl;
                    cout << "1 - putMark\n";
                    cout << "2 - getAverage\n";
                    cout << "3 - evaluateAverageOnMark\n";
                    cout << "4 - deleteMark\n";
                    cout << "5 - showmarks\n";
                    cout << "6 - readmarks\n";
                    cout << "0 - Back to subject list\n";

                    int action;
                    cin >> action;

                    if (action == 0) break;

                    switch (action) {
                        case 1: {
                            int mark;
                            float coef;
                            cout << "Enter mark and coefficient: ";
                            cin >> mark >> coef;
                            if (subj.putMark(mark, coef)) {
                                cout << "Mark added.\n";
                            } else {
                                cout << "Invalid mark or coefficient.\n";
                            }
                            break;
                        }
                        case 2: {
                            cout << "Average: " << subj.getAverage() << endl;
                            break;
                        }
                        case 3: {
                            int mark;
                            float coef;
                            cout << "Enter hypothetical mark and coefficient: ";
                            cin >> mark >> coef;
                            float predicted = subj.evaluateAverageOnMark(mark, coef);
                            cout << "Hypothetical average: " << predicted << endl;
                            break;
                        }
                        case 4: {
                            int id;
                            cout << "Enter mark number to delete (starting from 1): ";
                            cin >> id;
                            subj.deleteMark(id);
                            cout << "Mark deleted.\n";
                            break;
                        }
                        case 5: {
                            subj.showmarks();
                            cout << endl;
                            break;
                        }
                        case 6: {
                            subj.readmarks();
                            cout << "Marks loaded from file.\n";
                            break;
                        }
                        default:
                            cout << "Invalid action.\n";
                    }
                }

                break;
            }

            default:
                cout << "Unknown option. Try again.\n";
        }
    }
    return 0;
}
