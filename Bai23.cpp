/* Hàm (function) trong C++
	Lesson		Nội dung chính
	1.			Tổng quan về hàm
	2.			Truyền tham chiếu, truyền giá trị
	3.			Kiểu trả về của hàm main
	4.			Hàm inline
	5.			Tham số mặc định của hàm
	6.			Hàm nguyên mẫu
	7.			Hàm đệ quy
	8.			Sử dụng project trong C++

	$1. Tổng quan về hàm trong C++
		_ Lý do:
		==> Trong chương trình có rất nhiều thứ cần phải sử dụng lại, tức viết 
		1 lần sử dụng lại nhiều lần. Lý do quan trọng nhất là để chương trình tường minh
		rõ ràng và tái sử dụng.

		_ Định nghĩa, quy ước đặt tên hàm:
		==> 1 hàm là một tập hợp của những câu lệnh cùng thực hiện trọn vẹn chức năng
		nào đó.
		==> Tên hàm luôn là động từ, có thể có 1 hoặc nhiều từ.

		_ Kiểu trả về của hàm:
		==> 1 hàm thì có hoặc KHÔNG CÓ kiểu trả về.
		+, Nếu như 1 hàm sau khi thực hiện mà không cần phải thông báo kết quả thực hiện,
		trạng thái của chương trình cho bất kì 1 nơi nào khác thì chúng ta không cần
		trả về. Bắt đầu từ Void.
		+, Nếu 1 hàm khi mà thực hiện xong, người ta cần biết trạng thái, kết quả giá trị
		mà nó đã thực hiện thì chúng ta phải trả về.
		+, Hàm có trả về chúng ta luôn phải Return.
		+, Return => Nó sẽ thực hiện chương trình và nó trả lại kết quả cho cái nơi mà
		gọi cái hàm tương ứng.
		+, Đối với Hàm mà trả về thì kết quả của hàm đó có thể sử dụng để thông qua phép
		gán, gán cho cái biến nào đó.

		_ Tham số, đối số:
		+, Tham số: là những thành phần được khai báo khi định nghĩa hàm.
		Thông thường, tham số sẽ là các biến.

			type functionName(parameter list){ //Danh sách tham số.
		    }									1 hàm có thể ko có tham số.

		+, Đối số: có thể là biến hoặc có thể là giá trị cụ thể.
		==> Là thứ chứa giá trị cần truyền vào hàm để cho hàm đấy lấy giá trị đấy ra
		xử lý, thực hiện.
*/

#include <iostream>
using namespace std;

int addTwoNumbers(int a, int b) {
	return (a + b);
}

float divAbyB(int a, int b) {
	return 1.0f * a / b;
}

void showResult(float result) {
	cout << "Result = " << result << endl;
}


int main() {
	int a = 100, int b = 255;
	int sumOffAAndB = addTwoNumbers(a, b);

	float divAforB = divAbyB(a, b);

	showResult(sumOffAAndB);

	showResult(divAforB);

	char x[] = "lalala";

	size_t len = strlen(x);

	return 0;
}