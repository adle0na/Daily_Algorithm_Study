#include <iostream>
#define ll long long
#include <map>

using namespace std;

ll P, Q;

map<ll, ll> cache;

ll solve(ll n)
{
    if(n == 0) return 1;

    ll& ret = cache[n];
    
    if(ret != 0) return ret;

    return ret = solve(n / P) + solve(n / Q);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll N;

    cin >> N >> P >> Q;

    cout << solve(N) << endl;
}