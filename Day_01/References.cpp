#include <iostream>
using namespace std;
#include <vector>

int main(){
    string food = "Pizza";
    string &meal = food;
    cout << meal << endl;
    return 0 ; 
}