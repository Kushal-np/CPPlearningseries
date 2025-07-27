#include <iostream>
using namespace std;

class Employee{
    private:
    int salary ; 
    public :
        void setSalary(int s){
            salary = s; 
        }

        int getSalary( ){
        return salary;
        }
};
int main(){
    Employee myE ; 
    myE.setSalary(4000);
    cout<< myE.getSalary() << endl;
    return 0 ; 

}