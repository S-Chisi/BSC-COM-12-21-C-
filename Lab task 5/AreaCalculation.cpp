#include <iostream>
using namespace std;

double Triangle(double base, double height);
double Rectangle(double length, double width);
double Square (double side);

int main() {
    char selected_num;

    do {
        cout << "Please select the area of the shape to calculate :\n"
             << "1. Square\n"
             << "2. Rectangle\n"
             << "3. Triangle\n"
             << "4. Quit program\n"
             << "Enter selection : "; 
        cin >> selected_num; 
        if (selected_num == '1') {
            double side;
            cout << "Enter square's side length: ";
            cin >> side;
            cout << "Area of the square: " << Square(side) << endl;
        } else if (selected_num == '2') {
            double length, width;
            cout << "Enter rectangle's length: ";
            cin >> length;
            cout << "Enter rectangle's width: ";
            cin >> width;
            cout << "Area of the rectangle: " << Rectangle(length, width) << endl;
        } else if (selected_num == '3') {
            double base, height;
            cout << "Enter triangle's base length: ";
            cin >> base;
            cout << "Enter triangle's height: ";
            cin >> height;
            cout << "Area of the triangle: " << Triangle(base, height) << endl;
    
        } else if (selected_num == '4') {
            cout << "Closing the program...\n";
        } else{
            cout << "Your input was : "<< selected_num << " which is an invalid input" << endl;
            cout << "Please enter a valid input !!!\n";
        }
    } while (selected_num != '4');

    return 0;
}
double Triangle(double base, double height) {
    return 0.5 * base * height;
}
double Rectangle(double length, double width) {
    return length * width;
}
double Square(double side) {
    return side * side;
}    