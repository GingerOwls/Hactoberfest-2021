#include <bits/stdc++.h>
#include <sstream>
#define ll long long int
#define endl "\n"
#define f(i, a, b) for (ll i = a; i < b; ++i)
#define fr(i, a, b) for (ll i = a; i >= b; --i)
#define pb push_back
#define pp pop_back
using namespace std;
const ll mex = 1e5 + 5;
ll mod = 1e9 + 7;
vector<ll> v[mex];
ll vis[mex];
ll dis[mex];
ll col[mex];

bool dfs(ll n, ll c) //Colour of the node is c either 0 or 1
{
    vis[n] = 1;
    col[n] = c;

    for (auto child : v[n])
    {
        if (vis[child] == 0)
        {
            if (dfs(child, c ^ 1) == false) //c^1 to reverse the colour
            {
                return false;
            }
        }
        else if (col[n] == col[child])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}