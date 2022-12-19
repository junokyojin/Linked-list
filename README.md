# Linked-list
bài 28: 

cài đặt chương trình: 

13-26 :  Chúng ta đang sử dụng con trỏ kép head_ref ở đây vì chúng ta thay đổi

đứng đầu danh sách liên kết bên trong hàm này

31-45: viết hàm thêm nút vào danh sách

![10](https://user-images.githubusercontent.com/103046663/208472085-26470b0f-5d79-4416-8c1f-1ca3669fdc4d.png)

Nếu danh sách liên kết rỗng hoặc chỉ có một phần tử thì trả về. Nếu danh sách chỉ có một phần tử, thì nút đầu tiên và nút cuối cùng về cơ bản giống nhau.

Trỏ prev tới nút đầu tiên và cur tới nút thứ hai.

Tiếp tục di chuyển cả prev và cur sang các nút tiếp theo cho đến khi cur->next trở thành NULL. cur->next trỏ đến NULL có nghĩa là cur trỏ đến nút cuối cùng và prev trỏ đến nút cuối cùng thứ hai.

Trỏ nút cuối cùng thứ hai vào NULL (prev->next = NULL), nút cuối cùng vào nút đầu tiên (cur->next = head). Và chỉ định đầu nơi cur đang trỏ tới (head = cur).

bài 10: 
cài đặt chương trình
![1](https://user-images.githubusercontent.com/103046663/208464490-f97607eb-a5c2-46b1-a8de-cccfeb453cff.jpg)

danh sách liên kết ban đầu

![2](https://user-images.githubusercontent.com/103046663/208464544-926aa8e1-5310-48b0-957d-6ca520b0dca0.jpg)

kết quả danh sách liên kết 1

![3](https://user-images.githubusercontent.com/103046663/208464551-0eabed41-887d-4654-ab31-b13936f37145.jpg)

kết quả danh sách liên kết 2

Nếu có số nút lẻ, thì danh sách đầu tiên phải chứa thêm một nút.
Lưu trữ các gợi ý giữa và cuối cùng của danh sách liên kết tròn bằng thuật toán rùa và thỏ.
Làm cho nửa thứ hai tròn. 
Làm cho nửa đầu tròn.
Đặt con trỏ đầu (hoặc bắt đầu) của hai danh sách được liên kết.
