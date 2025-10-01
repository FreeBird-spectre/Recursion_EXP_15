//Abir Seth
//PRN-24070123003
//ENTC A1

#include <iostream>
using namespace std;

int factorial(int number) {
    if (number == 0) {
        return 1;
    }

    else {
        return number * factorial(number - 1);
    }
}

int main() {
    int input;

    cout << "Enter a positive integer: ";
    cin >> input;

    cout << "Factorial of " << input << " is: " << factorial(input) << endl;

    return 0;
}

Enter a positive integer: 7
Factorial of 7 is: 5040


=== Code Execution Successful ===
