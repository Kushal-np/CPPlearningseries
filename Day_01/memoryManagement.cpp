#include <iostream>
using namespace std;
#include <vector>

int main(){
    int *ptr = new int ; 
    *ptr = 35;
    cout << *ptr << endl;
    return 0 ; 
}