/*
			ĐỌC DỮ LIỆU TỪ FILE TEXT

	Đọc từ đầu đến cuối file
*/
#include <iostream>
#include <fstream> // để sử dụng ifs, ofs.
#include <string> // để sử dụng dc getline
using namespace std;

int main() {
	fstream ifs("input3.txt");
	//int number;
	//while (!ifs.eof()) // eof: end of file 
	//{
	//	ifs >> number; // ==> đọc hết
	//	cout << number << " ";
	//}
	
	
	string s;
	while (!ifs.eof()) {
		getline(ifs, s);
		cout << s << "\n";
	}

	ifs.close();
	return 0;
}