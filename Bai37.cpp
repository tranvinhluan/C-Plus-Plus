/*
	2. Con trỏ và tham chiếu (Tham số của hàm)
*/

#include <iostream>
using namespace std;

void changeNumber(int n) { // tham số đơn giản, kiểu nguyên thủy, kiểu dữ liệu đơn giản.
	n = 2 * n;
}

void changeNumber2(int* n) { // truyền con trỏ ==> trong TH kiểu dữ liệu lớn, có thể giá
	// trị null, có thể áp dụng thao tác làm thay đổi địa chỉ, áp dụng dc các phép toán.
	*n = *n * 2;
}

void changeNumber3(int& n) { // truyền tham chiếu ==> thay đổi giá trị gốc, nhưng không
	// muốn nhận giá trị null.
	n = n * 2;
}

void changeNumber3(const int& n) { // tham chiếu hằng, chỉ đọc, ko dc thay đổi giá trị gốc.
	//n = n * 2;
}

int main() {
	int n = 100;
	cout << "Truoc khi goi ham changeNumber: " << n << endl;
	changeNumber(n);
	cout << "Sau khi goi ham changeNumber: " << n << endl;

	cout << "Truoc khi goi ham changeNumber2: " << n << endl;
	changeNumber2(&n);
	cout << "Sau khi goi ham changeNumber2: " << n << endl;

	cout << "Truoc khi goi ham changeNumber3: " << n << endl;
	changeNumber3(n);
	cout << "Sau khi goi ham changeNumber3: " << n << endl;

	return 0;
}