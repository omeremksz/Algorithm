#include <bits/stdc++.h>
using namespace std;

#define N 1000003
#define inf 1000000009
typedef long long ll;

int lca[N][22],level[N],s;
vector<int> Tree[N];

void dfs(int x,int ata)
{
	s++;

	lca[x][0]=ata;
	level[x]=s;

	for(int i=0;i<Tree[x].size();i++)
		if(Tree[x][i]!=ata)
			dfs(Tree[x][i],x);

	s--;
}
int LCA(int x,int y)
{
	if(level[y]>level[x])
		swap(x,y);

	int t = level[x]-level[y];

	for(int j=20;j>=0;j--)
		if((1<<j)<=t)
		{
			x=lca[x][j];
			t-=(1<<j);
		}

	if(x==y)
		return x;

	for(int j=20;j>=0;j--)
		if(lca[x][j]!=lca[y][j])
		{
			x=lca[x][j];
			y=lca[y][j];
		}

	return lca[y][0];

}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		Tree[x].push_back(y);
		Tree[y].push_back(x);
	}
	dfs(1,0);

	for(int j=1;j<22;j++)
		for(int i=1;i<=n;i++)
			lca[i][j]=lca[lca[i][j-1]][j-1];

	int m;
	cin>>m;

	while(m--)
	{
		int l,r;
		cin>>l>>r;

		cout<<LCA(l,r)<<endl;
	}
}
