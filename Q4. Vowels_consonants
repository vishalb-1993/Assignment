#include <iostream>
using namespace std;
bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

int main() {
    string inputString, resultString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    for (char c : inputString) {
        if (isalpha(c)) {
            if (isVowel(c)) {
                resultString += c;  
            } else {
                resultString = c + resultString;  
            }
        } else {
            resultString += c;  
        }
    }
    cout << "Modified string: " << resultString << endl;

    return 0;
}
