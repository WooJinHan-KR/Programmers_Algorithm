#include <string>
#include <iostream>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int arr[30] = {0, };
    
    for(int i=0; i<30; i++) 
        arr[i]++;
    for(int i=0; i<lost.size(); i++) 
        arr[lost[i]-1]--;
    for(int i=0; i<reserve.size(); i++) 
        arr[reserve[i]-1]++;
    
    for(int i=0; i<n; i++){
        if(arr[i]==0 /*&& i>0 && i<n-1*/){
            if(arr[i-1]==2){
                arr[i-1]--;
                arr[i]++;
            }
            else if(arr[i+1]==2){
                arr[i+1]--;
                arr[i]++;
            }
        }
        else if(i==0 && arr[0]==0 && arr[1]==2){
            arr[0] = 1;
            arr[1] = 1;
        }
        else if(i==n-2 && arr[n-1]==2 && arr[n-2]==0){
            arr[n-2] = 1;
            arr[n-1] = 1;
        }
    }
    
    for(int i=0; i<n; i++)
        if(arr[i] > 0)
            answer++;
    
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return answer;
}

//1 0 1 1 1 0 2 0 2 1 2