#include <iostream>
using namespace std;

class OOP{
    public :
    void myClass();
    
};
void OOP::myClass(){
    cout << "Hello world" << endl;
}
int main(){
    OOP oop1 ; 
    oop1.myClass();
    return 0 ;
}