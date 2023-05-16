#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> n;
if (n<0){
    cout<<"negative number mt daal";
 return -1;}
    for(int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial;

    return 0;
}
