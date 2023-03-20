#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> st;

    for(int i=0; i<ingredient.size(); i++) {
        st.push_back(ingredient[i]);
        if(st.size() >= 4 && st[st.size()-4] == 1 && st[st.size()-3] == 2 && st[st.size()-2] == 3 && st[st.size()-1] == 1) {
            st.pop_back();
            st.pop_back();
            st.pop_back();
            st.pop_back();
            answer++;
        }
    }
    return answer;
}
