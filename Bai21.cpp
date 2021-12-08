/*	Mảng động trong C++:
	Cú pháp: kiểu* tên_mảng = new kiểu[số_phần_tử];
	Khi nào sử dụng mảng tĩnh, mảng động?	
*/
#include <iostream>
using namespace std;
int main() {
	
	int arr[10]; // ==> cấp phát tĩnh. Nếu biết trước số lượng phần tử thì dùng tĩnh.

	int* otherArray;
	otherArray = new int[10]; // có * ==> cấp phát động mảng 1 chiều.

	char fullName[200];
	char* myName = new char[200]; // có new ==> cấp phát luôn, cấp phát động mảng 1 chiều.

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = 0;
		cout << arr[i] << " ";
	}

	cout << "\nMang cap phat dong: \n";    


	for (size_t i = 0; i < 10; i++)
	{
		otherArray[i] = -1;
		cout << otherArray[i] << " ";
	}
	return 0;
}