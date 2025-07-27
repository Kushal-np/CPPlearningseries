#include <iostream>
using namespace std;
int x = 4 ;
void myFunction(){
    int x = 5 ; 
    cout << x ; 
};
int main(){
    myFunction();
    cout << x << endl;
    return 0 ; 
}