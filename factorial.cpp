#include <iostream>
using namespace std;

int main() {
    int m, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> m;

    if (m<0){
        cout<< "wrong input"
        return 1:
    }

    for(int i = 1; i <= m; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << m << " = " << factorial;

    return 0;
}
