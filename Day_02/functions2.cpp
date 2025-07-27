#include <iostream>
using namespace std;
void sayHello();
int add(int a , int b);

int main(){
    sayHello();
    int result = add( 3, 4);
    
}

void sayHello(){
    cout << "Hello" << endl;
}
int add(int a, int b){
    return a+b;
}