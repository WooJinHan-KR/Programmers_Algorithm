#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    for (int i = 0; i < skill_trees.size(); i++) { // 스킬트리를 하나씩 검사
        string cur_skill = skill_trees[i];
        int idx = 0; // 배울 수 있는 스킬 중 가장 먼저 배워야 하는 스킬 인덱스
        bool is_possible = true; // 가능한 스킬트리인지 여부
        for (int j = 0; j < cur_skill.length(); j++) { // 스킬트리 문자열을 하나씩 검사
            if (skill.find(cur_skill[j]) != string::npos) { // 스킬트리에 있는 스킬인 경우
                if (cur_skill[j] == skill[idx]) { // 현재 배울 수 있는 스킬인 경우
                    idx++; // 다음 스킬 배울 수 있도록 인덱스 증가
                }
                else { // 현재 배울 수 없는 스킬인 경우
                    is_possible = false; // 불가능한 스킬트리로 표시
                    break;
                }
            }
        }
        if (is_possible) { // 가능한 스킬트리인 경우
            answer++; // 가능한 스킬트리 개수 증가
        }
    }
    return answer;
}