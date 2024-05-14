#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream MyFile("example.txt");
    MyFile.close();
    return 0;
}