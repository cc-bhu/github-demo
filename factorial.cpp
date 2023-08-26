#include <iostream>
using namespace std;

int main() {
<<<<<<< HEAD
    int n, fact = 1;
=======
    int m, factorial = 1;
>>>>>>> develope

    cout << "Enter a positive integer: ";
    cin >> n;

    if (m<0){
        cout<<"Negative Number";
        return 1;
      }

<<<<<<< HEAD
    for(int i = 1; i <= n; ++i) {
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact;
=======
    for(int i = 1; i <= m; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << m << " = " << factorial;
>>>>>>> develope

    return 0;
}
