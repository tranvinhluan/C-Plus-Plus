/*
	4. Con trỏ và mảng hai chiều
	+, -, ++, --, <, >, >=, <= , ==
*/

#include <iostream>
using namespace std;
#define N 100

// +, 3 cách khai báo mảng 2 chiều:
// +, Cách viết tham số của 1 hàm để chúng ta truyền cái mảng theo từng cách ta khai báo mảng.


void showResult0(int* a) {
	for (size_t i = 0; i < 10; i++)
	{
		cout << *(a + i) << " "; // ví dụ i = 0 thì a[0], i = 1 thì truy cập tới a[1]
	}
}


void showResult(int a[][10]) { // theo khai báo cách 1, số phần tử trong [] thứ 2 bằng đúng số phần tử của mảng khai báo.
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			cout << *(*(a + i) + j) << " "; // *(truy cập đến hàng i cột j) ==> lấy giá trị hàng i cột j
		}
		cout << endl;
	}
}


void showResult1(int* a[N]) { 
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
}


void showResult2(int** a) {
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
}

int main() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	/*showResult0(arr);*/

	int a[10][10] = {}; // cách 1: đơn giản nhất là khai báo mảng tĩnh, 
						//xác định luôn số phần tử theo hàng và theo cột.
	
	int* b[10];	// cách 2: khai báo 1 mảng con trỏ 
	for (size_t i = 0; i < 10; i++)
	{
		b[i] = new int[10];
	}


	int** c = new int* [3]; // cách 3: Khai báo con trỏ, trỏ đến con trỏ.
	for (size_t i = 0; i < 3; i++)
	{
		c[i] = new int[3];
	}

	//===>> dù cách nào thì cũng phải đảm bảo đã khai báo cụ thể thì sau đó mới sử dụng đc.
	//============================================================

	// Mỗi khi sử dụng mảng hay khai báo kiểu mảng, kiểu con trỏ thì nó đều được sử dụng
	// như mảng bình thường.
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			c[i][j] = i + j;
		}
	}

	showResult(a);


	//showResult(b); ==> lỗi ko tương thích 
	//showResult1(b);
	//showResult2(b);

	//showResult(c); ==> Lỗi vì mảng a tường minh. 
	//showResult1(c);
	//showResult2(c);

	return 0;
}