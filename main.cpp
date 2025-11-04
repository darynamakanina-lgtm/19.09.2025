#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    cout << "Sum of numbers 1 to 5: " << sum << endl;
    cout << "Program finished successfully!" << endl;
    return 0;
}