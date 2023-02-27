#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int result = 0;
void Combination(vector<int> arr, vector<int> comb, int index, int depth)
{
    int sum = 0;
    if (depth == comb.size())
    {
        for(int i = 0; i < comb.size(); i++)
            sum += comb[i];
        if(sum == 0)
            result++;
        return;
    }
    else
    {
        for(int i = index; i < arr.size(); i++)
        {
            comb[depth] = arr[i];
            Combination(arr, comb, i + 1, depth + 1);
        }
    }
}

int solution(vector<int> number) {
    int answer = 0;
    int r = 3;
    vector<int> comb(r);
    Combination(number, comb, 0, 0);
    return result;
}