#include <iostream>
using namespace std;

class myClass{
    public:
        myClass(){
            cout << "called the contstructor here" << endl;
        }
};

int main(){
    myClass myclasss ; 
    return 0 ; 
}