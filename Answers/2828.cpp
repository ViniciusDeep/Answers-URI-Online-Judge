/*
Celso Antonio --- May 2018
*/
#include <iostream>
#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

typedef long long int ll;

ll factorial(ll x){
    
    ll fat = 1;
    for (int i = 1; i <= x; i++)
        fat = ((fat % mod) * (i % mod)) % mod;
    return fat;
}

ll extendedEuclid(ll a, ll b, ll *x, ll *y)	{
    ll t, d;
    if (b == 0)	{
        *x = 1; *y = 0; return a;
    }
    d = extendedEuclid(b, a % b, x, y);
    t = *x; *x = *y; *y = t - (a/b)*(*y);
    return d;
}

ll modInverse(ll a, ll n)  {
    ll x, y;
    extendedEuclid(a, n, &x, &y);
    return (x < 0) ? (x + n) : x;
}

int main()
{   
    string s;
    cin >> s;
    
    vector<ll> v(1000, 0);
    
    for(ll i = 0; i < s.size(); i++){
        v[s[i]]++;
    }
    
    ll divi = factorial(s.size()) % mod;
    ll num = 1;
    
    for(int i = 'a'; i <= 'z'; i++){
        if(v[i] != 0)
            num = ((num % mod) * (factorial(v[i]) % mod)) % mod;
    }
    
    num = modInverse(num, mod);
    
    //cout << mult;
    
    ll res = (((divi % mod) * (num % mod)) % mod);
    
    cout << res << endl;
    
    return 0;
}