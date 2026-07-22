#include <iostream>
using namespace std;

// Recursive Factorial Function
long long recursiveFactorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return n * recursiveFactorial(n - 1);
}

// Iterative Factorial Function
long long iterativeFactorial(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int main()
{
    int n, choice;

    cout << "Enter a number: ";
    cin >> n;

    cout << "\nChoose Method\n";
    cout << "1. Iterative Factorial\n";
    cout << "2. Recursive Factorial\n";
    cout << "Enter Choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "\nFactorial = " << iterativeFactorial(n);
            break;

        case 2:
            cout << "\nFactorial = " << recursiveFactorial(n);
            break;

        default:
            cout << "\nInvalid Choice!";
    }

    return 0;
}
