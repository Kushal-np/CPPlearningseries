#include <iostream>
using namespace std;
#include <vector>;


class Employee {
    private :
    int salary ; 
    public :
        Employee(int s){
            salary = s; 
        }
    
    friend void displaySalary(Employee emp);
};


void displaySalary(Employee emp){
    cout << "Salary:" << emp.salary ; 
}

 int main(){
    Employee myEmp(50000);
    displaySalary(myEmp);
    return 0 ;
}