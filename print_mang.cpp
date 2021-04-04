#include <iostream>

using namespace std;

#define NROWS 10
#define NCOLS 10

// method 1
void printArray1(int a[][NCOLS], int m, int n) {
	for (int irow = 0; irow < m; irow++) {
		for (int icol = 0; icol < n; icol++)
			cout << *(*(a + irow) + icol) << "\t";
		cout << endl;
	}
}
// method 2
void printArray2(int a[][NCOLS], int m, int n) {
	int(*p)[NCOLS] = a;
	for (int irow = 0; irow < m; irow++) {
		for (int icol = 0; icol < n; icol++)
			cout << *(*(p + irow) + icol) << "\t";
		cout << endl;
	}
}
// method 3
void printArray3(int a[][NCOLS], int m, int n) {
	int *p;
	p = (int *)a;
	for (int row = 0; row < m; row++) {
		for (int col = 0; col < n; col++)
			cout << *(p + row * NCOLS + col) << "\t";
		cout << endl;
	}
}
// method 4
void printArray4(int a[][NCOLS], int m, int n) {
	int* p;
	p = (int*)a;
	int d = 0;
	for (int i = 0; i < m; i++) {		
		for (int j = 0; j < n; j++)
			cout << *(p + d + j) << "\t";
		cout << endl;
		d += NCOLS;
	}
}
// method 5
void printArray5(int a[][NCOLS], int m, int n) {
	int *p, *q;
	q = (int *)a;
	for (int row = 0; row < m; row++, q+=NCOLS) {
		p = q;
		for (int col = 0; col < n; col++, p++)
			cout << *p << "\t";
		cout << endl;
	}
}
// print statistics
void printStat(float a[][NCOLS], int m, int n) {	
	float(*p)[NCOLS] = a;
	float min = **p, max = **p, sum = 0, mean, std;
	float aij;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			aij = *(*(p + i) + j);
			if (aij < min)	min = aij;
			if (aij > max)	max = aij;
			sum += aij;
		}
	}
	float t = m * n;
	mean = (float)sum / t;

	float S = 0;
	float dij = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++) {
			dij = (*(*(p + i) + j) - mean);
			S +=  dij * dij;
		}
	std = S / t;
	//print
	cout << "Max = " << max << endl << "Min = " << min << endl << "Mean = " << mean << endl << "Std = " << std;
}
int main() {
	float a[NROWS][NCOLS] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};
	int m = 3, n = 4;
	printStat(a, m, n);	
}