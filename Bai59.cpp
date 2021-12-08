/*
	14. Q&A:Lớp con kế thừa lại những gì từ lớp cha?

	- Khi tạo đối tượng lớp con thì nó có tạo đối tượng lớp cha không?
==> Nó kế thừa tất cả phương thức thuộc tính cùng với các access modifier tương ứng từ lớp cha
ngoài ra nó còn có thêm những phương thức, thuộc tính riêng của chính lớp con của nó nữa.
==> Khi tạo ra 1 đối tượng của lớp con thì nó sẽ ko tạo ra đối tượng của lớp cha tương ứng mà
nó kế thừa, mà ngược lại thì nó sẽ lấy 1 bản copy dữ liệu của những phương thức tương ứng có từ 
lớp cha mà nó kế thừa ấy kéo về bản thân chính nó luôn.

	- Mối quan hệ giữa lớp cha-lớp con còn được diễn đạt như thế nào?
==> Theo chiều từ lớp cha xuống lớp con thì sự đặc trưng, cụ thể tăng dần lên
==> Ngược lại, nếu từ lớp con lên lớp cha thì cái tính cụ thể giảm đi, tính tổng quát tăng lên.
Nghĩa là những gì chung nhất thì đưa lên lớp cha, những gì cụ thể nhất thì đưa xuống lớp con.


	- Lớp cha còn có tên gọi nào khác?
		 + Parent, super, base class.

	 - Lớp con còn có tên gọi nào khác không?
		 + Sub class, delivered class, child class, heir class (kế thừa)
*/

#include <iostream>
using namespace std;

class Father {
public:
	Father() {
		cout << this << endl;
	}
};

class Child : public Father {
public:
	Child() {
		cout << this << endl;
	}
};

int main() {
	Child child;
	return 0;
}