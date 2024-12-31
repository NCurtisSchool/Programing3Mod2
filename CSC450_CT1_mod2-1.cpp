/*
Name: Nathan Curtis
Date: 12/22/2024
Class: Data Structures and Algorithms 24WB-CSC400-1
Teacher: Herbert Pensado
Assignment: Mod 2 Assignment
GitHub: https://github.com/NCurtisSchool/Programing3Mod2.git
*/

#include <iostream>
using namespace std;

int main() {
    string userInputOne;
    string userInputTwo;

    cout << "Enter First String: " << endl;
    cin >> userInputOne;
    cout << "Enter Second String: " << endl;
    cin >> userInputTwo;

    // Concat string 1 and 2
    string result = userInputOne + userInputTwo;
    
    // Ouput Concat string
    cout << "Combined Strings: " << result << endl;
}