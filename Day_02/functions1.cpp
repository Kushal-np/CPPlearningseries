#include <iostream>
using namespace std;
#include <vector>
void myFunction(string country = " Norway"){
    cout << country << endl;
}

void secondFunction(string name1 , string name2){
    cout << name1 << endl;
    cout << name2 << endl;
}
int main(){
    return 0 ; 
    myFunction();
}

