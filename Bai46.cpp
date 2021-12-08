/*
	1. Tổng quan về class trong C++
	- Lý do cần phải có class
	==> +, cao cấp hơn Struct
		+, C++ là OOP (hướng đối tượng) ==> thể hiện thông qua các đặc trưng hướng đối tượng từ class.
	- Định nghĩa class
	==> chính là 1 mẫu thiết kế, là cái khuôn sinh ra các object.
	- Tổng quát cú pháp tạo class
	- Object tạo ra từ class, nó thừa hưởng tất cả những gì có trong class đó.
	- Cách sử dụng class
	==> phải public thì mới dùng đc
*/
#include <iostream>
using namespace std;

class Student {
public: // cho phép bên ngoài được nhìn thấy và sử dụng.

	// các thuộc tính: properties
	char ID[20];  
	char name[100];
	int age;
	float mark;
	char address[100];

	// các hành động tương ứng: phương thức (methods)
	void showIdCard() {

	}

	void study(char* subject) {

	}

	void doExample(char* subjName) {

	}

	void payFee(float amount) {

	}
};

class Cat {
public:
	char name[100];
	int age;
	float weight;
	char color[100];
	char eyesColor[100];

	void move() {

	}

	void sleep() {

	}

	void eat() {

	}

	void speak() {

	}
};

int main() {

	Student s1; // khai báo biến s1
	s1.mark = 8.5; // gán biến s1. các thuộc tính
	s1.age = 20;

	cout << "Age: " << s1.age << endl;

	Cat cat;
	cat.name;

	return 0;
}