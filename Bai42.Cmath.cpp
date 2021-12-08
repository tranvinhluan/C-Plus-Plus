/*
	Thư viện cmath

	nhấn ctrl + chuột trái vào Cmath để mở thư viện.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x = 27;
	
	double z = 2.13;

	float y = -3.52;

	int a = 4;

	cout << ceil(z) << endl; // làm tròn lên
	cout << floor(z) << endl; // làm tròn xuống
	cout << round(z) << endl; // làm tròn gần nhất.

	cout << pow(10, 3) << endl; // hãm mũ

	cout << cbrt(x) << endl; // căn bậc 3.

	cout << abs(y) << endl; // trị tuyệt đối
	cout << fabs(y) << endl; // trị tuyệt đối của số thực

	cout << fmax(10, 20) << endl; // tìm max 2 số 
	
	return 0;
}