﻿/* Toán tử 3 ngôi
	Cú pháp tổng quát: Biến = (điều kiện) ? biểu thức 1 : biểu thức 2;

	Sinh viên A có điểm trung bình môn là t, điều kiên để qua môn là t >= 4.0
	Vậy A qua môn hay phải học lại?
*/

#include <iostream>
using namespace std;

#define PASS 4.0f

int main() {
	float t = 5.5f;
	string msg;

	msg = (t >= PASS) ?  "A passed this subject!" :  "A failed this subject!";
	
	cout << msg << endl;

	/*if (t >= PASS) {
		cout << "A passed this subject!" << endl;
	}
	else {
		cout << "A failed this subject!" << endl;

	}*/
	return 0;
}