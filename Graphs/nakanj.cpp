#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long

vector<pair<int, int>> movem = {
	{-1, 2}, {1, 2},
	{-1, -2}, {1, -2},
	{2, -1}, {2, 1},
	{-2, -1}, {-2, 1},
};

bool isvalid(int x, int y){
	return x >=0 and y>=0 and x<8 and y<8;
}

int getx(string a){
	return a[0]-'a';
}
int gety(string a){
	return a[1]-'1';
}

int bfs(string a, string b){
	int sr = getx(a);
	int sc = gety(a);
	int dr = getx(b);
	int dc = gety(b);
	int vis[8][8]={0};
	int lev[8][8]={0};	
	queue<pair<int, int>> q;
	q.push({sr,sc});
	vis[sr][sc]=1;
	while(!q.empty()){
		pair<int, int> front = q.front();
		int x = front.first, y = front.second;
		q.pop();
		
		for(auto i:movem){
			int childx = i.first+ x;
			int childy = i.second + y;	
			if(!isvalid(childx, childy)) continue;
			if(!vis[childx][childy]){
				q.push({childx, childy});
				lev[childx][childy] = lev[x][y]+1;
				vis[childx][childy] = 1;
			}
		}

		
		
	}
	return lev[dr][dc];
	
	
}

void solve(){
	string a, b;
	cin >> a >> b;
	cout << bfs(a, b) << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);	
	
	int tc=1;
	cin>>tc;
 
	while(tc--) solve();
	return 0;
}