#include <iostream>
using namespace std;

void swapNums(int &x , int&y){
    int z = x ; 
    x = y ; 
    y = z ;


}

int main(){
    int firstNum = 10 ; 
    int secondNum = 9 ; 
    cout << "Before swap" << "\n";
    cout << firstNum << secondNum << endl;

    swapNums(firstNum , secondNum); // &x = firstNum // &x got the address , and &y also got the address
    // and then x = firstNum and y = secondNum 
    cout << "After swap" << endl;

    cout << firstNum << secondNum << endl;
    return 0 ; 
}