#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    for(int i=0; i<photo.size(); i++){
        int sum = 0;
        for(int j=0; j<photo[i].size(); j++){
            int index = -1;
            
            if(find(name.begin(), name.end(), photo[i][j]) != name.end())
                index = find(name.begin(), name.end(), photo[i][j]) - name.begin();
            
            if(index!=-1)
                sum+=yearning[index];
        }
        answer.push_back(sum);
    }
    return answer;
}