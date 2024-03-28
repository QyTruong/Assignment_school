#include<iostream>
#include<ctime>

using namespace std;

void init(int *&a, int n);

void free_ptr(int *&a, int &n);

void inp(int *&a, int &n);

void outp(int *a, int n);

void push_Back(int *&a, int &n, int x); 

void inp_new(int *&a, int &n);

long* findMAX(int *a, int n);

void sortArr(int *a, int n);

void reverseArr(int *a, int n);

void gen_randomArr(int *&a, int &n);

int* concateArr(int *a, int n, int *b, int m);

int main() {
	int *a = NULL, *b = NULL, n, m;
	int *c = NULL;
	gen_randomArr(a, n);
	
	outp(a, n);
	
	gen_randomArr(b, m);

	outp(b, m);

	c = concateArr(a, n, b, m);
	outp(c, n + m);

	free_ptr(a, n);
	free_ptr(a, n);
	system("pause");
	return 0;
}

void init(int *&a, int n) {
	a = new int[n];
}


void free_ptr(int *&a, int &n) {
	delete[]a;
	a = nullptr;
}

void inp(int *&a, int &n) {
	do {
		cout << "Hay nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap lai!!\n";
	} while (n <= 0);

	init(a, n);
	if (a != NULL) {
		for (int i = 0; i < n; i++) {
			printf("[%d]: ", i);
			cin >> a[i];
		}
	}
}

void outp(int *a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t";
	}
	cout << endl;
}

void push_Back(int *&a, int &n, int x) {
	if (a == NULL) {
		n = 1;
		init(a, n);
		a[n - 1] = x;
		return;
	}
	else {
		int *tmp = a;
		init(a, n + 1);
		for (int i = 0; i < n; i++) {
			a[i] = tmp[i];
		}
		a[n] = x;
		n++;
		free_ptr(tmp,n);
	}
}

void inp_new(int *&a, int &n) {
	int x; 
	cout << "Nhap x: ";
	while (cin >> x) {

		push_Back(a, n, x);
		cout << "Nhap x: ";
	}
}

long* findMAX(int *a, int n) {
	if (a != NULL) {
		long Max = a[0];
		for (int i = 0; i < n; i++) {
			if (a[i] >= Max) {
				Max = a[i];
			}
		}
		return &Max;
	}
	return NULL;
}

void swap(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

void sortArr(int *a, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}

void reverseArr(int *a, int n) {
	int l = 0, r = n - 1;
	while (l < r) {
		swap(a[l], a[r]);
		l++; r--;
	}
}

void gen_randomArr(int *&a, int &n) {
	srand(time(NULL));
	do {
		cout << "Hay nhap so luong phan tu: ";
		cin >> n;
		if (n <= 0)
			cout << "Nhap lai!!\n";
	} while (n <= 0);

	init(a, n);
	if (a != NULL) {
		for (int i = 0; i < n; i++) {
			printf("[%d]: %d\n", i, a[i] = rand() % 11);
		}
	}
}

int* concateArr(int *a, int n, int *b, int m) {
	if (a != NULL && b != NULL) {
		int *c;
		init(c, n + m);
		if (c != NULL) {
			int dem = 0;
			for (int i = 0; i < n; i++) {
				c[dem++] = a[i];
			}
			for (int i = 0; i < m; i++) {
				c[dem++] = b[i];
			}
		}
		return c;
	}
	return NULL;
}