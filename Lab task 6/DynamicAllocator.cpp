#include <iostream>

using namespace std;

int main (){
    int* dynamicInteger = new int;
    cout << "Enter an integer value: ";
    cin >> *dynamicInteger;

    char* dynamicString = new char[15];
    cout << "Enter a string: ";
    cin.ignore();
    cin.getline(dynamicString,15);

    cout << "Integer allocated dynamically: " << *dynamicInteger << endl;
    cout << "String allocated dynamically: " << dynamicString << endl;

    delete [] dynamicInteger;
    delete [] dynamicString;

    return 0;

}