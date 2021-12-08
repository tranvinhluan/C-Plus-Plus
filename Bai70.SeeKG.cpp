/*	CON TRỎ CHỈ VỊ - seekg trong tập tin ( file )

- Khi mở 1 file lên, con trỏ luôn luôn nằm ở đầu file
- Đọc xong file thì con trỏ nằm ở cuối file (hết dữ liệu)

	HÀM DỊCH CHUYỂN CON TRỎ CHỊ VỊ TRONG FILE
- seekg(x,y)
- 2 tham số x, y
- x là số byte cần dịch chuyển (luôn luôn là 1 con số nguyên)
	+ âm: dịch về bên tay trái
	+ dương: dịch về bên tay phải
- y: vị trí bắt đầu dịch
	+ y = 0: đầu file <=> ios::beg <=> SEEK_SET
	+ y = 1: vị trí hiện tại <=> ios::cur <=> SEEK_CUR
	+ y = 2: cuối file  <=> ios::end <=> SEEK_END


*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
	fstream ifs; // tạo ra biến ifs - tương đương filein trong video
	ifs.open("New Text Document.txt", ios::in);
	ifs.seekg(3, 0); //  dịch sang phải 3 byte bắt đầu tại vị trí đầu file.
	int x;
	ifs >> x;
	cout << x;
	ifs.close();
	return 0;
}