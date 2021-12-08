/*
	Các phương thức thường sử dụng của lớp string
	- append(stringToAppend): string
	==> Trả về 1 cái string, nối 1 string vào cái string cho trước

	- compare(otherString): int
	==> Trả về 1 cái int, so sánh 2 chuỗi, nếu 2 chuỗi có cùng giá trị thì nó trả về = 0.
	Ngược lại thì trả về các giá trị âm hoặc dương.

	- clear(): void
	==> Xóa toàn bộ nội dung của 1 string

	- c_str(): const char*
	==> Chuyển nội dung trong string sang mảng các kí tự kiểu char

	- empty(): bool
	==> Kiểm tra xem string có rỗng hay ko

	- erase(from, numberCharacterToDelete): string
	==> Xóa bỏ 1 số kí tự từ vị trí đằng trước

	- find(stringToFind): int
	==> Tìm kiếm 1 string nào đó ở trong string gốc

	- find_first_of(stringToFind): int
	==> Tìm vị trí xuất hiện đầu tiên

	- find_last_of(stringToFind): int
	==> Tìm vị trí xuất hiện cuối cùng

	- insert(position, stringToInsert): string
	==> Chèn 1 string vào vị trí cho trước

	- substr(from, lengthOfSubString): string
	==> Trích xuất 1 cái đoạn chuỗi con từ chuỗi gốc, trả về kiểu string
	- ...
*/

#include <iostream>
using namespace std;

int main() {
	/*string s = "How are you today?";
	string s1 = " lalala ";
	string hoa = "Hoa";
	string otheHoa = "HOa";
	string x = "are";
	string f = "Hahahaha";*/
	string a = "";
	
	
	//f = s.substr(5, 10); // lấy từ vị trí 5 là: re you today?
	//cout << f << endl;

	//cout << s.insert(4, f) << endl;

	//cout << s.find_first_of(x) << endl; // kết quả 4 
	//cout << s.find_last_of(x) << endl; // kết quả 15 

	//string f = "are";
	//cout << s.find(f) << endl; // kết quả 4 

	//cout << s.erase(4, 10) << endl; // xóa 10 kí tự từ vị trí thứ 4
	//cout << s.erase(4) << endl; // xóa toàn bộ từ vị trí thứ 4

	//string emptyString = "";
	//cout << emptyString.empty() << endl; // trả True (1) hoặc False (0)

	/*const char* mArray = s.c_str();
	cout << mArray << endl;*/

	/*s.clear();
	cout << s.length() << endl;*/ 

	//int res = hoa.compare(otheHoa); //lấy lần lượt từng cặp kí tự ở chỉ số tương ứng - nhau.
	//cout << res << endl;

	//string s2 = s + s1;
	//s2 = s.append(s1);
	//cout << s2 << endl; // kết quả = s  + s1 và = s sau khi append.
	//cout << s << endl; // sau khi gọi append thì đối tượng s tăng thêm lượng s1

	string s = "3.1415926875";
	string f = "";
	int pos = s.find(".");
	cout << pos << endl; // ==> 1
	f = s.substr(pos + 1); // +1 để bỏ dấu chấm.
	cout << f << endl;

	return 0;
}