#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    cout << fixed;

    int w = 13;
    double g = 0.165;

    cout.precision(6);    
    cout << w << " * " << g << " = " << w * g;
    return 0;
}