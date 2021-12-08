/*
	12b. Các kiểu kế thừa: lớp cha, lớp con

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
//class Father2 : Father {
//
//};
//
//class Father3 : Father{
//
//};

//class Children : public Father, public Father2, protected Father3 {
//};
//==========================================================================

class Children : private Father { 
	// kế thừa tất cả thì Public, kế thừa mức trung thì Protected
	// còn hiếm gặp, cụ thể mới dùng kế thừa ít thì Private
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
//class X : public Children {
//public:
//	void show();
//};
//
//void X::show() {
//	cout << address << endl; // ko truy cập dc khi mà cha Children ở Private
//}
//==========================================================================
int main() {
	Children c;
	return 0;
}

/*
	3 loại access modifier:
	+, public: tất cả các thành phần như thế nào ở lớp cha thì bê xuống con y hệt như thế.

	+, protected: tất cả thành phần Public và Protected của lớp cha khi kéo xuống lớp con thì
	nó sẽ trở thành thành phần Protected => Hạ đi 1 bậc với Public và giữ nguyên với Protected.

	+, private: Tất cả thành phần Public và Protected của lớp cha mà được kế thừa theo kiểu 
	Private thì nó sẽ biến thành Private ở trong lớp con.
*/