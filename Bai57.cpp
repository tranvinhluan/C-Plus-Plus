/*
	12. Tính Kế thừa trong C++ : lớp cha và lớp con

	=> Cho phép tái sử dụng lại các lớp đã có từ trước trong hệ thống mà ko phải code
	hoàn toàn.
	+, Lớp cha là lớp cho lớp con kế thừa, tức là lớp cha ở trên 1 bậc so với lớp con
	thông tin của lớp cha mang tính tổng quát và trừu tượng cao hơn
	+, Những phương thức có ở trong lớp cha cũng là những phương thức có thể sử dụng ở 
	trong tất cả trong lớp con nếu như phương thức đó là protected hoặc public
	+, Những thành phần private thì sẽ ko dc truy cập trực tiếp từ lớp con lên lớp cha
	mà phải thông qua tính đóng gói dữ liệu. Nếu như trong lớp cha có các thành phần 
	Private thì lớp con muốn truy cập đến các thành phần đó phải thông qua các thành phần public

	+, lớp con là những lớp lấy thông tin từ lớp cha. Ngoài những thông tin có sẵn từ lớp cha
	thì nó sẽ có thêm những thông tin mới, những thông tin đặc trưng của từng cái loại lớp con
	+, 

*/

#include <iostream>
#include <string>
using namespace std;

class Person {
	string firstName;
	string lastName;
	string id;
public:
	Person();
	Person(string id);
	Person(string id, string first, string last);
	string getId();
	string getFirstName();
	string getLastName();
	string fullName();
};
//==========================================================================
Person::Person() {
	firstName = "";
	lastName = "";
	id = "";
}

Person::Person(string id) {
	Person(); // ???????????????? bị cảnh báo
	this->id = id;
}

Person::Person(string id, string first, string last) {
	this->id = id;
	this->lastName = last;
	this->firstName = first;
}

string Person::fullName() {
	return this->firstName + " " + this->lastName;
}

string Person::getId() {
	return id;
}

string Person::getFirstName() {
	return firstName;
}

string Person::getLastName() {
	return lastName;
}
//==========================================================================

class Student : public Person { // lớp Sinh Viên
	string studentID;
	float mark;
	float fee;

public:
	Student();
	Student(string, float, float);
	Student(string, string, string, string, float, float);
	void study(string);
	void payFee(float);
	void doExamp(string);
	void showInfo();
};
//==========================================================================
Student::Student(string id, string first, string last, // 3 thông tin lớp cha
	string sId, float mark, float fee) : Person(id, first, last) {
	this->studentID = sId;
	this->mark = mark;
	this->fee = fee;
}

void Student::showInfo() {
	cout << "ID: " << getId() << endl;
	cout << "Full name: " << fullName() << endl;
	cout << "Student ID: " << studentID << endl;
	cout << "Mark: " << mark << endl;
}

class Employee : public Person { // Lớp Nhân Viên
	string eID;
	float sallary;
	string role;

public:
	Employee();
	Employee(string, float, string);
	void doHisWork();
	void goToWorkSpace();
	bool getPayment();
};
//==========================================================================

int main() {
	Student s("12345485", "Than", "Trieu", "B20DCCN123", 3.36f, 20.5f);
	s.showInfo();
	return 0;
}