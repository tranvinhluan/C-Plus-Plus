/*
	8. Hàm/phương thức template (template funtion)
	==> viết chung 1 hàm cho nhiều kiểu dữ liệu khác nhau dùng
*/

#include<iostream>
using namespace std;

//template<class V, class U, class V>  V findMin(V a, V b) {
//	return (a > b) ? a : b;
//}

template<class T> T findMax(T a, T b) {
	return (a > b) ? a : b; // toán tử 3 ngôi
}

template<class T> void showInfo(T* arr, size_t size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << findMax<char>('s', 'i') << endl;
	cout << findMax<int>(20, 60) << endl;
	cout << findMax<float>(3.1415f, 3.1425f) << endl;

	char arr[] = { 'h', 'e','l', 'l', 'o', '!' };
	int b[] = { 1,2,3,4,5,6,7,8,9 };
	double c[] = { 1.23, 3.25, 6.39, 9.81, 7.34 };

	showInfo<char>(arr, sizeof(arr) / sizeof(char)); // phép chia tức là khỏi phải đếm số lượng phần tử.
	showInfo<int>(b, sizeof(b) / sizeof(int));
	showInfo<double>(c, sizeof(c) / sizeof(double));

	return 0;
}
