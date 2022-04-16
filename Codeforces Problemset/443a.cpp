#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	int ch[26] = {0};

	if(a.length()<3) {
		cout << "0";
		return 0;
	}

	for(int i=1; i<a.length(); i+=3){
		ch[a[i]-'a']++;
		
	}
	int count = 0;
	for(int i=0; i<26; i++){
		if(ch[i]>0) count++;
	}
	cout << count;
	return 0;
}
