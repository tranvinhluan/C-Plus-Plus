/* 
======== = LẬP TRÌNH TRẢI QUA CÁC GIAI ĐOẠN ======== =
1. Lập trình tuyến tính
- Code tất cả vào trong 1 cái hàm main
==> Khi mà bị lỗi - tìm kiếm và sửa chữa rất khó khăn
2. Lập trình thủ tục - hàm
- Chúng ta sẽ chia nhỏ chương trình ra thành các chương trình con
==> linh hoạt - dễ dàng kiểm tra lỗi, tiết kiệm code.....
3. Lập trình hướng đối tượng OOP
- Lấy đối tượng làm trung tâm

4. Lập trình tiến hóa(dự đoán)




============ = LẬP TRÌNH THỦ TỤC - HÀM ============ =
Bài toán 1:
Nhập vào 3 số nguyên dương a, b, c.Viết chương trình tính giai thừa của 3 số nguyên đó


== = LẬP TRÌNH TUYẾN TÍNH
#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	int c;
	 nhập giá trị cho biến a
	do
	{
		cout << "\nNhap gia tri a: ";
		cin >> a;
		if (a <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (a <= 0);

	 nhập giá trị cho biến b
	do
	{
		cout << "\nNhap gia tri b: ";
		cin >> b;
		if (b <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (b <= 0);

	 nhập giá trị cho biến c
	do
	{
		cout << "\nNhap gia tri c: ";
		cin >> c;
		if (c <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (c <= 0);


	 tính giai thừa của số nguyên a
	int gt_a = 1;
	for (int i = 2; i <= a; i++)
	{
		gt_a *= i; // gt_a = gt_a * i
	}

	 tính giai thừa của số nguyên b
	int gt_b = 1;
	for (int i = 2; i <= b; i++)
	{
		gt_b *= i; // gt_b = gt_b * i
	}

	 tính giai thừa của số nguyên c
	int gt_c = 1;
	for (int i = 2; i <= c; i++)
	{
		gt_c *= i; // gt_c = gt_c * i
	}



	cout << "\nGiai thua a: " << gt_a;
	cout << "\nGiai thua b: " << gt_b;
	cout << "\nGiai thua c: " << gt_c;

	system("pause");
	return 0;
}


==== = LẬP TRÌNH THỦ TỤC HÀM


#include<iostream>
using namespace std;


 hàm tính giai thừa
int Tinh_Giai_Thua(int n)
{
	 tính giai thừa của số nguyên n
	int gt = 1;
	for (int i = 2; i <= n; i++)
	{
		gt *= i; // gt = gt * i
	}
	return gt;
}

int main()
{
	int a;
	int b;
	int c;
	 nhập giá trị cho biến a
	do
	{
		cout << "\nNhap gia tri a: ";
		cin >> a;
		if (a <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (a <= 0);

	 nhập giá trị cho biến b
	do
	{
		cout << "\nNhap gia tri b: ";
		cin >> b;
		if (b <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (b <= 0);

	 nhập giá trị cho biến c
	do
	{
		cout << "\nNhap gia tri c: ";
		cin >> c;
		if (c <= 0)
		{
			cout << "\nGia tri khong hop le. Xin kiem tra lai";
			system("pause");
		}

	} while (c <= 0);

	 tính giai thừa của số nguyên a
	int gt_a = Tinh_Giai_Thua(a);

	 tính giai thừa của số nguyên b
	int gt_b = Tinh_Giai_Thua(b);

	 tính giai thừa của số nguyên c
	int gt_c = Tinh_Giai_Thua(c);


	cout << "\nGiai thua a: " << gt_a;
	cout << "\nGiai thua b: " << gt_b;
	cout << "\nGiai thua c: " << gt_c;

	system("pause");
	return 0;
}


NHẬN XÉT :
-Người ta phát hiện 1 đoạn code cùng xử lí 1 chức năng như nhau - Ví dụ bài toán tính giai thừa - nó cùng thực hiện 1 chức năng như nhau nhưng nó lặp đi lặp lại cùng 1 công việc đó 
- lúc này người ta mới nảy sinh ra ý tưởng - gom cái đoạn code đó vào 1 cái hàm - để tạo ra 1 khuôn mẫu chung - thực hiện chức năng tính giai thừa.
  Rồi khi người dùng muốn tính giai thừa của 1 số nguyên thì chỉ cần gọi lại cái hàm tính giai thừa đó.
- Dễ dàng kiểm tra lỗi phát sinh - và sửa chữa 1 cách thuận tiện
- Cài đặt 1 lần sử dụng nhiều lần
- Hạn chế tình trạng phát sinh mã nguồn
- Thuận tiện cho việc tái sử dụng mã lệnh và phát triển mã nguồn


========== = CÚ PHÁP VÀ CÁCH SỬ DỤNG HÀM ========== =
Cú pháp :
<Kiểu dữ liệu của hàm> <Tên hàm>(<Các tham số truyền vào nếu có >)
{
	<thân của hàm> <=> đoạn code đi thực hiện 1 chức năng gì đó của hàm
}

VD:
 hàm có chức năng - tính tổng 2 số nguyên a và b
int Tinh_Tong(int a, int b)
{
	return (a + b);
}


============ = PHÂN CHIA HÀM ============ =
Hàm chỉ có 2 loại hàm :

1. Hàm có giá trị trả về
<Kiểu dữ liệu của hàm> : Chính là kiểu dữ liệu mà sau khi đi tính toán, cái hàm đó dùng lệnh return để trả về 1 giá trị cho hàm
int ==> trả về giá trị số nguyên 4byte
float ==> trả về giá trị số thực 4 byte
double ==> trả về giá trị số thực 8byte
bool ==> trả về giá trị luận lí(true / false)
char ==> trả về giá trị là 1 kí tự 1 byte
- muốn trả về giá trị cho hàm : dùng lệnh 	return <giá trị trả về>

2. Hàm không có giá trị trả về
<Kiểu dữ liệu của hàm> : void


KHI NÀO DÙNG HÀM CÓ KIỂU DỮ LIỆU TRẢ VỀ - VÀ KHI NÀO DÙNG HÀM KHÔNG CÓ KIỂU DỮ LIỆU TRẢ VỀ ?

-Dùng hàm có KIỂU DỮ LIỆU TRẢ VỀ khi : đề bài yêu cầu đi tính toán 1 cái gì đó : tính tổng, tính giai thừa, kiểm tra số nguyên tố, kiềm tra số chính phương, .....

==> nói chung là có tính toán và kiểm tra cái gì đó


====== THAM SỐ CỦA HÀM VÀ THAM SỐ TRUYỀN VÀO HÀM ======

-Tham số hình thức : chính là tham số cài đặt trên cái hàm
VD :
int Tinh_Tong(int a, int b)
{
	return (a + b);
}

==> 2 biến a và b gọi là 2 tham số hình thức
==> tham số hình thức chính là tham số của hàm

- Tham số thực : chính là tham số truyền vào hàm con dưới hàm main
VD :
int main()
{
	int c = 6;
	int d = 4;

	int kq = Tinh_Tong(c, d); // 2 biến c và d truyền vào HÀM ==> gọi là tham số thực
	cout << "\nKet qua: " << kq;

	system("pause");
	return 0;
}
==> 2 biến c và d truyền vào hàm Tinh_Tong(c, d) gọi là 2 tham số thực



========== = THAM SỐ HÌNH THỨC CÓ 2 LOẠI ========== =
-Tham trị : tham số hình thức mà không có dấu & trước biến
==> tham số hình thức đó gọi là tham trị
- Nghĩa là  mọi sự thay đổi của tham số hình thức sẽ không hề ảnh hưởng đến tham số thực dưới hàm main
VD :
 hàm này làm chức năng hoán vị 2 số a và b cho nhau
 a = 5, b = 6 ==> a = 6 , b = 5
void Hoan_Vi(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "\nGia tri cua a trong ham Hoan_Vi: " << a;
	cout << "\nGia tri cua b trong ham Hoan_Vi: " << b;
}

- Tham biến - tham chiếu :
tham số hình thức mà có dấu & trước cái biến
== = > tham số hình thức đó gọi là tham chiếu - tham biến
- Nghĩa là mọi sự thay đổi của tham số hình thức đều ảnh hưởng đến tham số thực bên dưới hàm main
VD :
 hàm này làm chức năng hoán vị 2 số a và b cho nhau
 a = 5, b = 6 ==> a = 6 , b = 5
void Hoan_Vi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "\nGia tri cua a trong ham Hoan_Vi: " << a;
	cout << "\nGia tri cua b trong ham Hoan_Vi: " << b;
}


TẠI SAO THAM SỐ HÌNH THỨC TRUYỀN THEO KIỂU THAM CHIẾU - LẠI CÓ THỂ THAY ĐỔI THAM SỐ THỰC BÊN DƯỚI HÀM MAIN ?


======== CÁC BƯỚC ĐỂ XÂY DỰNG 1 CÁI HÀM ========
Khi người ta cho 1 bài toán - mình đi xây dựng cái hàm

Bước 1: Xác định xem cái hàm mà mình định xây dựng là hàm gì
+ Hàm có giá trị trả về : khi cần tính toán, kiểm tra cái gì đó
+ Hàm không có giá trị trả về

Bước 2 : Xác định cái tên của hàm
+ Gần gũi, dể hiểu
+ Bám sát ý nghĩa mà cái hàm muốn diễn đạt
==> Tên hàm phải phù hợp với chức năng của hàm
VD :

Bước 3 : Xác định xem hàm của mình cần bao nhiêu tham số - nếu có
- Tham số đó là tham trị hay tham chiếu ?

Bước 4 : Cài đặt code để thực hiện chức năng của hàm



================== = DEMO ================== =
Bài toán : Nhập vào số nguyên n.Kiểm tra xem n có phải là số nguyên tố hay không ?

#include<iostream>
using namespace std;


 Nếu n là số nguyên tố thì trả về true, ngược lại trả về false
bool Kiem_Tra_So_Nguyen_To(int n)
{
	if (n < 2)
	{
		return false; // trả về giá trị cho hàm
	}
	else // <=> if(n >= 2)
	{
		if (n == 2)
		{
			return true;
		}
		else // <=> if(n > 2)
		{
			if (n % 2 == 0)
			{
				return false;
			}
			else // <=> if(n % 2 != 0)
			{
				for (int i = 2; i < n; i++)
				{
					if (n % i == 0)
					{
						return false;
					}
				}
			}
		}
	}

	return true; // nếu như sau quá trình đi kiểm tra đến cuối thì sẽ trả về true
}


int main()
{
	int n;
	cout << "\nNhap gia tri n: ";
	cin >> n;

	/*bool Kiem_Tra = Kiem_Tra_So_Nguyen_To(n);
	if(Kiem_Tra == true)
	{
		cout << n << " la so nguyen to";
	}
	else
	{
		cout << n << " khong phai la so nguyen to";
	}*/

/*	if (Kiem_Tra_So_Nguyen_To(n) == true)
	{
		cout << n << " la so nguyen to";
	}
	else
	{
		cout << n << " khong phai la so nguyen to";
	}
	system("pause");
	return 0;
}

*/