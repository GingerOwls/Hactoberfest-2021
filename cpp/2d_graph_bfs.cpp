#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define fo(i,a,b) for(int i=a ; i<b ; i++)
#define foe(i,a,b) for(int i=a ; i<=b ; i++)
#define endl '\n'
#define ff first
#define ss second
#define MOD 1000000007
ll n,m;
ll dx[]={-1,0,1,0};
ll dy[]={0,1,0,-1};
ll vis[1001][1001];
ll dis[1001][1001];
bool isValid(int x,int y)
{
    if(x<1 || x>n || y<1 || y>m)
    return false;
    if(vis[x][y]==1)
    return false;
    else
    return true;

}
void bfs(int srcX,int srcY)
{
queue<pair<ll,ll>>q;
q.push({srcX,srcY});
dis[srcX][srcY]=0;
vis[srcX][srcY]=1;

while(!q.empty())
{
    int currX=q.front().first;
    int currY=q.front().second;
    q.pop();
    for(ll i=0;i<4;i++)
    {
        if(isValid(currX+dx[i],currY+dy[i]))
        {
            int newX=currX+dx[i];
            int newY=currY+dy[i];
            dis[newX][newY]=dis[currX][currY]+1;
            vis[newX][newY]=1;
            q.push({newX,newY});
        }
    }
}
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    // cin>>t;
     t=1;
    while(t--)
    {
     int x,y;
     cin>>n>>m;
     cin>>x>>y;
     bfs(x,y);   
    }
    
    return 0;
}