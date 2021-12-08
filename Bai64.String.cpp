/*
	Lớp string và các phương thức của nó

	==> string là lớp viết riêng cho C++ để thao tác chuỗi kí tự, lúc này ko cần quan
	tâm cấp phát vì việc cấp phát được tự động, ko cần quan tâm đến kí tự null vì null
	cũng được quản lý 1 cách tự động.

	- hàm tạo
	- getline();   đọc cả dòng
	- length();    tính độ dài 
	- push_back();	thêm 1 ký tự vào cuối chuỗi.
	- pop_back();	lấy bỏ 1 ký tự cuối chuỗi.

*/

#include<iostream>
#include <string>
using namespace std;

int main() {
	string name = "Than Trieu";
	/*name.push_back('W');  
	name.push_back('Q');
	cout << name << endl;

	name.pop_back();
	cout << name << endl;
	name.pop_back();
	cout << name << endl;*/


	for (size_t i = 0; i < name.length(); i++)
	{
		//cout << name[i] << endl; // lấy từng kí tự cách 1
		 cout << name.at(i) << endl; // lấy từng kí tự cách 2
	}


	//string name;
	//name = "than trieu";
	//name = "thu tran";
	//name = "hoa nguyen";

	//string address("ha noi");
	//string address1(address); // truyền vào hàm tạo là 1 string khác
	//string nx(100, 'x');
	//cout << nx << endl;
	//cout << "nx co " << nx.length() << " ki tu"; // hàm length() chỉ số lượng

	//string fullname;
	//cout << "\nenter your full name: ";
	//getline(cin, fullname);
	//cout << "\nhello " << fullname << "!" << endl;
}