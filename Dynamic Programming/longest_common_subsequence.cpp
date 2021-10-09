#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define se second
#define mp make_pair
#define M 1000000007

int main()
{

	ios::sync_with_stdio(0);
    cin.tie(0);

	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt", "w", stdout);
	// #endif

	int t;cin>>t;
	while(t--){
        string A, B;
        cin>>A>>B;
        int n = A.length();
        int m = B.length();
        int dp[10006][10006];
        for (int i = 0; i < A.length(); i++)
        {
            dp[i][0] = 0;
        }
        for (int i = 0; i < B.length(); i++)
        {
            dp[0][i] = 0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (A[i - 1] == B[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
                }
            }
        }
        cout<<dp[n][m]<<"\n";
    }
}
