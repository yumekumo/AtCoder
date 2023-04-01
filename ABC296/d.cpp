#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define debug(x) cerr << #x << " : " << x << endl;
using namespace std;
using ll = long long;

ll n, m;
ll ans = -1;

void binary_search(ll i)
{
    ll left = 1, right = n;
    while (left <= right)
    {
        ll mid = left + (right - left) / 2;
        if (mid * i == m)
        {
            ans = m;
            break;
        }
        else if (mid * i < m)
        {
            left = max(mid, left + 1);
        }
        else
        {
            if (ans == -1)
                ans = mid * i;
            else
                ans = min(mid * i, ans);
            right = min(mid, right - 1);
        }
    }
}

int main()
{
    cin >> n >> m;
    ll m_sqrt = sqrt(m);
    for (ll i = 1; i <= min(n, m_sqrt); i++)
    {
        binary_search(i);
    }
    binary_search(n);
    cout << ans << endl;
}