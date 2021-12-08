/*	Mảng kí tự trong C++
	- Luôn kết thúc bởi kí tự null '\0'
	- Lấy độ dài thực tế của mảng kí tự.
*/

#include <iostream>
using namespace std;
int main() {
	//char message[] = "Hello\0"; // phải dành 1 vị trí cho kí tự null

	//cout << message << endl;

	//size_t length = strlen(message); // lấy độ dài, ko tính null.

	//cout << length << endl;

	int age;
	cout << "Enter your age: ";
	cin >> age;

	cin.ignore();  // xóa 1 ký tự trong bộ nhớ đệm.


	cout << "Enter your name: ";
	char fullName[200];


	cin.getline(fullName, 199); // cho phép nhập full ký tự.
	
	cout << "\nHello " << fullName << ", you are " << age <<  endl;


	return 0;
}