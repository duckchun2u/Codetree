#include <iostream>
using namespace std;

int main() 
{
    cout << fixed;
    double N;
    cin >> N;

    cout.precision(1);
    // 1ft = 30.48cm
    cout << N * 30.48;

    return 0;
}