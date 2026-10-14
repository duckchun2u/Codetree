#include <iostream>
using namespace std;

int main() {
    int m;
    cin >> m;
    if(m==12 || m==1 || m==2) cout << "Winter";
    else if(m >= 3 && m <= 5) cout << "Spring";
    else if(m <= 8) cout << "Summer";
    else if(m <= 11) cout << "Fall";

    return 0;
}