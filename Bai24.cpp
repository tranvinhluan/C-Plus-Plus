/*	2. Truyền tham chiếu và truyền giá trị
	- Truyền tham chiếu khi muốn cho phép hàm thay đổi giá trị của biến truyền vào hàm.
	- Truyền giá trị khi kiểu của tham số là những kiểu đơn giản.
*/

#include <iostream>
using namespace std;

void updateNumber(int& b) { // &: giao nhiệm vụ cho hàm nào đó.
	b = b * 5;				// được phép truy xuất đến giá trị gốc của tham số nhận đc
							// và thay đổi giá trị.
}

void updateBalance(int& balance, int change) {
	balance += change;
}

int main() {
	int a = 100;
	int amount = 1000;
	// nạp tiền vào tk thẻ
	updateBalance(amount, 2000);

	cout << amount << endl;

	// rút tiền khỏi tk thẻ
	updateBalance(amount, -3000);

	cout << "So du tk sau khi rut: " << amount << endl;
	
	return 0;
}