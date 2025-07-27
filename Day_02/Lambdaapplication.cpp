#include <iostream>
#include <functional>  // Needed for std::function

using namespace std;

void doMath(int x, int y, function<int(int, int)> func) {
    cout << "Result: " << func(x, y) << endl;
}

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    auto multiply = [](int a, int b) {
        return a * b;
    };

    doMath(3, 4, add);       // Output: Result: 7
    doMath(3, 4, multiply);  // Output: Result: 12

    return 0;
}
