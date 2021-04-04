#include <iostream>
using namespace std;
int Fibonacci (int n)
{
    if (n < 0)
        return 0;
    else if (n == 1 || n == 0)
        return n;
    else
        return Fibonacci(n-1) + Fibonacci(n-2);
}
int main ()
{
    int i;
    cin >> i;
    for (int j = 0; j < i; j++)
        cout << Fibonacci (j) << " ";
    return 0;
}
