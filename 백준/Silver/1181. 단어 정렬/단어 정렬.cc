#include <iostream>
#include <algorithm> 
#include <vector>
#include <string>

using namespace std;

bool com(string a, string b){
	if(a.size() != b.size())
		return a.size() < b.size();
	else
		return a < b;
}

int main(){
	
	int n;
	vector<string> b;
	cin >> n;
	for(int i=0; i<n; i++){
		string a;
		cin >> a;
		b.push_back(a);
	}
	sort(b.begin(), b.end(), com);
	b.erase(unique(b.begin(), b.end()), b.end());
	for(int i=0; i<b.size(); i++)
		cout << b[i] << endl;
	return 0;
}