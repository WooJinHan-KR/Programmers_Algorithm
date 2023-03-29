#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char *S = new char[101];
	int arr[26];
	fill_n(arr, 26, -1);
	cin >> S;
	for(int i=0; i<strlen(S); i++){
		if(arr[static_cast<int>(S[i]) - 97] == -1)
			arr[static_cast<int>(S[i]) - 97] = i;
	}
	for(int i=0; i<26; i++)
		cout << arr[i] << " ";
}