//	  5. Hàm có tham số mặc định
// ==> Nếu muốn gọi 1 hàm với ít hơn số lượng tham số thực tế của nó, chúng ta hãy gán 
//	   những giá trị mặc định cho những tham số của hàm đó theo thứ tự từ PHẢI sang TRÁI.

#include <iostream>
using namespace std;

inline int sumOfNumbers(int a = 10, int b = 20, int c = 30) {
	return a + b + c;
}

int main() {

	cout << sumOfNumbers() << endl; // ==> 60

	return 0;
}