﻿/*Cấu trúc vòng lặp For

	for (Khởi_tạo; Điều_kiện; Bước_nhảy) {
		 Nội dung cần thực hiện
	}

*/

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i <= n; i++) {
		sum += i;
	}

	cout << "Tong tu 0 toi " << n << " : " << sum << endl;

	return 0;
}