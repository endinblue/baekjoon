#pragma warning(disable : 4996)
#include <algorithm>
#include <cstdio>
#include <queue>

using namespace std;

bool visit[101][101];
bool arr[101][101];
int sero, garo;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
queue <pair<pair<int, int>,int>> q;


int bfs() {
	q.push(make_pair(make_pair(0, 0), 1));
	visit[0][0] = true;
	
	while (!q.empty()) {
		pair<pair<int, int>,int> now = q.front();
		q.pop();

		int currentx = now.first.first;
		int currenty = now.first.second;
		int dis = now.second;
		

		if (currentx == garo-1 && currenty == sero-1)
			return dis;

	
		for (int i = 0; i < 4; i++) {
			int nextx = currentx + dx[i];
			int nexty = currenty + dy[i];
			
			if (nextx >= 0 && nexty >= 0 && nextx < garo && nexty < sero && (visit[nextx][nexty] == false) && (arr[nexty][nextx] == 1)) {

				q.push(make_pair(make_pair(nextx, nexty), dis + 1));
				visit[nextx][nexty] = true;
			}
				
		
		}
	
	}
	return bfs();
}


int main() {

	
	scanf("%d %d", &sero, &garo);
	
	



	for (int i = 0; i < sero; i++) {
		for (int j = 0; j < garo; j++) {
		
			scanf("%1d", &arr[i][j]);
		}
	}

	

	
	printf("%d", bfs());

	return 0;

	








}