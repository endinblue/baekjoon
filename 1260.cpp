#pragma warning (disable : 4996)
#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

int visited[1001];
vector<int> graph[1001];
queue<int> que;
stack <int> sta;
int main() {
	int node, edge, num;
	int a, b;

	scanf("%d %d %d", &node, &edge, &num);

	for (int i = 0; i < edge; i++) {
		scanf("%d %d", &a, &b);
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 0; i < node; i++)
		sort(graph[i].begin(), graph[i].end());




	sta.push(num);
	while (!sta.empty()) {
		int temp = sta.top();
		sta.pop();
		if (visited[temp] == 0) {
			for (int i = graph[temp].size() - 1; i >= 0; i--) {
				if (visited[graph[temp][i]] == 0)
					sta.push(graph[temp][i]);
			}
			visited[temp] = 1;
			printf("%d ", temp);
		}
	}
	printf("\n");
	que.push(num);

	while (!que.empty()) {
		int temp = que.front();
		que.pop();
		if (visited[temp] == 1) {
			for (int i = 0; i < graph[temp].size(); i++) {
				if (visited[graph[temp][i]] == 1)
					que.push(graph[temp][i]);
			}
			visited[temp] = 0;
			printf("%d ", temp);
		}
	}

}