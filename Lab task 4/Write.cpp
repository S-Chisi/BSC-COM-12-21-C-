#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for(char ch : str) {
        if(tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
            count++;
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for(char ch : str) {
        if(isalpha(ch)) {
            if(!inWord) {
                count++;
                inWord = true;
            }
        }
        else {
            inWord = false;
        }
    }
    return count;
}

// Function to reverse a string
string reverseString(const string& str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    ifstream inputFile("text_file.txt"); // Open the text file
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 0;
    }

    string fileData;
    getline(inputFile, fileData); // Read the content of the file

    // Count vowels
    int vowelCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelCount << endl;

    // Count words
    int wordCount = countWords(fileData);
    cout << "Number of words: " << wordCount << endl;

    // Reverse the string
    string reversedString = reverseString(fileData);
    cout << "Reversed string: " << reversedString << endl;

    // Capitalize second letter of each word
    string capitalizedString = capitalizeSecondLetter(fileData);
    cout << "Capitalized second letter: " << capitalizedString << endl;

    inputFile.close(); // Close the file
    return 0;
}
