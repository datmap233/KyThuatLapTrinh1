#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fileInput("D:\\Code\\c++\\ky thuat lap trinh\\deadline\\4\\20127132_NguyenVanDat\\Text.txt", ios::in);

    if (fileInput.fail())
        cout << "Failed to open this file!" << endl;

    while (!fileInput.eof())
    {
        char n;
        if (fileInput >> n)
            cout << n << " ";
        else
            return -2;
    }
    cout << endl;

    fileInput.close();

    system("pause");
    return 0;
}
