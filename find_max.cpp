#include <iostream>

using namespace std;

int timMaxDeQuy(int arr[][100], int row, int col, int currRow, int currCol, int maxValue) {
//   // Kiểm tra điều kiện cơ sở: đã duyệt hết mảng
//   if (currRow == row && currCol == col) {
//     return maxValue;
//   }

  // Cập nhật giá trị lớn nhất nếu cần thiết
  if (arr[currRow][currCol] > maxValue) {
    maxValue = arr[currRow][currCol];
  }

  // Duyệt đệ quy sang phần tử tiếp theo
  int nextMaxValue = 0;

  // Duyệt sang phải
  if (currCol < col - 1) {
    nextMaxValue = timMaxDeQuy(arr, row, col, currRow, currCol + 1, maxValue);
  } else {
    nextMaxValue = maxValue;
  }

  // Duyệt xuống hàng tiếp theo
  if (currRow < row - 1) {
    maxValue = timMaxDeQuy(arr, row, col, currRow + 1, 0, nextMaxValue);
  } else {
    maxValue = nextMaxValue;
  }

  return maxValue;
}

int main() {
  int arr[100][100];
  int row, col;

  // Nhập kích thước mảng
  cout << "Nhap so hang: ";
  cin >> row;
  cout << "Nhap so cot: ";
  cin >> col;

  // Nhập dữ liệu cho mảng
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> arr[i][j];
    }
  }

  // Tìm giá trị lớn nhất
  int maxValue = timMaxDeQuy(arr, row, col, 0, 0, -2147483648); // Khởi tạo giá trị lớn nhất với giá trị nhỏ nhất

  // Xuất giá trị lớn nhất
  cout << "Gia tri lon nhat trong mang la: " << maxValue << endl;

  return 0;
}
