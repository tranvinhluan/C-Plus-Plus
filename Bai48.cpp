/*
	3. Tính đóng gói dữ liệu (data encapsulation): các thành phần private

	==> Tất cả thông tin, những hành động liên quan 1 đối tượng gói gọn lại trong 1 lớp
	Hiểu đơn giản, gói dữ liệu và thông tin vào trong một lớp (class) được gọi là tính đóng gói.
	==> thường thì:
	+, cái thông tin thường là thuộc tính để ở Private
	+, cái phương thức (methods) liên quan đến thuộc tính đấy để ở Public
	+, muốn truy cập đến thành phần Private của 1 lớp thì phải thông qua các thành phần 
	Public
*/
#include <iostream>
#include <cstring>
using namespace std;

class Student {
private: // các thuộc tính để ở private
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

public: // các hàm, thao tác bên ngoài cho phép thực hiện để ở public
	Student();
	Student(char*);
	Student(char*, int);
	Student(char*, int, char*, char*, float);
	void showInfo();
};

//==========================================================================
// xác định cái lớp nào chứa hàm đấy, đi định nghĩa chi tiết.

Student::Student() { 
	cout << "Call non para constructor" << endl;
	this->name[0] = '\0';
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name) {
	cout << "Call 1 para constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
}

Student::Student(char* name, int age) {
	cout << "Call 2 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = age;
	this->mark = 0;
}

Student::Student(char* name, int age, char* id, char* address, float mark) {
	cout << "Call 5 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	strcpy_s(this->ID, 19, id);
	strcpy_s(this->address, 99, address);
	this->age = age;
	this->mark = mark;
}

//==========================================================================
void Student::showInfo() {
	cout << "============== Student Info ===========" << endl;
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Id: " << ID << endl;
	cout << "Age: " << age << endl;
	cout << "Mark: " << mark << endl;
	cout << "=======================================" << endl;
}

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