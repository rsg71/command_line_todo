// CPlusPlus_ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;


int main() {
    vector<string> todos;
    int choice;

    while (true) {
        cout << "\n==== TODO APP ====\n";
        cout << "1. View Tasks\n";
        cout << "2. Add Task\n";
        cout << "3. Delete Task\n";
        cout << "4. Exit\n";
        cout << "Choice: ";

        cin >> choice;

        string task;


        switch (choice) {
        case 1:
            // View tasks
            cout << "\nTasks:\n";

            if (todos.empty()) {
                cout << "No tasks.\n";
            }
            else {
                for (int i = 0; i < todos.size(); i++) {
                    cout << i + 1 << ". " << todos[i] << endl;
                }
            }
            break;

        case 2:
            // Add task
            cin.ignore();

            cout << "Enter task: ";
            getline(cin, task);

            todos.push_back(task);
            break;

        case 3:
            // Delete task
            break;

        case 4:
            return 0;

        default:
            cout << "Invalid option.\n";
        }
    }

   
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
