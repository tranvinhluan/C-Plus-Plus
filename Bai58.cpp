/*
	13. Các thành phần Protected
	+, cho phép giới hạn lại truy cập trong bản thân lớp và cho lớp con của nó truy cập.
	+, Hành vi nào để Protected thì nó sẽ không được truy cập bởi các lớp bên ngoài trừ chính
	cái lớp chứa nó và lớp con kế thừa thành phần Protected.

*/
#include <iostream>
using namespace std;

class Father {
private:
	string name;
protected:
	string address;
public:
	string email;
	Father() {
		cout << this << endl;
	}
};
//==========================================================================
class Children : protected Father {
private:
	string toy;
public:
	Children() {
		cout << this << endl;
	}
	Children(string);
	Children(string, string, string, string);
	void showInfo();
};

void Children::showInfo() {
	toy = "Tedy";
	address = "New York";
	email = "abc@xmail.com";
}
//==========================================================================
class X : public Children {
	public:
		void show();
	};
	
	void X::show() {
		cout << address << endl; // ko truy cập dc khi mà cha Children ở Private
	}

int main() {
	Children c;
	return 0;
}

