#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

int main () {
    
    int counter = 0;
    int numQ = 1;
    ifstream myFile ("answers.txt");
    string answer;

    while (getline(myFile, answer)) {
        string userChoice;

        cout << "Your answer to question #" << numQ << ": ";
        cin >> userChoice;

        if (userChoice == answer) {
            counter++;
            cout << "Correct!" << endl;
        }
        
        cout << "Currently you have " << counter << " point(s)." << endl << endl;

        numQ++;
    }
    
    cout << counter;

    return 0;
}