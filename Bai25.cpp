//3. Tại sao hàm main () lại return 0?
//==> Báo hệ điều hành biết chương trình của chúng ta đã hoàn thành chính xác.

#include <iostream>
using namespace std;
int main() {
	cout << "Hello World!" << endl;

	return EXIT_SUCCESS; // tương đương return 0;
}