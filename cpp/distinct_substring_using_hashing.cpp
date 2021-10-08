#include <bits/stdc++.h>
typedef long long int ll;
#define M 1000000007
using namespace std;

ll count_distinct_substrings(string s)
{
    set<ll> st;

    for (ll i = 0; i < s.size(); i++)
    {
        ll hash = 0;
        ll pr = 1;
        for (ll j = i; j < s.size(); j++)
        {
            hash = (hash + ((s[j] - 'a' + 1) * pr) % M) % M;
            pr = (pr * 31) % M;
            st.insert(hash);
        }
    }

    return st.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << count_distinct_substrings(s) << endl;

    return 0;
}