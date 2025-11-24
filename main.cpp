#include <iostream>
#include <string>
using namespace std;

int main() {
    string password;
    cout << "Enter your password: ";
    cin >> password;

    int score = 0;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for(char c : password) {
        if(isupper(c)) hasUpper = true;
        if(islower(c)) hasLower = true;
        if(isdigit(c)) hasDigit = true;
        if(!isalnum(c)) hasSpecial = true;
    }

    if(password.length() >= 8) score++;
    if(hasUpper) score++;
    if(hasLower) score++;
    if(hasDigit) score++;
    if(hasSpecial) score++;

    if(score <= 2) cout << "Password strength: Weak\n";
    else if(score == 3 || score == 4) cout << "Password strength: Medium\n";
    else cout << "Password strength: Strong";

}