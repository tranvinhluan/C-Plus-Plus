/*Vòng lặp vô hạn, break, continue
	for (;;) {		//vòng lặp vô hạn.
	}

	while (true) {  // vòng lặp while vô hạn.
	}
*/
#include <iostream>
using namespace std;

int main() {
	char input;

	//for (;;) { // thoat: Ctrl C
	//	cout << "Nhap q de thoat chuong trinh!";
	//	cin >> input;
	//	if (input == 'q' || input == 'Q') {
	//		break;	// Thoat khoi vong lap hiện thời khi đạt được điều kiện nào đó.
	//	}	
	//}
	//

	for (size_t i = 0; i < 10; i++)
	{
		if (i % 2 != 0) {
			continue;	// bỏ qua các lệnh thực hiện ở dưới nó ở trong thân vòng lặp.
						// kể từ thời điểm nó xuất hiện, nếu như điều kiện để 
						// continue thỏa mãn. => bỏ qua số lẻ, in ra màn hình số chẵn 0 2 4 6 8
		}
		cout << i << endl;
		// do something...
	}
	return 0;
}