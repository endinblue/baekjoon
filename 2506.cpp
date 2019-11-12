#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int result = 0;
	int cnt = 0;
	int i;
	int arr[101];
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			cnt = 0;
		}
		else if (arr[i] == 1)
		{
			cnt++;
			result = result + cnt;
		}
	}
	cout << result;
}