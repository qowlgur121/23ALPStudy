#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int main(void)
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	int N;
	std::cin >> N;

	std::vector<int> v(N);
	for (int i = 0; i < N; i++)
	{
		std::cin >> v[i];
	}

/*
예제 입력 1 
5
-99 -2 -1 4 98
예제 출력 1 
-99 98
예제 입력 2 
4
-100 -2 -1 103
예제 출력 2 
-2 -1	
*/

	std::sort(v.begin(), v.end());	//입력 받은 용액들을 오름차순으로 정렬한다.

	int i = 0;		//배열의 가장 앞, 배열의 가장 뒤에서부터 각각 포인터 변수를 이용해서 합을 구할거라.
	int j = v.size() - 1;
	int total = INT_MAX;
	std::pair<int, int> result;

	while (i < j)
	{

		/*
		i와 j는 배열의 양 끝에서 시작하여, a와 b에 각각 v[i]와 v[j]를 할당한다.
		글고 두 수의 합인 a+b의 절대값이 현재까지 찾은 가장 작은 합인 total보다 작으면 
		total값을 a+b의 절대값으로 갱신하고,
		result.first와 result.second에 현재 a와 b를 할당한다.

		이러면 while문이 끝날 때 result.first와 result.second에는 배열 v에서 가장 0에 가까운 두 수가 할당되어 있다.
		
		*/
		int a = v[i];
		int b = v[j];

		if (abs(a + b) < total)
		{
			total = abs(a + b);	//a와 b의 합이 0에 가장 가까운 값을 구하고, 그 값을 total에 저장한다.

			result.first = v[i];	
			result.second = v[j];
		}

		if (a + b < 0)
		{
			i++;	//a와 b의 합이 음수인 경우, a와 b 중 하나는 음수일 가능성이 높다. 이 경우, a와 b를 더하면 더욱 음수가 되므로, a와 b의 절대값을 줄이기 위해서는 
					//i를 증가시켜서 그 다음으로 작은 수를 더한다.
		}
		else
		{
			j--;	//위와 반대 상황
		}
	}

	std::cout << result.first << " " << result.second << "\n";

	return 0;
}
