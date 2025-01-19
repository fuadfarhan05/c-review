#include <iostream>
using namespace std;

int main() {
    int num = rand() % 5 + 1;
    int userInput;
    

    while(userInput != num) {
        cout << "Guess a number:"; 
        cin >> userInput;
        if (userInput == num) {
            cout << "You guessed correct";
        }
        else {
            cout << "Try again" << endl;
        }
        
    }
    


    

    return 0;
}