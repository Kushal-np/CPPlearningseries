#include <iostream>
using namespace std;

int main(){
    // auto message = [](){
    //     cout << "hello world" << endl;
    // };
    // message();
    // return 0 ; 
    auto add = [](int a , int b){
        return a+b;
    };
    cout << add(3,4) << endl;
    return 0 ; 

    auto sub = [](int a, int b){
        return a-b;
    };
    cout << sub(5,4) << endl;

}
