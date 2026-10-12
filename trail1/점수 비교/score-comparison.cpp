#include <iostream>
using namespace std;

int main() {
    int math_A, math_B, eng_A, eng_B;
    cin >> math_A >> eng_A;
    cin >> math_B >> eng_B;

    if((math_A > math_B) && (eng_A > eng_B)) cout << "1";
    else cout << "0";

    return 0;
}