#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

const int INF = 0x3f3f3f3f;

ll a, b, x, y;

void exgcd(ll a, ll b)   //扩展欧几里得算法
{
    if(b == 0)
    {
        x = 1;
        y = 0;
        return ;
    }
    exgcd(b, a%b);
    ll tx = x;
    x = y;
    y = tx - a / b * y;
}

int main()
{
    cin >> a >> b;
    exgcd(a, b);
    x = (x % b + b) % b;
    cout << x;

    return 0;
}