#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)
#define clr(_arr,_val) memset(_arr,_val,sizeof(_arr));

int a,b,k,n,m;

ll f[1010][1010];

int main()
{
    scanf("%d %d %d %d %d\n",&a,&b,&k,&n,&m);
    f[1][1]=1;
    fo(i,2,k+1)
    {
        fo(j,1,i)
        {
            f[i][j]=(f[i-1][j-1]*b+f[i-1][j]*a)%10007;
        }
    }
    printf("%lld",f[k+1][m+1]);
    return 0;
}