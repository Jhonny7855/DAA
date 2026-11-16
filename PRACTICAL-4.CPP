
#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

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
    int n;

    cout << "Enter a number: ";
    cin >> n;

    // Iterative Execution Time
    auto start1 = high_resolution_clock::now();

    long long result1 = iterativeFactorial(n);

    auto end1 = high_resolution_clock::now();

    double time1 = duration<double, micro>(end1 - start1).count();

    // Recursive Execution Time
    auto start2 = high_resolution_clock::now();

    long long result2 = recursiveFactorial(n);

    auto end2 = high_resolution_clock::now();

    double time2 = duration<double, micro>(end2 - start2).count();

    // Display Results
    cout << "\n--- Iterative Method ---";
    cout << "\nFactorial = " << result1;
    cout << "\nExecution Time = " << time1 << " microseconds";

    cout << "\n\n--- Recursive Method ---";
    cout << "\nFactorial = " << result2;
    cout << "\nExecution Time = " << time2 << " microseconds";

    return 0;
}
