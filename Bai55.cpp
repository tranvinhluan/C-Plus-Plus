/*
	10. Hàm bạn trong C++

	==> +, là hàm có khả năng truy cập vào thành phần Private của lớp nào đó.
		+, Là hàm đặc biệt, ko phải là hàm của lớp, ko phải thành phần của lớp Nhưng
		nó có thể truy cập trực tiếp đến những dữ liệu Private của 1 lớp.
		+, dùng trong 2 trường hợp: ( chỉ khi thực sự cần thiết )
		- Muốn test dữ liệu
		- Sử dụng trong chồng toán tử
		+, Lớp nào cho phép làm bạn thì lớp đó sẽ bị truy cập thành phần, dữ liệu Private
		1 cách trực tiếp

	==> Nếu X là bạn Y thì X có toàn quyền truy cập dữ liệu của Y Nhưng ko ngược lại đc.

	==> Hàm bạn có 3 khả năng:
		+, là hàm bình thường
		+, là hàm template
		+, là hàm hay phương thức của 1 lớp khác có thể làm bạn của 1 lớp
*/

#include <iostream>
using namespace std;

class A;

class B {
public:
	void showA(A);
};
//==========================================================================
class A {
	friend void setData(A&);
	int data; // đây là thành phần Private

public:
	A() {
		data = 100;
	}
	void show();
	friend void B::showA(A);
};
//==========================================================================

void B::showA(A a) { // hàm thành phần của lớp B sẽ đc là bạn của lớp A
	cout << a.data << endl;
}
//==========================================================================
void A::show() { // đây là hàm thành phần của lớp vì có ::
	cout << data << endl;
}

void setData(A& a) { // Đây là hàm bình thường bên ngoài, ko phải hàm thành phần của lớp A.
	a.data = 255; // đây là hàm mà ta truy cập và thay đổi trực tiếp dữ liệu Private của lớp A
} // ta khai báo hàm này "sẽ được là hàm bạn" ở trong cái lớp muốn truy cập, tức lớp A.

int main() {
	A a;
	setData(a);
	/*a.show();*/

	B b;
	b.showA(a);

	return 0;
}