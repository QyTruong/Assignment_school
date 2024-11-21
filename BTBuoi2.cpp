#include<iostream>
#include<ctime>
#include<vector>

using namespace std;

void menu() {
	cout << "0. Thoat chuong trinh\n"
		<< "1. Shell sort\n"
		<< "2. Counting sort\n"
		<< "3. Radix sort\n"
		<< "4. Bucket sort\n";
}

void options() {
	cout << "Option mode:\n"
		<< "0. Default\n"
		<< "1. Best case\n"
		<< "2. Worst case\n";
}

int getMax(int a[], int n) {
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] > max)
			max = a[i];
	}
	return max;
}

void shellSort(int a[], int n, int& solangan, int& ss) {
	for (int gap = n / 2; gap >= 0; gap--) {
		for (int i = gap; i < n; i++) {
			int x = a[i];
			int j;
			solangan++;
			ss++;
			for (j = i; j >= gap && a[j - gap] > x; j -= gap) {
				a[j] = a[j - gap];
				solangan++;
			}
			a[j] = x;
			solangan++;
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
			cout << endl;
		}
	}
}

void countingSort(int a[], int n, int& c, int& o) {
	int max = getMax(a,n);
	int* output = new int[n];
	int* count = new int[max+1];
	for (int i = 0; i < n; i++) {
		output[i] = 0;
	}
	for (int i = 0; i <= max; i++) {
		count[i] = 0;
	}
	cout << "Counting Array Before: \n";
	for (int i = 0; i < n; i++) {
		count[a[i]]++;
		c++;
		cout << count[i] << "\t";
	}
	cout << "\nCounting Array After: \n";
	for (int i = 1; i <= max; i++) {
		count[i] += count[i - 1];
		c++;
		cout << count[i] << "\t";
	}
	cout << "\nOutput Array: \n";
	for (int i = n - 1; i >= 0; i--) {
		output[count[a[i]] - 1] = a[i];
		count[a[i]]--;
		o++;
		c++;
		for (int i = 0; i < n; i++)
			cout << output[i] << "\t";
		cout << endl;
	}
	

	delete[] output;
	delete[] count;
}

void countingSortRD1(int a[], int n, int exp, int& c, int& o) {
	int* output = new int[n];
	int* count = new int[10];

	for (int i = 0; i < 10; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		count[(a[i]/exp) % 10]++;
		c++;
	}
	for (int i = 1; i < 10; i++) {
		count[i] += count[i - 1];
		c++;
	}
	for (int i = n - 1; i >= 0; i--) {
		output[count[(a[i]/exp) % 10] - 1] = a[i];
		count[(a[i]/exp) % 10]--;
		o++;
		c++;
	}
	for (int i = 0; i < n; i++)
		a[i] = output[i];

	delete[] output;
	delete[] count;
}

void countingSortRD2(int a[], int n, int exp) {
	int* output = new int[n];
	int* count = new int[10];

	for (int i = 0; i < 10; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		count[(a[i] / exp) % 10]++;
	}
	for (int i = 8; i >= 0; i--) {
		count[i] += count[i + 1];
	}
	for (int i = n - 1; i >= 0; i--) {
		output[count[(a[i] / exp) % 10] - 1] = a[i];
		count[(a[i] / exp) % 10]--;
	}
	for (int i = 0; i < n; i++)
		a[i] = output[i];

	delete[] output;
	delete[] count;
}

void radixSort(int a[], int n, int op) {
	int solangoi = 0;
	int max = getMax(a, n);
	for (int exp = 1; max / exp > 0; exp *= 10) {
		if (op == 0) {
			int solanCount = 0;
			int solanOuput = 0;
			countingSortRD1(a, n, exp, solanCount, solanOuput);
			solangoi++;
			cout << "So lan thuc hien count: " << solanCount << endl;
			cout << "So lan thuc hien output: " << solanOuput << endl;
			for (int i = 0; i < n; i++) {
				cout << a[i] << " ";
			}
			cout << "\n==============================\n\n";
		}
		else {
			countingSortRD2(a, n, exp);
		}
	}
	
	cout << "So lan goi ham counting sort: " << solangoi << endl;
}

void insertionSort(vector<float>& bucket, int& g, int& ss) {
	for (int i = 1; i < bucket.size(); i++) {
		float x = bucket[i]; g++;
		int j = i - 1;
		ss++;
		while (j >= 0 && bucket[j] > x) {
			bucket[j + 1] = bucket[j];
			j--;
			g++;
		}
		g++;
		bucket[j + 1] = x;
	}
}

void bucketSort(float a[], int n) {
	int solangoiham = 0;
	vector<vector<float>> b(n);
	for (int i = 0; i < n; i++) {
		int idx = n * a[i];
		b[idx].push_back(a[i]);
	}
	for (int i = 0; i < n; i++) {
		int solangan = 0, solanss = 0;
		if (!b[i].empty()) {
			insertionSort(b[i], solangan, solanss);
			cout << "So lan gan: " << solangan << endl;
			cout << "So lan so sanh: " << solanss << endl;
			cout << "Bucket thu " << i << ": ";
			for (auto x : b[i])
				cout << x << " ";
			cout << "\n=========================\n\n";
			solangoiham++;
		}
	}
	int idx = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < b[i].size(); j++) {
			a[idx++] = b[i][j];
		}
	}
	cout << "So lan goi ham Insertion sort: " << solangoiham << endl;
}

int main() {
	int choice;
	int n, *a = NULL;
	float *b = NULL;
	bool flag = false;
	srand(time(NULL));
	do {
		do {
			system("cls");
			cout << "Welcome to my program!\n";
			cout << "Hay nhap so luong phan tu: "; cin >> n;
			if (n <= 0)
				cout << "Vui long nhap lai!\n";
		} while (n <= 0);

		a = new int[n];
		b = new float[n];

		int select;
		do {
			cout << "Ban muon nhap phan tu (Automatic: 0/ Manual: 1): ";
			cin >> select;
			if (select == 0) {
				for (int i = 0; i < n; i++) {
					a[i] = rand() % 1000000001;
					b[i] = static_cast<double>(rand()) / RAND_MAX;
				}
				cout << "Da doi khoi tao thanh cong!\n";
			}
			else if (select == 1) {
				cout << "Moi ban nhap cac phan tu cach nhau bang khoang trang: ";
				for (int i = 0; i < n; i++) {
					cin >> a[i];
				}
				cout << "Da doi khoi tao thanh cong!\n";
			}
			else
				cout << "Khong hop le, vui long nhap lai!\n";
		} while (select != 0 && select != 1);
		int option;
		do {
			options();
			cout << "Hay nhap lua chon cua ban: "; cin >> option;
			if (option != 0 && option != 1 && option != 2)
				cout << "Vui long nhap lai!\n";
			else {
				if (option == 1) {
					radixSort(a, n, 0);
					cout << "Ban da khoi tao thanh cong BEST CASE!\n";
				}
				else if (option == 2) {
					radixSort(a, n, 1);
					cout << "Ban da khoi tao thanh cong BEST CASE!\n";
				}
				else if (option == 0) {
					cout << "Khong thay doi cau truc mang!\n";
					break;
				}
			}
		} while (option != 0 && option != 1 && option != 2);
		menu();
		cout << "Hay nhap lua chon cua ban: "; cin >> choice;

		switch (choice){
		case 0: {
			cout << "Cam on ban vi da su dung chuong trinh!\n";
			break;
		}
		case 1: {
			cout << "\t\t\t\tSHELL SORT\n";
			cout << "Mang ban dau: ";
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
			cout << endl;
			int solangan = 0;
			int ss = 0;
			shellSort(a, n, solangan, ss);
			cout << "So lan gan: " << solangan << endl;
			cout << "So lan so sanh: " << ss << endl;
			break;
		}
		case 2: {
			cout << "\t\t\t\tCOUNTING SORT\n";
			int c = 0, o = 0;
			cout << "Mang ban dau: ";
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
			cout << endl;
			countingSort(a, n, c, o);
			cout << "So lan gan co count[]: " << c << endl;
			cout << "So lan gan cho output[]: " << o << endl;
			break;
		}
		case 3: {
			cout << "\t\t\t\tRADIX SORT\n";
			cout << "Mang ban dau: ";
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
			cout << endl << endl;
			radixSort(a, n, 0);
			break;
		}
		case 4: {
			cout << "\t\t\t\tBUCKET SORT\n";
			cout << "Mang ban dau: ";
			for (int i = 0; i < n; i++) {
				cout << a[i] << "\t";
			}
			cout << endl;
			bucketSort(b, n);
			cout << "\Ket qua: ";
			for (int i = 0; i < n; i++)
				cout << b[i] << " ";
			cout << endl;
			break;
		}
		default:
			cout << "Khong hop le, vui long nhap lai!\n";
			break;
		}
		
		system("pause");
	} while (choice != 0);

	delete[]b;
	delete[]a;
	return 0;
}