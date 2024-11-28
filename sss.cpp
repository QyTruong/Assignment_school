#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int quickestWayUp(vector<pair<int,int>> l, vector<pair<int, int>> s){
    int step = 1;
    int way = 0;
    sort(l.begin(), l.end(), [](pair<int, int>& a, pair<int, int>& b){return a.first < b.first;});
    sort(s.begin(), s.end(), [](pair<int, int>& a, pair<int, int>& b){return a.second < b.second;});
    
    while (step != 100){
        for (auto e : l){
            
        }
    }
}


int main(){
    int t = 1;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> ladders;
        vector<pair<int, int>> snakes;
        for (int i = 0; i < n; i++){
            int u, v; cin >> u >> v;
            ladders.push_back({u,v});
        }
        for (int i = 0; i < m; i++){
            int u, v; cin >> u >> v;
            snakes.push_back({u,v});
        }
        cout << quickestWayUp(ladders, snakes);
    }


    return 0;
}