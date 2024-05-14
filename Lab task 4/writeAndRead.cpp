#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ofstream Myfile("advancedProgramming.txt");
    string fileData;
    fileData = "Myfile";
    
    if(Myfile.is_open()){
        Myfile << "This is the Advanced Computer Programming Module";
        Myfile.close();
    }
    
    return 0;
}