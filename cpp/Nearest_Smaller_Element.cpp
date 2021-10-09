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
    
    // given list of numbers, print nearest smaller elment for each element to the left of array
    int n;cin>>n;
    vector<int>A(n);
    for(auto &i: A)cin>>i;

    reverse(A.begin(), A.end());
    unordered_map <int, int > m;
    stack<int>s;
    s.push(0);
    
    for(int i=1; i<n; i++){
        while(!s.empty() && A[s.top()] > A[i]){
            m[s.top()] = A[i];
            s.pop();
        }
        s.push(i);
    }
    for(int i=0; i<n; i++){
        if(m[i] == 0)A[i] = -1;
        else A[i] = m[i];
    }
    reverse(A.begin(), A.end());
    cout<<"Nearest smaller element for each element is-> \n";
    for(auto i: A)cout<<i<<" ";

}
