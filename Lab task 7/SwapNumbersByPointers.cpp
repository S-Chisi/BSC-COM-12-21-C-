#include <iostream>
using namespace std;

void SwapNumbers(int *Var1,int *Var2);
int main(){
    //declaring local variables
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: "<< varA << endl;
    cout << "varB before swap: "<< varB << endl;

    //swapping the variables
    SwapNumbers(&varA,&varB);
    cout << "varA after swap: "<< varA << endl;
    cout << "varB after swap: "<< varB << endl;
     
}
//declaring a function using referencing by pointers
void SwapNumbers(int *Var1,int *Var2){
int temp = *Var1;
     *Var1 = *Var2;
     *Var2 = temp;
}