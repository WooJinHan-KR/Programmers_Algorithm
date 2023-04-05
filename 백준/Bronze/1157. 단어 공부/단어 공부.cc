#include <iostream>
#include <string>
using namespace std; 

int main(){
	string arr;
	cin >> arr;
	int check[26] = {0, };
	int max = 0, flag = 0, index = 0;
	
	for(int i=0; i<arr.length(); i++){ //문자열 처음부터 끝까지 비교  
		if(arr[i] >= 65 && arr[i] <= 90) //소문자 ascii코드로 비교 
			check[arr[i] - 65]++;
		else if(arr[i] >= 97 && arr[i] <= 122) //대문자 ascii코드로 비 교  
			check[arr[i] - 97]++;
	}
	
	for(int j=0; j<26; j++){
		if(max < check[j])
			max = check[j], flag = 0, index = j;
		else if(max == check[j])
			flag = 1;
	}
	
	/*cout << endl;
	for(int k=0; k<26; k++){
		cout << check[k] << " ";
	}
	cout << endl;*/
	
	
	if(flag == 1)
		cout << "?";
	else{
		char b = index + 65;
		cout << b;
	}
		
	
	return 0;
}