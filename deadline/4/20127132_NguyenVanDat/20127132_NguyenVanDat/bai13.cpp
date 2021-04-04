#include "Header.h"
char a[10000], b[10000];
int c[10000];
char low_case(char a)
{
    if (a >= 65 && a <= 90)
        return a + 32;
    return a;
}
bool check(int j, char a, char b[])
{
    for (int i = j - 1; i >= 0; i--)
    {
        if (a == b[i])
            return 0;
    }   
    return 1;
}
int count(int j, char a, char b[])
{
    int _count = 0;
    for (int i = j - 1; i >= 0; i--)
    {
        if (a == b[i])
            _count++;
    }
    return _count;
}
void challenge()
{
    int i = 0, j = 0;
    ifstream fileInput("Text.txt", ios::in);

    if (fileInput.fail())
        cout << "Failed to open this file!" << endl;

    while (!fileInput.eof())
    {
        fileInput >> a[i];
        a[i] = low_case(a[i]);
        if (check(i, a[i], b) == 1)
        {
            b[j] = a[i];
            j++;
        }
        i++;
    }
    fileInput.close();

    for (int q = 0; q < j; q++)
    {
        int count1 = 0;
        cout << b[q] << " : [";
        for (int p = 0; p < i; p++)
        {
            if (b[q] == a[p])
            {
                cout << "#";
                count1++;
            }
        }
        cout << "]" << endl;
    }
}