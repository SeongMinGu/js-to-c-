#include <iostream>
#include <stdio.h>

using namespace std;

int solution(int price, int money, int count)
{
	int required = 0;
	for (int i = 1; i <= count; i++)
	{
		required = required + (price * i);
	}
	int answer = required - money;
	if (answer <= 0) {
		return 0
	}
	cout << answer << endl;
	return answer;
}
int main(void)
{
	int price, money, count;
	cin >> price;
		cin >> money;
	cin >> count;
	solutino(price, money, count);
	return 0;
}