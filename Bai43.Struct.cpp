/*
	Kiểu dữ liệu do người dùng tự định nghĩa: STRUCT
	==> nhằm biểu diễn các tập thông tin phức tạp về 1 chủ đề cụ thể nào đó
*/
#include <iostream>
using namespace std;

struct Car { 
	char owner[100];
	char brand[100];
	char color[100];
	int weight;
	int height;
	int width;
};

struct Cat {
	char name[100];
	int age;
	float weight;
	char color[100];
	char eyesColor[100];
};

struct Student {
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];
	Car car; // đưa struct khác vào, nhớ phải định nghĩa trước đó.
	Cat pet;
};

void getInfo(Student& s) {
	cout << "Enter name: ";
	cin.getline(s.name, 99); // truy cập đến bằng cách s.(thuộc tính)

	cout << "Enter age: ";
	cin >> s.age;

	cout << "Enter address: ";
	cin.ignore(); // bỏ 1 ký tự ( enter), sau khi nhập số cần nó để nhập được ký tự chữ.
	cin.getline(s.address, 99);

	cout << "Enter mark: ";
	cin >> s.mark;

	cin.ignore();
	cout << "Car color: ";
	cin >> s.car.color;
}

void showInfo(Student s) {
	cout << "========== Student Info ==========\n";
	cout << "Name: " << s.name << endl;
	cout << "Address: " << s.address << endl;
	cout << "Age: " << s.age << endl;
	cout << "Mark: " << s.mark << endl;
	cout << "Car color: " << s.car.color << endl;
	cout << "==================================\n";
}

int main() {

	//các cách khai báo:
	/*
	Student s1, s2;
	Student* sPtr;
	Student arr[1000];
	Student bArr[10][20];
	*/



	Student s;
	getInfo(s);
	showInfo(s);

	return 0;
}