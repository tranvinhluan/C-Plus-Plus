/*
	15. Tính Đa hình trong C++
	==> tính chất có nhiều dạng, nhiều vai trò.

	- Đa hình tại thời điểm biên dịch hay "compile time polymorphism":
	  Thể hiện ở việc nạp chồng hàm, nạp chồng toán tử.

	- Đa hình tại thời điểm chương trình chạy hay "runtime polymorphism":
	  Thể hiện ở việc ghi đè các phương thức của lớp cha.

	- Lesson 60: function overloading
	- Lesson 61: operator overloading
	- Lesson 62: function overriding
	
	16. Nạp chồng hàm (function overloading)

==> Nạp chồng hàm là 1 hàm dưới cùng 1 cái tên thì nó có thể nhận nhiều tham số khác nhau,
thứ tự tham số khác nhau và kiểu của tham số khác nhau.
*/

#include <iostream>
using namespace std;

class Caculator {
public:
	int sum(int a, int b) {
		return a + b;
	}

	float sum(float a, float b) {
		return a + b;
	}

	long sum(long a, long b) {
		return a + b;
	}

	float sum(int a, float b) {
		return a + b;
	}

	float sum(float a, int b) {
		return a + b;
	}

	int sum(int* a, size_t size) { // nhập mảng và số phần lượng phần tử:  size
		int s = 0;
		for (size_t i = 0; i < size; i++)
		{
			s += a[i];
		}
		return s;
	}
};

class Payment {
public:

};

int main() {
	int a[10] = { 1, 2, 3, 4, 5 };
	Caculator c;
	cout << c.sum(100, 200) << endl;
	cout << c.sum(100, 25.25f) << endl;
	cout << c.sum(25.0f, 30.0f) << endl;
	
	cout << c.sum(a, 2) << endl;

	return 0;
}