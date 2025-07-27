#include <iostream>
using namespace std;

class Employee{
    protected:
    int salary ; 
};

class Programmer: public Employee{
    public:
    int bonus;
    void setSalary(int s){
        salary = s;
    }
    int getSalary(){
        return salary ; 
    }
};
