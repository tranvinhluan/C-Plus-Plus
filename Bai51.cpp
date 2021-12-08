/*
	6. Các thành phần static
	+, bao gồm hoặc là biến stactic hoặc là hàm static, hoặc cả 2
	+, là thành phần dùng chung của tất cả đối tượng tạo ra từ cái lớp chứa thành phần
	static ấy.

	==> Khi truy cập đến thành phần static thì chúng ta hoàn toàn ko cần đến object,
	chỉ cần tên của cái thành phần lớp chứa static đấy và tên của thành phần static
	là chúng ta có thể truy cập được rồi.

	+, có 2 cách truy cập static:
	- Thông qua cái đối tượng của cái lớp chứa thành phần static
	- Thông qua tên lớp
*/

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Student {
private:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];
	static int count; // static biến

public:
	Student();
	Student(char*);
	Student(char*, int);
	Student(char*, int, char*, char*, float);
	void showInfo();

	void setID(char*);
	void setName(char*);
	void setAddress(char*);
	void setAge(int);
	void setMark(float);

	int getAge();
	float getMark();
	char* getName();
	char* getAddress();
	char* getID();


	static int getCount(); // static hàm

	static void setCount(int c);
};
//==========================================================================

int Student::count = 0;

int Student::getCount() {
	return count;
}
//==========================================================================

void Student::setCount(int c) {
	//this->age = c; // ko có this,
}

Student::Student() {
	cout << "Call non para constructor" << endl;
	this->name[0] = '\0';
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
	count++;
}

Student::Student(char* name) {
	cout << "Call 1 para constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = 0;
	this->mark = 0;
	count++;
}

Student::Student(char* name, int age) {
	cout << "Call 2 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	this->address[0] = '\0';
	this->ID[0] = '\0';
	this->age = age;
	this->mark = 0;
	count++;
}

Student::Student(char* name, int age, char* id, char* address, float mark) {
	cout << "Call 5 params constructor" << endl;
	strcpy_s(this->name, 99, name);
	strcpy_s(this->ID, 19, id);
	strcpy_s(this->address, 99, address);
	this->age = age;
	this->mark = mark;
	count++;
}
//==========================================================================

void Student::setID(char* id) {
	strcpy_s(this->ID, 19, id);
}

void Student::setName(char* name) {
	strcpy_s(this->name, 99, name);
}

void Student::setAddress(char* addr) {
	strcpy_s(this->address, 99, addr);
}

void Student::setAge(int age) {
	this->age = age;
}
void Student::setMark(float mark) {
	this->mark = mark;
}

int Student::getAge() {
	return this->age;
}

float Student::getMark() {
	return this->mark;
}

char* Student::getName() {
	return this->name;
}
char* Student::getAddress() {
	return this->address;
}

char* Student::getID() {
	return this->ID;
}

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

	Student s, s1, s2, s3, s4; // goi ham tao 0 tham so, tạo ra 1 loạt đối tượng s1 s2 s3 s4
	Student s5(name), s6(name, 20);
	Student s7(name);

	cout << s7.getCount() << endl; // thông qua đối tượng chứa static.
	cout << Student::getCount() << endl; // thông qua tên lớp

	// khi count ở private thì phải tạo ra hàm get,
	//set để thay đổi giá trị hoặc lấy giá trị ra

	return 0;
}