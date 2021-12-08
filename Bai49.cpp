﻿/*
	4. các thành phần public
*/
#include <iostream>
#include <cstring>
using namespace std;

class Student {
private: // thuộc tính
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

public: // phương thức
	Student();
	Student(char*);
	Student(char*, int);
	Student(char*, int, char*, char*, float);
	void showInfo();
//==========================================================================
	// Làm thay đổi độc lập từng cái thông tin, thuộc tính 1 thì ta viết hàm set tương ứng cho thông tin đó.
	void setID(char*); // Khai báo nguyên mẫu
	void setName(char*);
	void setAddress(char*);
	void setAge(int);
	void setMark(float);

	// Lấy thông tin độc lập, ko phải lấy tất cả, ta dùng hàm get tương ứng.
	int getAge(); // Khai báo nguyên mẫu
	float getMark();
	char* getName();
	char* getAddress();
	char* getID();
};
//==========================================================================
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

	Student s, s1, s2, s3, s4; // goi ham tao 0 tham so

	s.setAge(20); // thay đổi thông tin của hàm mặc định.
	s1.setName(name);
	s2.setAddress(addr);
	s3.setMark(7.5);
	s4.setID(id);

	//s.setAddress(addr);
	//s.setMark(7.5);
	//s.setID(id);

	/*cout << "Name: " << s.getName() << endl;
	cout << "Age: " << s.getAge() << endl;*/

	s.showInfo();
	s1.showInfo();
	s2.showInfo();
	s3.showInfo();
	s4.showInfo();

	return 0;
}