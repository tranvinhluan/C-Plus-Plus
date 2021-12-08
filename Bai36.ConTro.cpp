/*
	Con trỏ trong C++
	1. Tổng quát
	2. Con trỏ và tham chiếu
	3. Con trỏ và mảng 1 chiều
	4. Con trỏ và mảng 2 chiều
	5. Con trỏ NULL
	6. Con trỏ void


	1.Tổng quát:
	_ con trỏ là  biến mà giá trị chứa trong nó là địa chỉ của biến khác.
	_ kiểu dữ liệu* tên con trỏ(+Ptr) ==> dễ phân biệt với biến.
	_ gán địa chỉ cho con trỏ.
	_*aPtr: lấy giá trị chứa trong địa chỉ con trỏ a

*/

#include <iostream>
using namespace std;

int main() {
	int a = 100, x = 111, n = 120;
	double d = 10.25689;
	char c = 'X';
	float f = 3.141592f;

	cout << "Dia chi cua bien a: " << &a << endl;
	cout << "Gia tri cua bien a: " << a << endl;

	int* aPtr; // khai báo con trỏ
	float* fPtr;
	char* namePtr;

	aPtr = &a; // gán địa chỉ biến a cho con trỏ aPtr

	cout << "Gia tri trong con tro aPtr: " << aPtr << endl;
	cout << "Gia tri tai dia chi ma con tro tro toi: " << *aPtr << endl;

	aPtr = &x; // <=> aPtr gán địa chỉ của x = con trỏ aPtr trỏ tới địa chỉ của x

	aPtr = &n;

	cout << "Gia tri trong con tro aPtr: " << aPtr << endl;

	fPtr = &f;
	cout << "Gia tri trong con tro fPtr: " << fPtr << endl;

	return 0;
}