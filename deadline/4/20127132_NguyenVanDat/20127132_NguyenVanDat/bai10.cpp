#include "Header.h"
void output(hoten Sinhvien)
{
	cout << "Ten: " << Sinhvien.name << endl;
	cout << "Tuoi: " << Sinhvien.age << endl;
	cout << "Dia chi: " << Sinhvien.address << endl;
}
void input_output()
{
	hoten Sinhvien;
	Sinhvien.name = new char[30];
	Sinhvien.age = new char[3];
	Sinhvien.address = new char[30];
	cout << "Nhap ten: ";
	cin.ignore();
	gets_s(Sinhvien.name, 30);
	cout << "Nhap tuoi: ";
	gets_s(Sinhvien.age, 3);
	cout << "Nhap dia chi: ";
	gets_s(Sinhvien.address, 30);
	output(Sinhvien);
}
