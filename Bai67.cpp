/*
	Ghi thông tin ra file text

Chế độ		Miêu tả
ios::app	Chế độ Append. Mở 1 tệp tin có sẵn để thêm dữ liệu vào cuối tệp.
ios::in		Mở một file để đọc
ios::out	Mở một file "có sẵn" để ghi
==> 3 cái trên thường dùng nhất

ios::ate	Mở một file cho outpuy và di chuyển điều khiển read/write tới cuối của file
ios::trunc	Nếu file này đã tồn tại, dữ liệu của nó sẽ bị mất (truncate).
ios::ate	Mở tệp tin và đặt con trỏ tệp tin vào cuối tệp.
ios::text	Mở một tệp tin ở chế độ văn bản.
ios::nocreat	Mở một tệp tin, tệp tin này bắt buộc phải tồn tại.
ios::noreplace	Chỉ mở tệp tin khi tệp tin chưa tồn tại.
ios::binary		Mở một tệp tin ở chế đọ nhị phân. Khi mà file được mở ra ở chế độ này thì
				dữ liệu sẽ được đọc hay ghi từ 1 định dạng nguyên thủy nhị phân.

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person {
	string name;
	string address;
	string email;
	int age;

public:
	Person();
	Person(int, string, string, string);
	void showInfo();
	friend void writeToFile(Person, ofstream&);
};

void writeToFile(Person p, ofstream& ofs) {
	ofs << p.name << endl;
	ofs << p.address << endl;
	ofs << p.email << endl;
	ofs << p.age << endl;
}



Person::Person() {
	age = 0;
	name = "";
	address = "";
	email = "";
}
Person::Person(int age, string name, string address, string email) {
	this->age = age;
	this->name = name;
	this->address = address;
	this->email = email;
}
//==========================================================================

void Person::showInfo() {
	cout << "I am " << name << ", I'm " << age << " years old."
		<< "\nI live in " << address << ". My email address is '"
		<< email << "'.\nNice to meet you!\n";
	cout << endl;
}

void showInfo(Person* ps, size_t n) {
	for (size_t i = 0; i < n; i++)
	{
		ps[i].showInfo();
	}
}



int main() {
	/*string name;
	string email;
	string address;
	int age;*/


	fstream ifs("input4.txt");
	Person* persons = new Person[10];
	string name;
	string email;
	string address;
	int age;

	size_t i = 0;
	while (!ifs.eof()) {
		ifs >> age;
		ifs.ignore(); // bỏ qua nội dung bên trên, xuống dòng dưới???????????
		getline(ifs, address);
		getline(ifs, name);
		getline(ifs, email);
		Person p(age, name, address, email);
		persons[i] = p;
		i++;
	}

	//showInfo(persons, i);
	// 

	// fstream ofs("OUTPUT2.txt", ios::app); // cách 1: 
	// ofs.open("OUTPUT.txt", ios::app); // cách 2:
	// ofstream ofs("OUTPUT.txt"); // Đây là cách dễ nhất nên ưu tiên.

	/*ofstream myfile;
	myfile.open("OUTPUT.txt");
	myfile << "Writing this to a file.\n";
	cout << "Writing this to a file.\n";
	myfile.close();*/

	/*string message = "Have a nice day!";
	ofs << message << endl;

	ofs.close();*/



	Person p(20, "Tran Thu Thuy", "Ha Noi", "ngthuy@hmail.com");
	ofstream ofs2("OUTPUT2.txt");
	writeToFile(p, ofs2);
	for (size_t i = 0; i < 4; i++)
	{
		writeToFile(persons[i], ofs2);
	}
	p.showInfo();


	ofs2.close();
	ifs.close();
	return 0;
}