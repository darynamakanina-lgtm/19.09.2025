#include <iostream>
using namespace std;

double averageToN(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) total += i;
    return (double)total / n;
}

int main() {
    int n = 10;
    cout << "Average of numbers 1 to " << n << ": " << averageToN(n) << endl;
    return 0;
}