/* Cấu trúc lặp While

	While(điều_kiện) {
		nội dung cần thực hiện lặp
}
	Ví dụ  sử dụng vòng lặp while:
	Viết chương trình lặp n lần việc nhập vào giá trị nguyên dương và hiển thị
	giá trị đảo của số vừa nhập. 
	Ví dụ n = 3:
		Lần 1: nhập 123 --> 321
		Lần 2: nhập 565656 --> 656565
		Lần 3: nhập 98877 ---> 77889

		//123 -- > 321
			//	tDao = 3, t = 12
			// tDao = 30 + 2 = 32; t = 1;
			// 320 + 1 = 321; t = 0

*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap so duong n: ";
	cin >> n; // doc n tu ban phim

	if (n > 0) {
		while (n--) {
			int t;
			cout << "Nhap so can dao: ";
			cin >> t;
			if (t > 0) {
				cout << t << "---> ";
				int tDao = 0;
				while (t) { // hieu ngam t khac 0.
					tDao = tDao * 10 + t % 10;
					t /= 10;
				}
				cout << tDao << endl;

			}
			else {
				cout << "Vui long nhap t > 0! " << endl;
			}

		}
	}
	else {
		cout << "Vui long nhap n > 0! " << endl;
	}
	return 0;
}