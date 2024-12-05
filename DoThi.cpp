#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<ctime>

using namespace std;

struct Edge {
	int u, v, w;
};

void menuInput() {
	cout << "1. Auto\n"
		<< "2. Manual\n";
}

void menuTest() {
	cout << "0. Thoat\n"
		<< "1. Tim dinh\n"
		<< "2. Tim duong di tu 1 dinh -> dinh khac\n"
		<< "3. Do thi lien thong khong ?\n"
		<< "4. Kruskal\n"
		<< "5. Prim\n"
		<< "6. Dijkstra\n"
		<< "7. Bellman-Ford\n";
}

vector<int> vis;
vector<int> previous;
int dem = 0;

void output(int start, int goal) {
	stack<int> st;

	int idx = previous[goal];
	while (idx != start) {
		st.push(idx);
		idx = previous[idx];
	}
	st.push(start);

	while (!st.empty()) {
		cout << st.top() << " -> ";
		st.pop();
	}
	cout << goal;
}

// DFS
bool DFS(vector<vector<int>> a, int start, int goal, int n, int op, int isCount) {
	vis.resize(n + 1, 0);
	previous.resize(n + 1, -1);
	stack<int> s;
	dem++;
	s.push(start);
	vis[start] = 1;

	while (!s.empty()) {
		int r = s.top(); s.pop();
		vis[r] = 1;

		if (isCount == 0) {
			if (r == goal) {
				output(start, goal);
				return true;
			}
		}
		if (op == 1) {
			for (int i = 1; i <= n; i++) {
				if (!vis[i] && a[r][i]) {
					dem++;
					s.push(i);
					vis[i] = -1;
					previous[i] = r;
				}
			}
			if (dem == n) return true;
		}
		else {
			for (auto i : a[r]) {
				if (!vis[i]) {
					vis[i] = -1;
					dem++;
					s.push(i);
					previous[i] = r;
				}
			}
		}

	}
	return false;
}

// BFS
bool BFS(vector<vector<int>> a, int start, int goal, int n, int op) {
	vis.resize(n + 1, 0);
	previous.resize(n + 1, -1);
	queue<int> q;
	q.push(start);
	vis[start] = 1;

	while (!q.empty()) {
		int r = q.front(); q.pop();
		vis[r] = 1;

		if (r == goal) {
			output(start, goal);
			return true;
		}
		else {
			if (op == 1) {
				for (int i = 1; i <= n; i++) {
					if (!vis[i] && a[r][i]) {
						q.push(i);
						vis[i] = -1;
						previous[i] = r;
					}
				}
			}
			else {
				for (auto i : a[r]) {
					if (!vis[i]) {
						vis[i] = -1;
						q.push(i);
						previous[i] = r;
					}
				}
			}
		}
	}
	return false;
}

void make_set(vector<int> parent, int n) {
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
}

int findParent(vector<int> parent, int v) {
	if (v == parent[v])
		return v;
	return parent[v] = findParent(parent, parent[v]);
}

bool unionVertex(vector<int> parent, int u, int v) {
	u = findParent(parent, u);
	v = findParent(parent, v);
	if (u == v)
		return false;
	parent[u] = v;
	return true;
}

int kruskal(vector<Edge>& edges, int n, int m, vector<int> parent) {
	int d = 0;
	vector<Edge> mst;
	sort(edges.begin(), edges.end(), [](Edge a, Edge b) {return a.w < b.w; });
}

void showMatrix(vector<vector<int>> a) {

	for (int i = 1; i < a.size(); i++) {
		for (int j = 1; j < a.size(); j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

void showAdj(vector<vector<int>> a) {
	int n = a.size();
	for (int i = 1; i < n; i++) {
		cout << i << ": ";
		for (auto e : a[i]) {
			cout << e << " ";
		}
		cout << endl;
	}
}




int main() {
	int choice;
	do {
		system("cls");
		cout << "\t\tWELCOME TO MY PROGRAM!\n";
		int select;
		srand(time(NULL));
		vector<pair<int, int>> edges;
		vector<vector<int>> adj;
		vector<vector<int>> matrix;
		
		vector<Edge> edges1;
		int n, m;
		int op;
		menuInput();
		do {
			cout << "Hay nhap phuong thuc dau vao ma ban muon: ";
			cin >> select;
			if (select != 1 && select != 2) {
				cout << "Khong hop le, vui long nhap lai!\n";
			}

			// Lua chon co huong hoac vo huong
			do {
				cout << "Ban muon do thi vo huong hay co huong:\n";
				cout << "1. Vo huong\n"
					<< "2. Co huong\n";
				cout << "Lua chon cua ban la: ";
				cin >> op;
				if (op != 1 && op != 2) {
					cout << "Khong hop le, vui long thu lai!\n";
				}
			} while (op != 1 && op != 2);

			// Khoi tao so dinh va so canh
			if (op == 1) {
				do {
					cout << "Nhap so dinh: "; cin >> n;
					cout << "Nhap so canh: "; cin >> m;
					if (n < 2 || m < 1 || m > n*(n - 1) / 2) {
						cout << "Dau vao khong hop le, vui long nhap lai!\n";
					}
				} while (n < 2 || m < 1 || m > n*(n - 1) / 2);
			}
			else {
				do {
					cout << "Nhap so dinh: "; cin >> n;
					cout << "Nhap so canh: "; cin >> m;
					if (n < 2 || m < 1 || m > n*(n - 1)) {
						cout << "Dau vao khong hop le, vui long nhap lai!\n";
					}
				} while (n < 2 || m < 1 || m > n*(n - 1));
			}



			// Khoi so dinh cho danh sach ke va ma tran ke
			adj.resize(n + 1);
			matrix.resize(n + 1, vector<int>(n + 1, 0));

			// Automatic
			if (select == 1) {
				vector<vector<bool>> Ivis(n + 1, vector<bool>(n + 1, false));
				for (int i = 0; i < m; i++) {
					int u;
					int v;
					int w;
					do {
						do {
							u = (rand() % n) + 1;
							v = (rand() % n) + 1;
							w = (rand() % 100) + 1;
						} while (u == v);
					} while (Ivis[u][v] == true);
					Ivis[u][v] = true;
					edges.push_back({ u, v });
					edges1.push_back({ u,v,w });
				}
				cout << "\tDANH SACH CANH CO TRONG SO\n";
				for (auto e : edges1) {
					cout << e.u << " - " << e.v << " - " << e.w << endl;
				}
				cout << "\tDANH SACH CANH KHONG CO TRONG SO\n";
				for (auto e : edges) {
					cout << e.first << " - " << e.second << endl;
				}
				cout << endl;


				// Hien thi so dinh va canh da khoi tao
				cout << endl << "So dinh: " << n << " - " << "So canh: " << m << endl << endl;


				// Vo huong
				if (op == 1) {
					for (int i = 0; i < m; i++) {
						int u = edges[i].first;
						int v = edges[i].second;
						matrix[u][v] = 1;
						matrix[v][u] = 1;
					}
				}



				// Co huong
				else if (op == 2) {
					for (int i = 0; i < m; i++) {
						int u = edges[i].first;
						int v = edges[i].second;
						if (u != v)
							adj[u].push_back(v);
					}
				}
			}



			// Manual
			else if (select == 2) {
				for (int i = 0; i < m; i++) {
					int u, v, w;
					cin >> u >> v >> w;
					edges.push_back({ u, v });
					edges1.push_back({ u,v,w });
				}

				// Vo huong
				if (op == 1) {
					for (int i = 0; i < m; i++) {
						int u = edges[i].first;
						int v = edges[i].second;
						matrix[u][v] = 1;
						matrix[v][u] = 1;
					}
				}

				// Co huong
				else if (op == 2) {
					for (int i = 0; i < m; i++) {
						int u = edges[i].first;
						int v = edges[i].second;
						if (u != v)
							adj[u].push_back(v);
					}
				}
			}
		} while (select != 1 && select != 2);

		int showList;
		do {
			cout << "Ban co muon xem danh sach vua khoi tao khong? (0-1): ";
			cin >> showList;
			if (showList == 1) {
				if (op == 1) {
					showMatrix(matrix);
				}
				else if (op == 2) {
					showAdj(adj);
				}
			}
			else if (showList == 0) break;
			if (showList != 1) {
				cout << "Khong hop le, vui long nhap lai!\n";
			}
			if (showList == 1) break;
		} while (showList != 1 && showList != 0);



		do {
			cout << "\n";
			menuTest();
			cout << "Hay nhap lua chon cua ban: ";
			cin >> choice;
			switch (choice)
			{
			case 0: {
				break;
			}
			case 1: {
				cout << "\tTIM DINH TON TAI\n";
				cout << "Ban muon tim dinh nao?: ";
				int v; cin >> v;
				if (op == 1) {
					if (DFS(matrix, 1, v, n, op, 0)) {
						cout << "\nDinh " << v << " co ton tai trong do thi\n";
					}
					else cout << "\nKhong tim thay " << v << " trong do thi\n";
				}
				else {
					if (DFS(adj, 1, v, n, op, 0)) {
						cout << "Dinh " << v << " co ton tai trong do thi\n";
					}
					else cout << "Khong tim thay " << v << " trong do thi\n";
				}
				break;
			}
			case 2: {
				cout << "\tTIM DUONG TU 1 DINH DEN 1 DINH KHAC\n";
				int u, v;
				cout << "Dinh bat dau: "; cin >> u;
				cout << "Dinh dich: "; cin >> v;
				printf("Doan duong tu %d den %d: ", u, v);
				if (op == 1) {
					if (BFS(matrix, 1, v, n, op)) {
						BFS(matrix, u, v, n, op);
						cout << endl;
					}
					else cout << "Khong tim thay doan duong nay trong do thi\n";
				}
				else {
					if (BFS(adj, u, v, n, op)) {
						BFS(adj, u, v, n, op);
						cout << endl;
					}
					else cout << "Khong tim thay doan duong nay trong do thi\n";
				}

				break;
			}
			case 3: {
				cout << "\tKIEM TRA DO THI LIEN THONG\n";
				int flag = 0;
				if (op == 1) {
					dem = 0;
					for (int i = 1; i <= n; i++) {
						for (int j = 1; j <= n; j++) {
							if (matrix[i][j]) {
								if (DFS(matrix, i, n, n, op, 1)) {
									cout << "Do thi lien thong!!\n";
									flag = 1;
									break;
								}
								else {
									cout << "Do thi khong lien thong!!\n";
									flag = 1;
									break;
								}
							}
						}
						if (flag == 1) break;
					}
					cout << dem;
				}
				else {
					for (int i = 1; i <= n; i++) {
						if (!adj[i].empty()) {
							if (DFS(adj, i, n, n, op, 1)) {
								cout << "Do thi lien thong!!\n";
								break;
							}
							else {
								cout << "Do thi khong lien thong!!\n";
								break;
							}
						}
					}
				}

				break;
			}
			case 4: {
				vector<Edge> kruskal = edges1;

			}
			case 5: {
				vector<Edge> prim = edges1;
			}
			case 6: {
				vector<Edge> dijsktra = edges1;
			
			}
			case 7: {
				vector<Edge> bf = edges1;

			}
			default:
				cout << "Khong hop le, vui long nhap lai!\n";
				break;
			}
			system("pause");
		} while (choice != 0);

		int repeat;
		do {
			cout << "Ban co muon khoi tao lai mang de tiep tuc thuc hien thao tac khong?: ";
			cin >> repeat;
			if (repeat == 0) {
				break;
			}
			else if (repeat == 1) {
				choice = 1;
				break;
			}
			if (repeat != 0 || repeat != 1)
				cout << "Khong hop le, vui long nhap lai!\n";
		} while (repeat != 0 || repeat != 1);

		if (repeat == 0) {
			cout << "Cam on vi da su dung chuong trinh!\n";
		}
	} while (choice != 0);

	return 0;
}
