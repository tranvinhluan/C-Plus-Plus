/*
	So sánh giữa overloading và overriding trong C++
			
			OVERLOAD
- Compile time polymorphism: Đa hình tại thời điểm biên dịch
- Xảy ra trong cùng 1 lớp
- Cho phép nhiều hơn một phương thức cùng tên nhưng khác kiểu, số lượng và thứ tự
tham sô.
==> Tại mỗi lớp chúng ta muốn tồn tại nhiều hơn 1 hàm, 1 phương thức có cùng tên,
cùng chức năng nhưng mà nhận vào những tham số, những kiểu cũng như thứ tự của những 
tham số ấy khác nhau. 

==>>>>>>>>>> KHÔNG liên quan tính kế thừa.


//==========================================================================

			OVERRIDE
- Runtime polymorphism: Đa hình tại chương trình chạy
- Xảy ra trong nhiều hơn 1 lớp của mối quan hệ kế thừa ( thường xảy ra ở lớp con )
- Cho phép lớp con tái định nghĩa tại một phương thức của lớp cha theo cách riêng.
==> Trong trường hợp cho những lớp con của 1 cái chuỗi kế thừa nào đó có thể được tùy
ý chỉnh sửa phương thức đã được định dạng sẵn theo cách thức riêng.

==>>>>>>>>>> Override liên quan tính kế thừa.


*/