#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    // 1ft == 30.48cm
    // 1mi == 160934cm

    cout << fixed;

    cout.precision(1);
    cout << "9.2ft = " << 9.2 * 30.48 << "cm\n";
    cout << "1.3mi = " << 1.3 * 160934 << "cm";
    return 0;
}