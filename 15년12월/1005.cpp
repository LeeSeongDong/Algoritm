#include <stdio.h>
#include <queue>
using namespace std;

int v[1000][1000];
int vc[1000];
int vtc[1000];

int main()
{
	int tc;
	scanf_s("%d", &tc);
	for (int t = 0; t < tc; ++t)
	{
		int vn, e;
		scanf_s("%d%d", &vn, &e);

		//vertex의 비용
		for (int i = 0; i < vn; ++i)
		{
			int temp;
			scanf_s("%d", &temp);
			vc[i] = temp;
			vtc[i] = temp;
		}

		int indegree[1000] = { 0 };
		int outdegree[1000] = { 0 };
		//간선표시
		for (int i = 0; i < e; ++i)
		{
			int x, y;
			scanf_s("%d%d", &x, &y);
			v[x - 1][outdegree[x - 1]] = y - 1;
			outdegree[x - 1]++;
			indegree[y - 1]++;
		}

		int w;
		scanf_s("%d", &w);
		queue<int> q;

		for (int i = 0; i < vn; ++i)
		{
			if (indegree[i] == 0)
			{
				q.push(i);
			}
		}

		while (!q.empty())
		{
			int i = q.front();
			q.pop();
			for (int j = 0; j < outdegree[i]; ++j)
			{
				int temp = vc[i] + vtc[v[i][j]];
				--indegree[v[i][j]];
				if (vc[v[i][j]] < temp)
				{
					vc[v[i][j]] = temp;
				}

				if (indegree[v[i][j]] == 0)
				{
					q.push(v[i][j]);
				}
			}
		}

		printf("%d\n", vc[w - 1]);
	}

	return 0;
}