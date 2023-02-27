/*#include <string>
#include <vector>

using namespace std;

unsigned long long int factorial_up(int a, int b){
    if(a<=b)
        return 1;
    else
        return a*factorial_up(a-1, b);
}

unsigned long long int factorial_down(int a){
    if(a<=1)
        return 1;
    else
        return a*factorial_down(a-1);
}

unsigned long long int solution(int balls, int share) {
    unsigned long long int answer = 0;
    unsigned long long int a, b = 0;
    
    if(balls-share > share)
        share = balls - share;
    
    a = factorial_up(balls, share);
    b = factorial_down(balls-share);
    //c = factorial(share);
    //answer = a/(b*c);
    answer = a/b;
    return answer;
}*/
#include <string>
#include <vector>
#include <numeric>
using namespace std;

__int128 solution(int balls, int share) {
  auto v = vector<__int128>(balls - (share - 1));
  v[0] = 1;
  for (__int128 i = 0; i < share; ++i) {
    for (__int128 j = 1; j < (__int128) v.size(); ++j) {
      v[j] += v[j - 1];
    }
  }
  return accumulate(v.begin(), v.end(), (__int128) 0);
}