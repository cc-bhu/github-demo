#include <iostream>
using namespace std;

int main() {
    int m, fact = 1;

    cout << "Enter a positive integer: ";
    cin >> m;
    if (m<0)
    {
        cout << "Invalid input";
        return 1;
    }
    
    for(int i = 1; i <= m; ++i) {
        fact*= i;
    }
    
    cout << "Factorial of " << m << " = " << fact;

    return 0;
}
