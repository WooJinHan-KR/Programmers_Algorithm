#include <string>
#include <vector>
#include <algorithm>
#include <regex>
#include <iostream>
#include <cctype>


using namespace std;

void removeDuplicates(string &s)
{
    char prev = '.';
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (prev == *it)
        {
            s.erase(it);
            it--;
        }
        else {
            prev = *it;
        }
    }
}

string solution(string new_id) {
    string answer = "";
    
    for (auto i=0; i<new_id.size(); ++i)
        new_id[i] = tolower(new_id[i]);
    new_id = regex_replace(new_id, regex("[^a-z0-9-_.]+"), "");
    new_id = regex_replace(new_id, regex("[.]+"), ".");
    if (new_id[0] == '.') new_id.erase(new_id.begin());
    if(new_id.back() == '.') new_id.erase(new_id.size()-1);
    if(new_id == "") new_id += "a";
    if(new_id.size()>=16) new_id.erase(15, new_id.size()-1);
    if(new_id.back() == '.') new_id.erase(new_id.size()-1);
    if(new_id.size()<=2){
        char a = new_id.back();
        while(new_id.size()<3)
            new_id+=a;
    }
    answer = new_id;
    return answer;
}