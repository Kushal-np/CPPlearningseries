#include <iostream>
using namespace std;
#include <vector>

int main(){
    int numGuests ; 
    cout << "How many guests"<< endl;
    cin >> numGuests ; 

    if(numGuests <= 0){
        cout << "Numbers of guests must be atleasts 1" ; 
        return 0 ; 
    }

    string* guests = new string[numGuests];
    cout<< *guests << endl;
    cout << numGuests << endl;

    for(int i=0 ; i<numGuests ; i++){
        cout << "Enter name of guests" << (i+1) << ":" << endl;
        cin >> guests[i];
    }

    cout << "\n Guests checked in:\n" << endl;
    for(int i = 0 ; i<numGuests ; i++ ){
        cout << guests[i] << "\n";
    }
    delete[] guests;
    return 0 ; 
}