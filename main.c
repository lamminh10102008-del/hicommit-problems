Mô tả đề bài:
Viết chương trình tính phí giao hàng dựa trên khoảng cách giao hàng và giá trị đơn hàng. Quy tắc tính phí: 1. Nếu khoảng cách nhỏ hơn hoặc bằng 0 hoặc giá trị đơn hàng nhỏ hơn 0 thì dữ liệu không hợp lệ. 2. Nếu giá trị đơn hàng từ 500000 đồng trở lên và khoảng cách giao hàng không quá 15 km thì được miễn phí giao hàng. 3. Trong các trường hợp còn lại: - Từ 1 đến 5 km: phí giao hàng là 15000 đồng. - Từ 6 đến 15 km: phí giao hàng là 25000 đồng. - Trên 15 km: phí giao hàng là 40000 đồng. Chương trình chỉ in kết quả cuối cùng, không in thêm nội dung mô tả hoặc đơn vị.

Input:
Gồm hai số nguyên distance và order_value trên cùng một dòng, cách nhau bởi khoảng trắng. Trong đó: - distance: khoảng cách giao hàng, tính bằng km. - order_value: giá trị đơn hàng, tính bằng đồng.

Output:
Nếu dữ liệu không hợp lệ, in: INVALID Ngược lại, in một số nguyên là phí giao hàng tương ứng. Không in thêm chữ hoặc đơn vị.

Giới hạn:
Thời gian thực thi: 2 giây.


Ví dụ 1
Input:
4 500000

Output:
0


Ví dụ 2
Input:
16 100000

Output:
40000




