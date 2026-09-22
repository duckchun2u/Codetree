#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    double c;
    cout << fixed;
    c = (double)(a+b) / (a-b);
    cout.precision(2);
    cout << c;
    return 0;
}