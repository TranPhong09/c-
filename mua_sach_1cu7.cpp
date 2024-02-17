#include <iostream>

using namespace std;

struct Book {
  int price;
  int quantity;
};

int main() {
  // Khởi tạo các loại sách
  Book book1 = {50000, 0};
  Book book2 = {20000, 0};
  Book book3 = {10000, 0};

  // Khởi tạo số tiền hiện tại
  int money = 1700000;

  // Duyệt qua tất cả các khả năng có thể
  
  return 0;
}

void DFS(Book book1, Book book2, Book book3, int money) {
  // Nếu tổng giá cả của các quyển sách vượt quá số tiền cho phép thì thoát khỏi vòng lặp
  if (book1.price * book1.quantity + book2.price * book2.quantity + book3.price * book3.quantity > money) {
    return;
  }

  // Nếu đã mua đủ 3 quyển sách thì in ra kết quả
  if (book1.quantity > 0 && book2.quantity > 0 && book3.quantity > 0) {
    cout << "Sách 1: " << book1.quantity << endl;
    cout << "Sách 2: " << book2.quantity << endl;
    cout << "Sách 3: " << book3.quantity << endl;
    return;
  }

  // Tăng số lượng sách thứ nhất
  book1.quantity++;
  DFS(book1, book2, book3, money);

  // Giảm số lượng sách thứ nhất
  book1.quantity--;

  // Tăng số lượng sách thứ hai
  book2.quantity++;
  DFS(book1, book2, book3, money);

  // Giảm số lượng sách thứ hai
  book2.quantity--;

  // Tăng số lượng sách thứ ba
  book3.quantity++;
  DFS(book1, book2, book3, money);

  // Giảm số lượng sách thứ ba
  book3.quantity--;
}
