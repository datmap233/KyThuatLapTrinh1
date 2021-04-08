#pragma once
#include <iostream>
#include <string>
using namespace std;

//bài 1

long double bai1_cau6(int n);
long double bai1_cau7(int n);
long double bai1_cau8(int n);
long double bai1_cau9(int n);
long double bai1_cau11(int n);

//bai 2
long double bai2_cau12(int n, int x);
long double bai2_cau13(int n, int x);
long double bai2_cau14(int n, int x);
long double sum(int n);//tổng số hạng từ 1->n
long double bai2_cau15(int n);
long double bai2_cau16(int n, int x);
long double factorial(int n);//giai thừa
long double bai2_cau17(int n, int x);
long double bai2_cau18(int n, int x);
long double bai2_cau19(int n, int x);

//bai 3
long double Fibonacci(int n);

// bai 4
long double tinhX(int n);
long double tinhY(int n);

//bai 5
long double tinhC(int n, int k);

//bai 6
bool isPalindrome(int left, int right, char* s);

//bai 7
int count(int n);
int sum_number(int n);
int tich_soLe(int n);
bool check_chan(int n);
bool check_le(int n);

//bai 8
void NhapMang(int* a, int &n);
void XuatMang(int *a, int n);
void XuatMangNguoc(int *a, int n);
int TimMax(int *a, int n);
int TimMin(int *a, int n);
int sumPositive(int *a, int n);
bool check_enven(int *a, int n);


bool check_number(char a[]);// kiem tra so vua nhap co phai so nguyen hay khong
bool check_number_bai8(char a[]);
int convert(char a[]);//chuyển char thành int