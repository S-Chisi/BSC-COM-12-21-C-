#include <iostream>

using namespace std;

int main() {
    string variable[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    int numVariable = sizeof(variable) / sizeof(variable[0]);

    for (int v = 0; v < numVariable; v++) {
        if (variable[v][0] == 'B') {
            cout << variable[v] << endl;
        }
    }

    return 0;
}