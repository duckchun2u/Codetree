#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;
    string result;
    result = (score == 100) ? "pass" : "failure";
    cout << result; 
    return 0;
}