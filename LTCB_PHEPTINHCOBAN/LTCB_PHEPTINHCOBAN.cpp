﻿#include <iostream>
using namespace std;


int tinhtong(int so1, int so2) {
	//int sotong = so1+so2;
	//return sotong;

	return so1 + so2;
}
int main() {
	//khai báo biến
	int so1, so2, tong;

	//nhap dữ liệu vao biến
	cout << "chuong trinh tinh tong 2 so\n";
	cout << "nhap so thu nhat:";
	cin >> so1;
	cout << "nhap so thu hai:";
	cin >> so2;

	//tính toan
	tong = tinhtong(so1, so2);

	//xuất dữ liệu
	cout << so1 << "+" << so2 << "=" << tong << endl;
	return 0;
}
