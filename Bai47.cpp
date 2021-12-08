/*
	2. Hàm khởi tạo, hàm hủy
	==> tạo ra thông tin, thu hồi bộ nhớ
*/
#include <iostream>
#include <cstring>
using namespace std;

class Student {
public:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];
//==========================================================================
	//Hàm khởi tạo

	Student() { // khởi tạo mặc định
		cout << "Call non para constructor" << endl; // gọi hàm tạo ko tham số.
		this->name[0] = '\0';
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = 0;
		this->mark = 0;
	}

	Student(char* name) { // tạo ra hàm tạo khác
		cout << "Call 1 para constructor" << endl; // gọi hàm tạo 1 tham số
		strcpy_s(this->name, 99, name); // name đậm là thuộc tính, name nhạt là tham số. sử dụng hàm copy strcpy_
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = 0;
		this->mark = 0;
	}

	Student(char* name, int age) {
		cout << "Call 2 params constructor" << endl; // gọi hàm tạo 2 tham số.
		strcpy_s(this->name, 99, name);
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = age;
		this->mark = 0;
	}

	Student(char* name, int age, char* id, char* address, float mark) {
		cout << "Call 5 params constructor" << endl; // gọi hàm tạo 5 tham số.
		strcpy_s(this->name, 99, name);
		strcpy_s(this->ID, 19, id);
		strcpy_s(this->address, 99, address);
		this->age = age;
		this->mark = mark;
	}

	void showInfo() {
		cout << "============== Student Info ===========" << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Id: " << ID << endl;
		cout << "Age: " << age << endl;
		cout << "Mark: " << mark << endl;
		cout << "=======================================" << endl;
	}
//==========================================================================
	//Hàm hủy

	~Student() {
		cout << "Call destructor" << endl;
	}
};
//==========================================================================

int main() {
	char* name = new char[100];
	strcpy_s(name, 99, "Tran Van Hung");
	char* id = new char[20];
	strcpy_s(id, 19, "B21DCCN123");
	char* addr = new char[100];
	strcpy_s(addr, 99, "Hanoi");

	Student s; // goi ham tao 0 tham so
	Student s1(name); // goi ham tao 1 tham so
	Student s2(name, 20); // goi ham tao 2 tham so
	Student s3(name, 21, id, addr, 9.5);// goi ham tao 5 tham so

	s.showInfo();
	s1.showInfo();
	s2.showInfo();
	s3.showInfo();

	return 0;
}  