/*
	11. Lớp bạn trong C++

	+, 1 lớp có thể là bạn của 1 lớp hay nhiều lớp khác
*/

#include <iostream>
using namespace std;

class A;

class B {
public:
	void showA(A);
	void setAData(A&);
};
//==========================================================================
class A {
	int data;

public:
	A() {
		data = 100;
	}
	void show();
	friend class B; // B sẽ được là bạn của A ==> các hàm void showA(A), void setAData(A&) sẽ tự động là hàm bạn của lớp A
	// ==> các hàm này sẽ truy cập đc đến dữ liệu (Private) của lớp A.
};
//==========================================================================
void B::showA(A a) {
	cout << a.data << endl;
}

void A::show() {
	cout << data << endl;
}

void B::setAData(A& a) { 
	a.data = 255;
}
//==========================================================================
int main() {

	A a;

	B b;
	b.showA(a); // hien thi du lieu goc, tức chưa thay đổi.

	b.setAData(a); // thay doi du lieu data cua doi tuong a, lop A
	b.showA(a);

	return 0;
}