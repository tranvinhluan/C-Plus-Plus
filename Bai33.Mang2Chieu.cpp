// MẢNG 2 CHIỀU trong C++
/*	- khai báo
	- khởi tạo
	- truy xuất giá trị
*/
#include <iostream>
using namespace std;

int main() {

	//khai báo:
	int a[10][15]; // 10 hàng, mỗi hàng 15 phần tử.

	/*
	float rates[5][12];

	char friends[200][256];*/

	//khởi tạo:
	//a[1][3] = 100; // hàng 2, cột thứ 4. 

	//a[0][14] = -99; // hàng 1, cột thứ 15. 

	int matrix[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};

	char names[3][10] = {
		{'H', '0', 'A', '\0'},
		{'T', 'H', 'A', 'N', 'G', '\0'},
		{'T', 'O', 'N', 'Y', '\0'}
	};


	// TRUY XUẤT GIÁ TRỊ.

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << names[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}