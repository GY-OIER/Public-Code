#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1000100;
int a[N],n,ans=0;

int main()
{
    freopen("star.in","r",stdin);
    freopen("star.out","w",stdout);
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    for(int i=1;i<n;i++) ans=max(ans,abs(a[i+1]-a[i]));
    printf("%d.000",ans);
    return 0;
}
