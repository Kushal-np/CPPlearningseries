#include <iostream>
using namespace std;

class MyClass{
    public:
        int MyNum ;
        string MyString;
};

int main(){
    MyClass myObj;
    myObj.MyNum = 15;
    myObj.MyString = "some text";

    cout << myObj.MyNum << endl;
    cout << myObj.MyString << endl;
}