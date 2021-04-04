#include <iostream>
using namespace std;
int giaithua (int n)
{
    if (n == 1)
        return n;
    else
        return n*giaithua(n-1);
}
int main()
{
    int i;
    cin >> i;
    cout << giaithua(i) << endl;
    return 0;
}
