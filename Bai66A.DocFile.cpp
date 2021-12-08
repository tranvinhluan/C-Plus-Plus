/*
	Đọc ghi file trong C++
	- $66: đọc file text
	- $67: ghi file text
	- $68: ghi file nhị phân
	- $69: đọc file nhị phân
	- $70: Bài tập tổng hợp đọc ghi file với object
//==========================================================================
						ĐỌC DỮ LIỆU TỪ FILE TEXT
*/

#include <iostream>
#include <fstream> 
using namespace std;

void showInfo(int* a, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\nDONE";
}

int main() {
	// mo file -> doc du lieu -> dong file

	 // Mở file: 2 cách
	 //fstream ifs1("input.txt", ios::in); // c1
	 //ifs.open("D:/C++/Source C++/Cplusplus/Cplusplus.txt"); // c2

	ifstream ifs2("input.txt"); // cách này cho dễ nhất.
	ifs2.open("input.txt");
//==========================================================================
	// đọc dữ liệu:
	size_t n;
	int* arr;

	ifs2 >> n; // đọc số lượng phần tử
	arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		ifs2 >> arr[i];
	}
	showInfo(arr, n);
//==========================================================================
	// đóng file:
	ifs2.close();

	return 0;
}