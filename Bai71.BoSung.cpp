/*
	AUTO KEYWORD

	- Khi khai báo biến không dùng auto được.
	- khai báo và gán luôn giá trị thì dùng auto được.
	- Biến bắt buộc phải có giá trị khởi tạo khi sử dụng từ khóa auto.
	- Từ khóa auto không thể sử dụng làm tham số hàm.
ví dụ:
	int add(auto a, auto b) // sai
	{
		return a + b;
	}

		auto add(int a, int b) // đúng
	{
		return a + b; // Vì a và b có kiểu int, nên hàm add() sẽ có kiểu trả về là int.
	}


*/

#include <iostream>
using namespace std;
int a;
int b = 10;
auto showInfo() {
	//...
}

auto isOk(int x) {
	if (x < 5)
	{
		return true;
	}
	return false;
}

int main() {
	auto x = 0;
	auto y = 1.25f;
	auto z = 2.56;

	cout << "Kieu cua bien z: " << typeid(showInfo()).name() << endl; 
	// xem kiểu dữ liệu của biến khi sử dụng auto thông qua hàm typeid().name()

	return 0;
}