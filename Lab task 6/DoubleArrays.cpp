#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    cout << "Enter number of rows : ";
    cin >> rows;
    if (rows > 3) {
        cout << "Maximum number of rows has exceeded. Set number of rows to 3." << endl;
        rows = 3;
    }

    cout << "Enter number of columns : ";
    cin >> columns;
    if (columns > 3) {
        cout << "Maximum number of columns has exceeded. Set number of columns to 3." << endl;
        columns = 3;
    }

    
    double** dynamicArray = new double*[rows];
    for (int x = 0; x < rows; x++) {
        dynamicArray[x] = new double[columns];
    }

    double number = 2.0;
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            dynamicArray[x][y] = number++;
        }
    }
 cout << "Array elements:" << endl;
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < columns; y++) {
            cout << dynamicArray[x][y] << " ";
        }
        cout << endl;
    }

    for (int x = 0; x < rows; x++) {
        delete[] dynamicArray[x];
    }
    delete[] dynamicArray;

    return 0;
}

   