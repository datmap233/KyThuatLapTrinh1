#pragma once
#include <iostream>
#include <algorithm>
using namespace std;
int lambda(int a, int b);
void multiply(int a, int b, int (*lambda)(int a, int b));