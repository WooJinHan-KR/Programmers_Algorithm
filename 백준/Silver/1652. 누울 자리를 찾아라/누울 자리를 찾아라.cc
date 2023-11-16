#include<bits/stdc++.h>
using namespace std;   
string s; 
int row_cnt, col_cnt, n, cnt; 
char a[101][101]; 
int main(){
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> s; 
        cnt = 0;  
        for(int j = 0; j < s.size(); j++){
            a[i][j] = s[j];  
            if(a[i][j] == '.')cnt++; 
            else{ 
                // 짐을 만났을 때
                if(cnt >= 2) col_cnt++; 
                cnt = 0; 
            }   
        }
        // 벽을 만났을 때
        if(cnt >= 2) col_cnt++;  
    }
    
    for(int i = 0; i < n; i++){
        cnt = 0;  
        for(int j = 0; j < n; j++){
            if(a[j][i] == '.')cnt++; 
            else{ 
                // 짐을 만났을 때
                if(cnt >= 2) row_cnt++; 
                cnt = 0; 
            } 
        }
        // 벽을 만났을 때
        if(cnt >= 2) row_cnt++;  
    }
    cout << col_cnt << " " << row_cnt << "\n";  
    return 0; 
}