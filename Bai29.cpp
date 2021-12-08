﻿// 7. Hàm đệ quy: gọi chính nó để xử lý 1 vấn đề nhỏ hơn.
// Hàm đệ quy thường có điều kiện dừng.


#include <iostream>
using namespace std;

long factor(int n) { // tinh n!
	if (n == 0 || n == 1) { // ==> điều kiện dừng.
		return 1;
	}
	else {
		return n * factor(n - 1);
	}
}

int sumFrom1Ton(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + sumFrom1Ton(n - 1);
	}
}

int main() {
	cout << "Sum of numbers from 1 to 10: " << sumFrom1Ton(10) << endl;
	cout << "10! = " << factor(10) << endl;
	return 0;
}