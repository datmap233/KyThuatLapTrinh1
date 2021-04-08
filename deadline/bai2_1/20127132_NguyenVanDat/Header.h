#include <iostream>
#include <string>
using namespace std;
void parenBit(char a[], char b[], int n, int m, bool x);

int find_first(char a[], char b[], int n, int m, int k);
int find_last(char a[], char b[], int n, int m, int k);
int count_string(char a[], char b[]);
bool groupSum(int start, int sum, int nums[], int target, int size);
bool splitArray(int start, int size, int sum1, int sum2, int nums[], int cnt1, int cnt2);
int helper_method(int chocolate, int wrap);