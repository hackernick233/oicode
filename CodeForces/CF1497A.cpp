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

int T;
int n;
int a[110],t[110];

void solve()
{
    int num=n;
    while(num--)
    {
        fo(i,0,100)
        {
            if(t[i])
            {
                t[i]--;
                printf("%d ",i);
            }
        }
    }
    printf("\n");
    return ;
}

int main()
{
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        clr(t,0);
        fo(i,1,n)
        {
            scanf("%d",&a[i]);
            t[a[i]]++;
        }
        solve();
    }
    

    return 0;
}
