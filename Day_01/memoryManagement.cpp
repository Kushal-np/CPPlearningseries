#include <iostream>
using namespace std;
#include <vector>

int main(){
    int *ptr = new int ; 
    *ptr = 35;
    cout << *ptr << endl;
    return 0 ; 
}

// Here , what this new keyword does is , when you assign the value "new int" to the *ptr , it creates a kind of reserved memory for the variable , means, that the ptr is occupying the memory of int but value isn't assigned, which is then done in another line , where we later assigned it the value *ptr = "35";