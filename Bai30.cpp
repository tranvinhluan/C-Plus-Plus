// Tham Chiếu Hằng
// const reference

#include <iostream>
using namespace std;

string fullName(const string &firstName, const string &lastName) { // ko thể thay đổi giá
	return firstName + lastName;								   // trị tham chiếu nữa.
}

double addTwoNumber(const double &a, const double &b) {
	return a + b;
}

int main() {
	cout << fullName("Luan", "Tran") << endl;
	return 0;
}