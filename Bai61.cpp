/*
	17. Nạp chồng toán tử (operator overloading)
==> Cho phép chúng ta sử dụng những dữ liệu do chúng ta tự định nghĩa ra áp dụng với các phép toán.
	
	Chồng toán tử: + - * / hai đa thức
	Những toán tử nào không thể nạp chồng?
	 . :: ?: sizeof .*
	- . gọi thành phần struct, class
	- ?: toán tử 3 ngôi

*/

#include <iostream>
using namespace std;

//2 cách:
// cách 1: coi là hàm thành phần của lớp
// cách 2: thông qua hàm bạn Friend

class PhanSo {
	int tu;
	int mau;
public:
	PhanSo() {
		tu = 0;
		mau = 1;
	}
	PhanSo(int a, int b) {
		tu = a;
		mau = (b == 0) ? 1 : b;
	}
	void showInfo() {
		cout << tu << "/" << mau << endl;
	}
//==========================================================================
	// Cách 1:
	PhanSo operator + (PhanSo const&); // truyền tham chiếu cho nhẹ, dùng const ko thay đổi
	PhanSo operator * (PhanSo const&);

	// Cách 2:
	friend PhanSo operator - (PhanSo const&, PhanSo const&);
	friend PhanSo operator / (PhanSo const&, PhanSo const&);
};
//==========================================================================
// định nghĩa chi tiết ( cách 1 )
PhanSo PhanSo::operator+(PhanSo const& b) { // theo kiểu hàm thành phần của lớp
	PhanSo s;
	s.tu = tu * b.mau + mau * b.tu;
	s.mau = mau * b.mau;
	return s;
}

PhanSo PhanSo::operator*(PhanSo const& b) {
	PhanSo s; 
	s.tu = tu * b.tu;
	s.mau = mau * b.mau;
	return s;
}
//==========================================================================
// định nghĩa chi tiết (cách 2)
PhanSo operator-(PhanSo const& a, PhanSo const& b) { // theo kiểu hàm bạn
	PhanSo s;
	s.tu = a.tu * b.mau - a.mau * b.tu;
	s.mau = a.mau * b.mau;
	return s;
}

PhanSo operator/(PhanSo const& a, PhanSo const& b) {
	PhanSo s;
	s.tu = a.tu * b.mau;
	s.mau = a.mau * b.tu;
	return s;
}
//==========================================================================

int main() {

	PhanSo a(10, 3);
	PhanSo b(6, 9);
	PhanSo tong = a + b;
	PhanSo hieu = a - b;
	PhanSo tich = a * b;
	PhanSo thuong = a / b;

	tong.showInfo();
	hieu.showInfo();
	tich.showInfo();
	thuong.showInfo();

	return 0;
}