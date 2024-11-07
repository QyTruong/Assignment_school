#include<iostream>
#include<ctime>

#define MAX 100

using namespace std;

void menu() {
	cout << "0. Thoat" << endl
		<< "1. Insertion sort" << endl
		<< "2. Quick sort" << endl
		<< "3. Heap sort" << endl
		<< "4. Fibonacci" << endl
		<< "5. xuat du lieu" << endl;
}

void InsertionSort(int a[], int n) {
	int ss = 0, solangan = 0;
	for (int i = 1; i < n; i++) {
		int x = a[i];
		int j = i - 1;
		solangan += 2;
		ss++;
		while (j >= 0 && a[j] > x) {
			a[j + 1] = a[j];
			solangan++;
			j--;
		}
		solangan++;
		a[j + 1] = x;
		for (int k = 0; k < n; k++)
			cout << a[k] << "\t";
		cout << endl;
	}
	cout << "So lan so sanh: " << ss << endl;
	cout << "So lan gan gia tri: " << solangan << endl;
}

void QuickSort(int a[], int left, int right, int& hoanvi, int& ss, int sl, int& recTime) {
	int l = left;
	int r = right;
	int pivot = a[(left + right) / 2];
	for (int i = 0; i < sl; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
	while (l <= r) {
		ss++;
		while (a[l] < pivot) { l++; ss++; }
		while (a[r] > pivot) { r--; ss++; }
		if (l <= r) {
			hoanvi++;
			swap(a[l], a[r]);
			l++; r--;
		}
	}
	if (l < right) {
		ss++;
		recTime++;
		QuickSort(a, l, right, hoanvi, ss,sl, recTime);
	}
	if (left < r) {
		ss++;
		recTime++;
		QuickSort(a, left, r, hoanvi, ss, sl, recTime);
	}
}

void heapify(int a[], int n, int i, int& hoanvi, int& ss, int& heapTime) {
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	if (l < n && a[largest] < a[l]) { largest = l; ss++; }
	if (r < n && a[largest] < a[r]) { largest = r; ss++; }
	if (largest != i) {
		ss++;
		swap(a[i], a[largest]);
		hoanvi++;
		heapTime++;
		heapify(a, n, largest, hoanvi, ss, heapTime);
	}
}

int fibonacii(int n, int& cnt) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	cnt++;
	return fibonacii(n - 1, cnt) + fibonacii(n - 2, cnt);
}

void heapSort(int a[], int n, int& hoanvi, int& ss, int sl, int& heapTime) {
	for (int i = n / 2 - 1; i >= 0; i--) {
		heapify(a, n, i, hoanvi, ss, heapTime);
	}
	
	for (int i = n - 1; i >= 0; i--) {
		swap(a[i], a[0]);
		hoanvi++;
		for (int i = 0; i < sl; i++) {
			cout << a[i] << "\t";
		}
		cout << endl;
		heapify(a, i, 0, hoanvi, ss, heapTime);
		if (i != 0){
			for (int i = 0; i < sl; i++) {
				cout << a[i] << "\t";
			}
			cout << endl;
		}
	}
}

int main() {
	/*int a[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(a) / sizeof(a[0]);*/
	srand(time(NULL));
	int* a = NULL;
	int n;
	int isInit = false;
	int flag = 0;
	int choice;
	do {
		cout << "===========WELCOME TO MY PROGRAM!!!===========\n";
		menu();
		cout << "Hay nhap lua chon cua ban: ";
		cin >> choice;
		if (choice != 0) {
			if (flag == 1 && choice != 4) {
				int yn;
				do {
					cout << "Ban co muon nhap mang moi khong (Co: 1/Khong: 0): "; cin >> yn;
					if (yn == 1) {
						do {
							cout << "Nhap so luong phan tu: "; cin >> n;
							if (n <= 0)
								cout << "Gia tri khong hop le!\n";
						} while (n <= 0);
						int mt;
						do {
							cout << "Hay cho phuong thuc nhap phan tu (Automatic/Maunal) - (0/1): "; cin >> mt;
							if (mt == 0) {
								a = new int[n];
								for (int i = 0; i < n; i++) {
									a[i] = rand() % 100;
								}
								isInit = true;
							}
							else if (mt == 1) {
								a = new int[n];
								cout << "Hay nhap danh sach " << n << " phan tu:\n";
								for (int i = 0; i < n; i++) {
									cin >> a[i];
								}
								isInit = true;
							}
							else cout << "Khong hop le!\n";
						} while (mt != 1 && mt != 0);
					}
					else if (yn == 0) continue;
					else cout << "khong lop le!\n";
				} while (yn != 1 && yn != 0);
			}
			else if (flag == 0 && choice != 4) {
				do {
					cout << "Nhap so luong phan tu: "; cin >> n;
					if (n <= 0)
						cout << "Gia tri khong hop le!\n";
				} while (n <= 0);
				int mt;
				do {
					cout << "Hay cho phuong thuc nhap phan tu (Automatic/Maunal) - (0/1): "; cin >> mt;
					if (mt == 0) {
						a = new int[n];
						for (int i = 0; i < n; i++) {
							a[i] = rand() % 100;
						}
						isInit = true;
					}
					else if (mt == 1) {
						a = new int[n];
						cout << "Hay nhap danh sach " << n << " phan tu:\n";
						for (int i = 0; i < n; i++) {
							cin >> a[i];
						}
						isInit = true;
					}
					else cout << "Khong hop le!\n";
				} while (mt != 1 && mt != 0);
			}
		}
		
		switch (choice)
		{
		case 0: {
			cout << "Cam on ban da su dung chuong trinh!\n";
			break;
		}
		case 1: {
			if (isInit == true) {
				cout << "\t\tInsertion sort\n";
				InsertionSort(a, n);
			}
			else {
				cout << "Du lieu chua duoc khoi tao!\n";
			}
			break;
		}
		case 2: {
			if (isInit == true) {
				cout << "\t\tQuick sort\n";
				int hoanvi = 0, ss = 0, recTime = 0;
				QuickSort(a, 0, n-1, hoanvi, ss, n-1, recTime);
				cout << "So lan hoan vi " << hoanvi << endl;
				cout << "So lan so sanh " << ss << endl;
				cout << "So lan goi de quy: " << recTime << endl;
			}
			else {
				cout << "Du lieu chua duoc khoi tao!\n";
			}
			break;
		}
		case 3: {
			if (isInit == true) {
				int hoanvi = 0, ss = 0, heapTime = 0;
				cout << "\t\tHeap sort\n";
				heapSort(a, n, hoanvi, ss, n-1, heapTime);
				cout << "So lan hoan vi: " << hoanvi << endl;
				cout << "So lan so sanh: " << ss << endl;
				cout << "So lan heapify: " << heapTime << endl;
			}
			else {
				cout << "Du lieu chua duoc khoi tao!\n";
			}
			break;
		}
		case 4: {
			cout << "\tFibonacci\n";
			int x, time = 0; 
			cout << "Ban muon in ra bao nhieu so fibonacci: ";
			cin >> x;
			cout << "Day so: ";
			for (int i = 0; i < x; i++) {
				cout << fibonacii(i, time) << " ";
			}
			cout << endl;
			cout << "So lan de quy: " << time << endl;
			break;
		}
		case 5: {
			cout << "Danh sach xuat ra\n";
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			break;
		}
		default:
			cout << "Khong hop le!\n";
			break;
		}
		
		flag = 1;
		std::system("pause");
		std::system("cls");
	} while (choice != 0);
	delete[]a;
	a = nullptr;


	return 0;
}