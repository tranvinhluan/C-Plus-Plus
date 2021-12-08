/*
		GIẢI PHÓNG BỘ NHỚ CẤP PHÁT ĐỘNG.

	Thu hồi bộ nhớ chủ động:
	Cú pháp: delete pointer_name; or delete[] pointer_name;
	- với con trỏ null
	- với con trỏ có/không có tham chiếu
	- với con trỏ mảng ( tức mảng 1 chiều )
	- với con trỏ void (phải ép sang kiểu con trỏ khác thì mới thu hồi dc ).
	- với con trỏ trỏ tới con trỏ ( áp dụng với mảng 2 chiều ). 
*/
#include <iostream>
using namespace std;

int main() {
	
	// Với con trỏ null:
	int* nPtr = NULL; 
	delete nPtr;
//=============================================================
	// Với con trỏ có/ ko có tham chiếu

	double* dPtr = new double; // con trỏ chưa có tham chiếu.
	delete dPtr;

	float* fPtr = new float(3.141592f); // con trỏ đã có tham chiếu ( tức là ta đã ném giá trị vào vùng nhớ cấp phát )
	delete fPtr;

	/* 
	* int* aPtr;
	int a = (100); // biến a là biến tĩnh
	aPtr = &a;
	 ....
	delete aPtr; // ==> lỗi
	*/
	
	// có 2 cách sửa như sau:
	// cách 1:
	/*
	int* aPtr;
	int a = (100); 
	aPtr = &a;
	 ....
	aPtr = NULL; // cho con trỏ trỏ về NULL.
	delete aPtr; 
	*/
	
	// cách 2:
	int* aPtr;
	int* a = new int(100); // tức là con trỏ a dc cấp phát và có giá trị trong vùng nhớ mà nó đang trỏ tới là 100.
	aPtr = a; // gán con trỏ cho con trỏ a
	// ....
	delete aPtr;
// ===>> KHÔNG THỂ THU HỒI BỘ NHỚ CỦA CON TRỎ MÀ CON TRỎ ĐANG TRỎ TỚI KHÔNG PHẢI LÀ CẤP PHÁT ĐỘNG.

//=============================================================
	// -với con trỏ mảng(tức ÁP DỤNG mảng 1 chiều)

	int* arr = new int[100];
	//....
	delete []arr;

//=============================================================
	//-với con trỏ void(phải ép sang kiểu con trỏ khác thì mới thu hồi dc).

	void* vPtr;
	int* b = new int(100);
	vPtr = (int*)b; // cho nó trỏ tới con trỏ b có địa chỉ cụ thể
	delete vPtr;

//=============================================================
	//-với con trỏ trỏ tới con trỏ(áp dụng với mảng 2 chiều).

	int** xPtr; //cấp phát theo cách 3 bài 39.
	xPtr = new int* [100];
	for (size_t i = 0; i < 100; i++)
	{
		xPtr[i] = new int[100];
	}
	// ...
	for (size_t i = 0; i < 100; i++) // làm ngược lại lúc cấp phát.
	{
		delete[] xPtr[i]; // ????????????????????????????????????????
	}
	delete [] xPtr; // ??????????????????????????????????????????

	//for (size_t i = 0; i < 100; i++) // gốc ????????????????????
	//{
	//	delete[] xPtr;
	//}
	//delete xPtr;

	return 0;
}