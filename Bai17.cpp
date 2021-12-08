﻿/* Cấu trúc lặp do-while

	do {
		nội dung cần lặp
	} while (điều_kiện);
	Viết chương trình có menu cho phép người dùng lựa chọn việc thực hiện 
	cộng trừ nhân chia hai số nhập vào từ bàn phím.
	Menu có dạng:

	============MENU=============
	Các chức năng:
	1. Cộng hai số.
	2. Trừ hai số.
	3. Nhân hai số.
	4. Chia hai số.
	0. Thoát.
	=============================
*/

#include <iostream>
using namespace std;

int main() {
	int luaChon = 0;
	float a, b;
	do {
		cout << "============MENU=============\n";
		cout << "Cac chuc nang:\n";
		cout << "1. Cong hai so.\n2. Tru hai so.\n3. Nhan hai so."
			<< "\n4. Chia hai so.\n0. Thoat.\nXin moi ban chon: ";
		cin >> luaChon;

		switch (luaChon)
		{
		case 0:
			cout << "Cam on ban da su dung dich vu cua chung toi!\n";
			break;

		case 1:
			cout << "Nhap vao hai so: ";
			cin >> a >> b;
			cout << a << " + " << b << " = " << (a + b) << endl;
			break;
			 
		case 2:
			cout << "Nhap vao hai so: ";
			cin >> a >> b;
			cout << a << " - " << b << " = " << (a - b) << endl;
			break;

		case 3:
			cout << "Nhap vao hai so: ";
			cin >> a >> b;
			cout << a << " * " << b << " = " << (a * b) << endl;
			break;

		case 4:
			cout << "Nhap vao hai so: ";
			cin >> a >> b;
			cout << a << " / " << b << " = " << (a / b) << endl;
			break; 

		default:
			cout << "Chon sai chuc nang, vui long thuc hien lai!\n";
			break;
		}
		cout << "=============================\n";
	} while (luaChon != 0);

	return 0;
}

