#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function for capitalizing the second letter
void capitalize_sec_letter(string &str);

// Function for reversing a string
string reverse(const string &str);

int main() {
    // Open the text file
    ifstream file("textfile.txt");
    if (!file.is_open()) {
        cerr << "there is an error when attempting to  open this  file." << endl;
        return 1;
    }

    // Read the contents of the file into a string variable named fileData
    string fileData;
    getline(file, fileData);

    // Close the file
    file.close();

    // Calculate and output the number of vowels in the text file statement
    int vowelsCount = 0;
    for (char c : fileData) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            vowelsCount++;
        }
    }
    cout << "Number of vowels in textfile : " << vowelsCount << endl;

    // Calculate and output the number of words in the text file statement
    int wordsCount = count(fileData.begin(), fileData.end(), ' ') + 1;
    cout << "Number of words: " << wordsCount << endl;

    // Reverse the text file statement using the Reverse function
    cout << "Reversed statement: " << reverse(fileData) << endl;

    // Capitalize the second letter of each word
    capitalize_sec_letter(fileData);
    cout << "Capitalized statement: " << fileData << endl;

    return 0;
}

// Function definition for capitalizing the second letter of each word
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