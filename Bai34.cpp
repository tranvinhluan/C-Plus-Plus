/*
	GÁN GIÁ TRỊ CHO TRƯỚC TRONG MẢNG 1 CHIỀU, 2 CHIỀU:

	Khởi tạo mảng 1 chiều, 2 chiều với giá trị cho trước
	- dùng vòng lặp
	- dùng hàm:   std:: fill(from, to, value);
*/
#include <iostream>
using namespace std;
 
int main() { 
	/*int a[1000];*/

	//MẢNG 1 CHIỀU:

	//for (size_t i = 0; i < 1000; i++)
	//{
	//	a[i] = -1; // cách 1 dùng hàm for.
	//}

	//==============================================
	//fill(a, a + 1000, -1); // cách 2 thay cho vòng lặp

	//for (size_t i = 0; i < 1000; i++)
	//{
	//	cout << a[i] << " ";
	//	if (i % 20 == 0)
	//	{
	//		cout << endl;
	//	}
	//}


	// MẢNG 2 CHIỀU:
	int a[1000];
	int b[10][10] = {};
	 
	//cách 1:
	//for (size_t i = 0; i < 10; i++)
	//{
	//	for (size_t j = 0; j < 10; j++)
	//	{
	//		b[i][j] = -9;
	//	}
	//}

	//==============================================
	// cách 2:
	// fill (b[0], b[0] + 10 * 10, -99);

	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}

	
	return 0;
}