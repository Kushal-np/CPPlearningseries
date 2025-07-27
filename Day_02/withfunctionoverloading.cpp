#include <iostream>
using namespace std;

int plusee( int x , int y){
    return x+y;
}
int plusee(int x , int y , int z ){
    return x+y+z;
}

int main(){
    int result1 = plusee(2,3);
    int result2  = plusee(2,3,4);
    cout << result1 << endl;
    cout << result2 << endl;
    return 0 ; 
}