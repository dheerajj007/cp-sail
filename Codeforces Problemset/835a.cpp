#include<bits/stdc++.h>
using namespace std;

int main(){
	int s, v1, v2, p1, p2;
	cin >> s >> v1 >> v2 >> p1 >> p2;

	int total1 = s*v1 + p1*2;
	int total2 = s*v2 + p2*2;

	if(total1 < total2) cout << "First";
	else if(total2 < total1) cout << "Second";
	else cout << "Friendship";
	return 0;
}
