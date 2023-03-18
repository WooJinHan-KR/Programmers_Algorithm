#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int count=1;
	while(1){
		int L=0, P=0, V=0;
		cin >> L >> P >> V;
		
		if(L==0)
			break;
			
		cout << "Case " << count++ << ": "  << (V/P)*L + (V%P>L ? L:V%P) << endl;	
	}	
	
	
	return 0;
}