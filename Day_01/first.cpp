#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> ages = {10, 20, 39, 49, 48, 3, 44, 34, 54, 34};

    int length = ages.size();
    cout << "The number of people is: " << length << endl;
    cout << "We will ask some questions below. Answer us based on that:\n";
    cout << "1. I want the average age of people\n";
    cout << "2. I want the total sum of age\n";
    cout << "3. I want to add a user\n";

    int choice_no;
    cin >> choice_no;

    int sum = 0;

    if (choice_no == 1) {
        for (int i = 0; i < length; i++) {
            sum += ages[i];
        }
        int average = sum / length;
        cout << "Average age is: " << average << endl;
    } else if (choice_no == 2) {
        for (int i = 0; i < length; i++) {
            sum += ages[i];
        }
        cout << "Total sum of ages: " << sum << endl;
    } else {
        cout << "Enter age to add: ";
        int age_value_to_add;
        cin >> age_value_to_add;
        ages.push_back(age_value_to_add);
        cout << "Age added: " << ages.back() << endl;
    }

    return 0;
}
