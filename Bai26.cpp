/* 4. Hàm inline trong C++:
	- Nếu một hàm tương đối ngắn, tức là thực hiện các chức năng đơn giản
	thì thường sẽ để là hàm inline.
	- Hàm inline bắt đầu bởi inline trong khai báo và định nghĩa hàm.
	- Hàm inline để tối ưu chương trình.
	- Cú pháp:
		inline type functionName(parameters){
			// function's body
		}
*/

#include <iostream>
using namespace std;

inline int addTwoNumber(int a, int b) { //kéo toàn bộ cụm hàm này đưa vào vị trí hàm main
	return a + b;						//và thực hiện tiếp tục, liền mạch, ko rẽ nhánh.
}

int main() {
	int sum = addTwoNumber(100, 900); // hàm có nhiều hơn 1 lệnh là dài.
	// ....
	cout << sum << endl;

	return 0;