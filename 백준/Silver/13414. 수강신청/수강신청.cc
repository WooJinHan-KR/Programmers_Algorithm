#include<iostream>
#include<unordered_map>
#include<list>
#include<iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int k, l;
	cin >> k >> l;
	list<int> lst;
	unordered_map<int, list<int>::iterator> um;
	for (int i = 0; i < l; ++i) {
		int x;
		cin >> x;
		auto iter = um.find(x);
		if (iter != um.end())
			lst.erase(iter->second);
		lst.push_back(x);
		um[x] = prev(lst.end(), 1);
	}
	auto iter = lst.begin();
	for (int i = 0; iter != lst.end() && i != k; ++i, ++iter)
		cout << setw(8) << setfill('0') << *iter << '\n';
}