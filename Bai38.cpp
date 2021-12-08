/*
	3. Con trỏ và mảng một chiều
	+, -, ++, --, <, >, >=, <= , ==

	==> thường áp dụng truy xuất các phần tử của mảng, so sánh con trỏ cùng kiểu.

*/

#include <iostream>
using namespace std;

//void showResult(int* a) { // con trỏ a thay cho mảng b[]
//	for (size_t i = 0; i < 10; i++)
//	{
//		cout << *a << " ";
//		a++;
//	}
//}

void showResult(int* a) {
	int* posPtr = a;
	for (; posPtr <= &a[9]; posPtr++) // thay thế cho vòng lặp của mảng truyền thống
									  // thay thế lẫn nhau giữa các mảng.
	{
		cout << *posPtr << " ";
	}
}

int main() {
// mảng là con trỏ, mà địa chỉ của nó luôn luôn là địa chỉ của phần tử đầu tiên trong mảng.
	int b[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int* ptr = b; // gán tên mảng cho 1 con trỏ, nhưng làm ko ngược lại đc.

	showResult(b);

	return 0;
}