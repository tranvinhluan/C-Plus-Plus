//	6. Khai báo hàm nguyên mẫu
// ==> Phải khai báo tên hàm, kiểu trả về của hàm, kiểu của những tham số mà sẽ sử dụng
// trong hàm đó. Đứng ở đầu chương trình, trước Main.



#include <iostream>
using namespace std;

int addTwoNumbers(int, int); // khai báo hàm nguyên mẫu.
float divAbyB(int, int);
void showResult(float);

int main() {

	cout << addTwoNumbers(100, 266) << endl;

	return 0;
}

int addTwoNumbers(int a, int b) { // định nghĩa hàm ( xdinh cụ thể tên của tham số ).
	return (a + b);				  // viết nội dung của hàm trong { }  
}

float divAbyB(int a, int b) {
	return 1.0f * a / b;
}

void showResult(float result) {
	cout << "Result =" << result << endl;
}