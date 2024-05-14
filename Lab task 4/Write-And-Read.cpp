#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void capitalize_sec_letter(string &str);

string reverse(const string &str);

int main() {
    
    ifstream file("textfile.txt");
    if (!file.is_open()) {
        cerr << "there is an error when attempting to open this file." << endl;
        return 1;
    }
    string fileData;
    getline(file, fileData);

    file.close();
    int vowelsCount = 0;
    for (char c : fileData) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vowelsCount++;
        }
    }
    cout << "Number of vowels in textfile : " << vowelsCount << endl;

    int wordsCount = count(fileData.begin(), fileData.end(), ' ') + 1;
    cout << "Number of words: " << wordsCount << endl;

    cout << "Reversed statement: " << reverse(fileData) << endl;
    capitalize_sec_letter(fileData);
    cout << "Capitalized statement: " << reverse(fileData) << endl;

    return 0;
}

void capitalize_sec_letter(string &str) {
    bool capitalize = true;
    for (char &c : str) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        }
    }
}

// Function definition for reversing a string
string reverse(const string &str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}