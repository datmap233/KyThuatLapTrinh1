#include <iostream>
#include <string.h>
#include <string>
#include <fstream>
struct hoten
{
	char* name;
	char* age;
	char* address;
};
using namespace std;
void bai2(double* a, int size);
int bai3(int *a, int size);
void bai6(int* a, int size);
void bai7(char* a);
void swap_by_ptr(int* m, int* n);
void swap_by_ref(int& m, int& n);
void swap_ptr_by_ref(int*& m, int*& n);
void input_output();
void output(hoten Sinhvien);
void ascending(int* a, int n);
void descending(int* a, int n);
void challenge();