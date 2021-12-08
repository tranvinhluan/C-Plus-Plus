/*
	5. Con trỏ this
	- Vấn đề:
	 +, tất cả các đối tượng tạo ra từ lớp Student đều có các thuộc tính, đều chia sẻ các phương thức.
	Nhưng mặc dù chia sẻ chung, nhưng giá trị của thuộc tính là khác nhau, chỉ có code dùng chung trong
	những phương thức là khác nhau.

	- Là cái gì?
	 +, trong C++ quy ước, mỗi khi 1 phương thức ko phải là Static (tĩnh) của 1 Class thì nó luôn có
	   1 tham số ngầm định là This, thì This đấy chính là con trỏ giữ tham chiếu tới đối tượng
	   hiện thời đang thao tác, đang gọi tới hàm tương ứng với phương thức chứa This đấy.

	 +, This chính là đối tượng đang gọi phương thức đấy.

	 +, Mỗi khi chúng ta tạo ra 1 đối tượng mới từ 1 cái Class thì tất cả các đối tượng đó
	   hoàn toàn khác nhau (mỗi đối tượng có 1 vùng nhớ khác nhau) nhưng có chung tên thuộc tính,
	   có chung chia sẻ phương thức.

	- Sử dụng khi nào?
	 +, Thích thì dùng
	 +, khi tên thuộc tính == tên tham số, thì cái có this là thuộc tính.
*/

