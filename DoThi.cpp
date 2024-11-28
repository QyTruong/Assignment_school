#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<algorithm>
#include<ctime>

using namespace std;

void menuInput(){
	cout << "1. Auto\n"
		<< "2. Manual\n";
}

void menuTest() {
	cout << "0. Thoat\n" 
		<< "1. Tim dinh\n"
		<< "2. Tim duong di tu 1 dinh -> dinh khac\n"
		<< "3. Do thi lien thong khong ?\n";
}

vector<int> vis;

void DFSRec(vector<vector<int>> &adj, vector<int> &visited, int s) {

	visited[s] = true;

	// Print the current vertex
	cout << s << " ";

	// Recursively visit all adjacent vertices
	// that are not visited yet
	for (int i : adj[s])
		if (visited[i] == false)
			DFSRec(adj, visited, i);
}

// DFS
void DFS(vector<vector<int>> a,int u, int v, int n) {
	vis.resize(n + 1, 0);
	DFSRec(a, vis, u);
}

// BFS
void BFS(vector<vector<int>> a, int u, int v, int n) {
	vis.resize(n+1, 0);
	queue<int> q;
	q.push(u);
	vis[u] = 1;

	while (!q.empty()) {
		int r = q.front();
		q.pop();
		cout << r << " ";
		vis[r] = 1;
		
		for (int i = 1; i <= n; i++) {
			if (!vis[i] && a[r][i]) {
				q.push(i);
				vis[i] = -1;
			}
		}
		
	}
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
		int n, m;

		int op;
		menuInput();
		do {
			cout << "Hay nhap phuong thuc dau vao ma ban muon: ";
			cin >> select;
			if (select != 1 && select != 2) {
				cout << "Khong hop le, vui long nhap lai!\n";
			}

			// Khoi tao danh danh sach canh
			n = rand() % 10 + 1;
			if (n == 1) n = 2;
			m = n*(n - 1) / 2;

			for (int i = 0; i < m; i++) {
				int u = (rand() % n) + 1;
				int v = (rand() % n) + 1;
				edges.push_back({ u, v });
			}
			
			for (auto e : edges) {
				cout << e.first << " - " << e.second << endl;
			}
			cout << endl;

			// Khoi so dinh cho danh sach ke va ma tran ke
			adj.resize(n + 1);
			matrix.resize(n + 1, vector<int>(n + 1, 0));
			
			// Automatic
			if (select == 1) {
				cout << endl << "So dinh: " << n << " - "
					<< "So canh: " << m << endl << endl;

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
					vector<vector<bool>> Ivis(n + 1, vector <bool> (n+1, false));
					for (int i = 0; i < m; i++) {
						int u = edges[i].first;
						int v = edges[i].second;
						if (u != v && Ivis[u][v] == false) {
							adj[u].push_back(v);
							Ivis[u][v] = true;
							Ivis[v][u] = true;
						}
					}
				}
			}



			// Manual
			else if (select == 2) {
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

				cout << "Nhap so dinh: "; cin >> n;
				cout << "Nhap so canh: "; cin >> m;

				// Vo huong
				if (op == 1) {
					for (int i = 0; i < m; i++) {
						int u, v;
						cin >> u >> v;
						matrix[u][v] = 1;
						matrix[v][u] = 1;
					}
				}

				// Co huong
				else if (op == 2) {
					vector<vector<bool>> Ivis(n + 1, vector <bool>(n + 1, false));
					for (int i = 0; i < m; i++) {
						int u, v;
						cin >> u >> v;
						adj[u].push_back(v);
						if (u != v && Ivis[u][v] == false) {
							adj[u].push_back(v);
							Ivis[u][v] = true;
							Ivis[v][u] = true;
						}
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


		int duyet;
		do {
			cout << "Ban co muon xem cach duyet cua DFS vaf BFS khong? (0-1): ";
			cin >> duyet;
			if (duyet == 1) {
				cout << "Duyet DFS: "; DFS(matrix, 1, n, n); cout << endl;
				cout << "Duyet BFS: "; BFS(matrix, 1, n, n); cout << endl;
			}
		} while (duyet != 1 && duyet != 0);
		
		
		cout << "\n";
		menuTest();
		cout << "Hay nhap lua chon cua ban: ";
		cin >> choice;
		switch (choice)
		{
		case 0: {
			cout << "Cam on vi da su dung chuong trinh!\n";
			break;
		}
		case 1: {

		}
		case 2: {

		}
		case 3: {

		}
		default:
			cout << "Khong hop le, vui long nhap lai!\n";
			break;
		}

		system("pause");
	} while (choice != 0);

	return 0;
}