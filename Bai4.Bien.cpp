/*
			VARIABALES - CÁC BIẾN

	Khi nói về biến, có 2 khái niệm quan trọng bạn cần biết :

_ Phạm vi của biến : Xác định nơi bạn có thể truy cập vào biến.
_ Thời gian tồn tại của biến : Xác định nơi nó được tạo ra và bị hủy.
_ Phạm vi của biến được phân làm 2 loại :

//============================================================================================================================================
			Biến cục bộ(Local variables)
- Biến cục bộ (Local variables)
==> Biến được định nghĩa bên trong một khối lệnh (block) được gọi là các biến cục bộ (Local variables).

+, Các biến cục bộ có thời gian tự động, có nghĩa là chúng được tạo tại thời điểm định nghĩa,
và bị hủy khi ra khỏi khối lệnh mà biến đó được định nghĩa.

+, Các biến cục bộ có phạm vi bên trong khối lệnh (còn được gọi là phạm vi cục bộ), 
nghĩa là sẽ không truy cập được biến khi ở bên ngoài khối lệnh.

//=============================================================================================================================================
			
			Trong bài BIẾN CỤC BỘ TRONG C++ (Local variables), bạn đã biết được:
+, Khi sử dụng từ khóa “static” với các biến cục bộ, nó sẽ trở thành biến tĩnh (static variables).
==> Biến tĩnh (static variables) là biến được tạo ra duy nhất một lần khi gọi hàm lần đầu tiên và nó sẽ tiếp tục tồn trong suốt vòng đời của chương trình. Đây là sự khác biệt giữa biến tĩnh và biến cục bộ.
==> Biến tĩnh sẽ tồn tại cho đến khi kết thúc chương trình dù nó là biến cục bộ hay toàn cục.

+, Biến tĩnh (static variables) là loại biến lưỡng tính, vừa có tính chất của 1 biến toàn cục (global variables), vừa mang tính chất của 1 biến cục bộ (local variables):

* Tính chất của biến toàn cục: biến không mất đi khi khối lệnh định nghĩa nó kết thúc, nó vẫn nằm trong vùng nhớ của chương trình và được tự động cập nhật khi khối lệnh đó được gọi lại.
* Tính chất của biến cục bộ: biến chỉ có thể được sử dụng trong khối lệnh mà nó được khai báo.

+, Theo quy ước, nên đặt tiền tố “s_” trước các biến tĩnh (static variables) để dễ dàng phân biệt với những biến khác.


+, Biến tĩnh (static variables) có hai dạng: liên kết bên ngoài (external linkage) và liên kết nội bộ (internal linkage)

*Liên kết bên ngoài (external linkage): Khai báo ở ngoài mọi hàm (biến toàn cục)
	1	int g_value;
	2	void doSomeThing()
	3	{
	4	}

* Liên kết nội bộ (internal linkage):
- Khai báo trong hàm với từ khóa static
	1	void doSomeThing()
	2	{
	3	 static int s_value(0);
	4	}

- Khai báo ngoài hàm với từ khóa static (biến toàn cục)
	1	static int g_value;
	2	void doSomeThing()
	3	{
	4	}

+, Khi nào nên sử dụng biến tĩnh
==> Sử dụng biến tĩnh khi có nhu cầu giữ giá trị của biến trong chương trình.

Ví dụ:  ứng dụng vào chương trình có chức năng tạo ID không trùng nhau, bạn có thể sử dụng biến tĩnh để làm thực hiện nó:

//=============================================================================================================================================
			Biến toàn cục(Global variables)
- Biến toàn cục (Global variables)
==> Các biến khai báo bên ngoài của khối lệnh được gọi là biến toàn cục.

+, Biến toàn cục có thời gian tĩnh, nghĩa là chúng được tạo ra khi chương trình bắt đầu và bị hủy khi nó kết thúc.

+, Các biến toàn cục có phạm vi tập tin (file scope), hay gọi là "phạm vi toàn cầu" (global scope)
hoặc "phạm vi không gian tên toàn cầu" (global namespace scope).

+, Sử dụng biến toàn cục là nguy hiểm.
==> Biến toàn cục là một trong những khái niệm bị lạm dụng nhất trong lập trình.
Mặc dù nó có vẻ vô hại trong các chương trình nhỏ, nhưng lại thường cực kỳ nguy hiểm ở những chương trình lớn.

==> Lập trình viên mới thường có thói quen sử dụng rất nhiều biến toàn cục, vì sử dụng nó khá đơn giản,
bạn chỉ khai báo một lần và sử dụng nó trong tất cả các hàm của chương trình nếu bạn muốn. 
Tuy nhiên, đây không phải là một ý tưởng hay.

+, Nhiều nhà phát triển tin rằng nên tránh hoàn toàn việc sử dụng các biến toàn cục (non-const global variables). 
Ở đây đang nói về biến toàn cục (non-const), không phải nói về tất cả. 
+, Const là biến toàn bộ

+, Tại sao phải tránh sử dụng biến toàn cục?
Lý do lớn nhất khiến biến toàn cục (non-const) nguy hiểm vì giá trị của nó có thể được thay đổi bởi bất cứ hàm nào mỗi khi hàm đó được gọi. 
Khiến lập trình viên khó kiểm soát được chuyện gì đang xảy ra với biến toàn cục của mình.

+, Khi nào cần sử dụng biến toàn cục (non-const)
==> Có nhiều cách để giải quyết vấn đề tránh sử dụng biến toàn cục (non-const).
Nhưng trong một số trường hợp, sử dụng đúng đắn của các biến toàn cục (non-const) có thể làm giảm sự phức tạp cho chương trình.
Ví dụ trong trường hợp bạn có những loại dữ liệu muốn sử dụng cho toàn bộ chương trình. (configuration settings, database, …)










*/