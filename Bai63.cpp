/*			LỚP TRỪU TƯỢNG - abstraction

_ Tính "trừu tượng"  tức là che giấu đi sự phức tạp, chỉ thể hiện ra những thứ cần thiết.
Ví dụ như cái TV, người tiêu dùng chỉ cần các biết cách cách bật , mở, chuyển kênh... 
Chứ ko cần quan tâm làm cách nào để tạo ra được các phương thức đó.

_ Là Lớp được khai báo với keyword abstract

_ Thường chứa 1 hoặc nhiều phương thức abstract

_ Phương thức abstract là phương thức chỉ khai báo, không định nghĩa.
Việc định nghĩa cụ thể do các lớp con đảm nhiệm.

_ Nếu lớp con ko định nghĩa phương thức abstract của lớp cha thì nó phải trở thành abstract.

_ Có thể chứa phương thức khởi tạo Nhưng

_ Ta không thể tạo đối tượng của lớp abstract.

_ Có thể chứa cả các phương thức đã được định nghĩa và các thuộc tính, các trường stactic.
==> +, Mục đích sử dụng: ẩn giấu các cách thức thực thi cụ thể.
	+, Cho phép thực hiện kế thừa nhưng không cho phép tạo đối tượng của lớp.

*/