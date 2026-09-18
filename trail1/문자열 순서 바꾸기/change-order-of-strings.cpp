#include <iostream>
using namespace std;

int main() {
    string S, T, temp;
    cin >> S >> T;
    temp = S;
    S = T;
    T = temp;

    cout << S << "\n" << T;

    return 0;
}