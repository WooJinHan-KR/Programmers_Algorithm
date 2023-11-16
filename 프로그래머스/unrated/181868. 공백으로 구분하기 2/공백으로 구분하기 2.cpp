#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string token;
	stringstream ss(my_string);
	while (ss >> token)
		answer.push_back(token);

    return answer;
}