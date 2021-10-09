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
    int m = 1000007;
    // form B from the elements of A, that can be used as many times you want
    int n;cin>>n;
    vector<int>A(n);
    for(auto &i: A)cin>>i;
    int B;cin>>B;
    
    int dp[B+1];
    memset(dp,0,sizeof(dp));
    
    dp[0]=1;
    
    for(int i=0; i<n; i++){
        for(int j=A[i]; j<=B; j++){
            dp[j] += dp[j-A[i]];
        }
    }
    cout<< dp[B]%m;

}
