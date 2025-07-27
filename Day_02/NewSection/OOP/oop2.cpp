#include <iostream>
using namespace std;

class MyFactory {
    public:
        string brand ; 
        string model ; 
        string name;
        int year;
};

int main(){
    MyFactory car1 ; 
    car1.brand = "Toyota";
    car1.model = "Something";
    car1.name = "Suzuki";
    car1.year = 2020;

    cout << car1.name << endl;
    cout << car1.model << endl;
    cout << car1.brand << endl;
    cout << car1.year << endl;
}