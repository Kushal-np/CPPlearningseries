#include <iostream>
using namespace std;

class Animal{
    public:
    void animalSound(){
        cout << "This animal makes sound" << endl;
    }
};

class Pig: public Animal{
    public : 
    void animalSound(){
        cout << "the pig says: wee wee " << endl;
    }
}