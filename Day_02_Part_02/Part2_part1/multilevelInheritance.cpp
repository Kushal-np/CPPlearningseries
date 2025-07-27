#include <iostream>
using namespace std;


class MyClass {
    public : 
    void myFunction(){
        cout << "Some content in parent class " ; 
    }
};


class MyChild: public MyClass{
    // inherited the funciton
};

class MyGrandChild: public MyChild{
    //inherited the function
};


int main(){
    MyGrandChild myObj;
    myObj.myFunction();//called the function
    return 0 ; 
}