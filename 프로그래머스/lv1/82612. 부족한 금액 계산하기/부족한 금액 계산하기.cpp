using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long charge = 0;
    for(int i=1; i<=count; i++)
        charge += price*i;
    answer = charge - money;
    if(answer <= 0)
        answer = 0;
    return answer;
}