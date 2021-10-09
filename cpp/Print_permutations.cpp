#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define se second
#define mp make_pair
#define M 1000000007

void solve(vector<vector<int>> &ans, vector<int> A, int l, int r){
    if(l == r){
        ans.push_back(A);
        return;
    }
    for(int i=l; i<=r; i++){
        swap(A[i], A[l]);
        solve(ans, A, l+1, r);
        swap(A[i], A[l]);
    }
}

int main()
{

	ios::sync_with_stdio(0);
    cin.tie(0);
    
    // given list of numbers, print all permutatinos
    int n;cin>>n;
    vector<int>a(n);
    for(auto &i: a)cin>>i;

    vector<vector<int>> ans;
    solve(ans,a,0,n-1);
    for(auto row: ans){
        for(auto i: row)cout<<i<<" ";
        cout<<"\n";
    }

}
