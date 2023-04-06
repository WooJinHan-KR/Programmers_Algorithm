#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int N;
	int count = 0;
	cin >> N;
	
	for(int i=0; i<N; i++){
		char word[100] = {0,};
		int alpha[26] = {0,};
		cin >> word;
		int check = 1;
		for(int j=0; j<strlen(word); j++){
			alpha[word[j] - 'a']++;
			if(j > 1 && word[j] != word[j-1] && alpha[word[j] -'a'] > 1)
				check = 2;
		}
		if(check == 1)
			count++;
	}
	cout << count;
	
	
	return 0;
}