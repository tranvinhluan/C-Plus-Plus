/*
	18. function overriding - Override: ghi đè
	+, Xảy ra trong mối quan hệ kế thừa.
	+, phương thức cho override thông thường ở lượt cha và nó khai báo sẵn ra đấy.
	Phải để Virtual ở trước kiểu trả về của phương thức.
	+, Ở những lớp con kế thừa từ lớp cha có phương thức Virtual đó thì chúng ta có thể
	override lại, sử dụng thêm keyword: override. Lúc này phương thức override phải giữ
	nguyên kiểu trả về, số lượng, thứ tự và kiểu của những tham số có trong phương thức
	đấy y hệt lớp cha.
	+, Để sử dụng được phương thức override thông qua việc sử dụng con trỏ 

==> Rất hữu dụng trong trường hợp ta ko biết trước cái kiểu của từng đối tượng mà muốn
tất cả các đối tượng trong danh sách của chúng ta đều có thể thực hiện cái phương thức
đấy theo cách của riêng mình. 

*/
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void move() {
		cout << "Animal is moving..." << endl;
	}
};
//==========================================================================
// Cùng 1 phương thức move thì ở mỗi lớp con Bird, Fish, Cat lại có 1 cách thực thi riêng
// như: "Bird is flying...", "Fish is swimming...", "Cat is running on the ground..."

class Bird : public Animal {
public:
	void move() override {
		cout << "Bird is flying..." << endl;
	}
};

class Fish : public Animal {
public:
	void move() override {
		cout << "Fish is swimming..." << endl;
	}
};

class Cat : public Animal {
public:
	void move() override {
		cout << "Cat is running on the ground..." << endl;
	}
};
//==========================================================================

int main() {
// sử dụng con trỏ, khai báo kiểu của lớp cha.
// gán tham chiếu thường sẽ là tham chiếu đến 1 đối tượng của lớp con.

	Animal* a = new Bird(); // con trỏ a, kiểu Animal, tham chiếu đến kiểu của lớp con tức Bird
	a->move(); // gọi move của Bird chứ ko phải move của Animal
//==> Việc quyết định gọi phương thức của lớp nào là do cái đối tượng được tham chiếu ở phía
//	  bên tay phải của phép gán, chứ ko phải kiểu của biến con trỏ.

	a = new Fish(); 
	a->move();

	a = new Animal(); // gọi đến move của Animal
	a->move();

	a = new Cat();
	a->move();

	return 0;
}