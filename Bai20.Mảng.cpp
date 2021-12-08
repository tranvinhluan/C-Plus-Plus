/*	Mảng một chiều trong C++
==> Mảng là 1 tập của những phần tử cùng kiểu được sử dụng dưới 1 tên chung.

data_type array_name[number_of_elements];

1. Khai báo và khởi tạo
2. Truy xuất các phần tử của mảng
3. Ví dụ minh họa.
*/ 

#include <iostream>;
using namespace std;
int main() {
	
	int a1, a2, a3, a100;
	int a[100]; // khai báo mảng có 100 phần tử ==> mảng tĩnh.
	float x[20];
	double d[50];

	char name[100];

	cin >> name; // đọc vào mảng kí tự, sẽ dừng khi gặp dấu cách.
				 // ví dụ. VINH luan ==> VINH

	//int numbers[10] = { 0,1,2,3,4,5,6,7,8,9 }; // phần tử đầu tiên bắt đầu từ 0.
	//for (size_t i = 0; i < 10; i++)
	//{
	//	numbers[i] *= i;
	//}

	//for (size_t i = 0; i < 10; i++)
	//{
	//	cout << numbers[i] << " ";
	//}

	cout << name << endl;
	return 0;
}