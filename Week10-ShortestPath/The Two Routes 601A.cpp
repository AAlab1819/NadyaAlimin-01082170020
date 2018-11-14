#include <bits/stdc++.h>
using namespace std;

const int maxn = 424;
int n, m;
int g[maxn][maxn];
int d[maxn];
int bfs(int v)
{
	memset(d + 2, -1, (n - 1) * sizeof(int));
	queue<int> q;
	q.push(1);
	while (q.size() && d[n] == -1) {
		int x = q.front();
		q.pop();
		for (int i = 2; i <= n; ++i)
			if (g[x][i] == v && d[i] == -1) {
				d[i] = d[x] + 1;
				q.push(i);
			}
	}
	return d[n];
}
int main()
{
	cin>>n>>m;
	while (m--) {
		int u, v;
		cin>>u>>v;
		g[u][v] = g[v][u] = 1;
	}
	cout<<bfs(1-g[1][n]);
}
