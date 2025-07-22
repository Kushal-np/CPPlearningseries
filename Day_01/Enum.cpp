#include <iostream>
using namespace std;
#include <vector>
// enum level {
//     LOW,
//     MEDIUM , 
//     HIGH 
// };
// enum level myVar ; 
// enum level myVar = MEDIUM ; 
// int main(){
//     enum level myVar = MEDIUM ; 
//     cout << myVar ; 
//     return 0 ; 
// }

// enum in a switch statement 

enum Level {
  LOW = 1,
  Mid , 
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
}