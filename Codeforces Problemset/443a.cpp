#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	getline(cin, a);
	int ch[26] = {0};

	for(char i:a){
		cout << i << " " ;
		if(i>='a' or i<='z'){
			
			cout << i << " ";
			//ch[i-'a']++;
		}
	}

	int final = 0;
	for(int i=0; i<26; i++){
		cout << ch[i] << " ";
		if(ch[i] > 0) final++;
	}

	//cout << final;

	return 0;
}
