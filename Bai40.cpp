/*
	5. Con trỏ null, con trỏ void

	_ con trỏ null là con trỏ mà trỏ ko tới đâu cả, trỏ tới vùng vô định trong vùng nhớ.
	+, thông thường người ta sử dụng giá trị null để gán cho con trỏ trong trường hợp
	chưa biết con trỏ sẽ trỏ đến cái vị trí vùng nhớ nào, lấy địa chỉ biến nào.

	+, hoặc sau khi sử dụng con trỏ xong rồi, muốn giải phóng bộ nhớ của vùng nhớ trước đó mà
	con trỏ trỏ tới, thì ta gán con trỏ này trỏ đến null và sau đó giải phóng vùng nhớ trước đấy.

	_ con trỏ void: là con trỏ ko xác định kiểu, nên ko biết rõ kích thước truyền vào.
	_ thường xuất hiện trong tham số  của hàm để chỉ ra sự linh hoạt của kiểu, của con trỏ mà
	ta có thể chuyển vào đó. Sau đó ta phải chuyển đổi kiểu thì mới sử dụng đc. 

*/
#include <iostream>
using namespace std;

void showExample(void* data, int size) { // con trỏ void
	if (size == sizeof(char)) {
		char* charPtr = (char*)data; // ep kieu con tro tu kieu void* sang char*
		cout << *charPtr << endl;
	}
	else if (size == sizeof(int)) {
		int* ptr = (int*)data; // hoặc int* intPtr = (int*)data;
		cout << *ptr << endl;
	}
	else if (size == sizeof(double)) {
		double* dPtr = (double*)data;
		*dPtr *= 2;
		cout << *dPtr << endl;
	}
}

int main() {
	//int* ptr = NULL; // con trỏ null đc gán trực tiếp hoặc
	//ptr = 0; // 2 là gán bằng 0, địa chỉ 0 trong vùng nhớ là khoảng vô định, ko xác định.

	double x = 3.141592;
	char c = 'H';
	int* ptr;
	int a = 255;
	ptr = &a;
	showExample(&x, sizeof(double));
	showExample(&c, sizeof(char));
	showExample(ptr, sizeof(int));
	return 0;
}