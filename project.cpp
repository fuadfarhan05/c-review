#include <iostream>
#include <vector>
using namespace std;

int main() {
    string userInput;
    vector<string> tasks = {};
    string yesInput = "no";

    cout << "Do you want to see your tasks?[yes][no]";
    cin >> yesInput;

    while(yesInput == "yes") {
        cout << "Here is your to do list:" << endl;
        if (tasks.empty()){
            cout<< "You have no tasks here" << endl;
        } else {
            for(const string& task: tasks ) {
                cout << "_ " << task << endl;
            }
        }
        cout << "Add a task here:";
        cin >> userInput;
        tasks.push_back(userInput);

    }
    return 0;
}