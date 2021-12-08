/*
	Mảng hai chiều cấp phát động
*/

#include <iostream>
using namespace std;

int main() {

	int a[10][10]; // mảng 2 chiều cấp phát tĩnh.

	int** array, array2, array3;
	float** floatArray;
	char** friends;

	int ** array = new int* [100]; //bước 1: mảng 2 chiều cấp phát động 100 hàng.
	for (size_t i = 0; i < 100; i++) // bước 2: cấp phát chiều thứ 2.
	{
		array[i] = new int[100];
	}


	fill(array[0], array[0] + 100 * 100, -1);

	for (size_t i = 0; i < 100; i++)
	{
		for (size_t j = 0; j < 100; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}