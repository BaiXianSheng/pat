这道题一开始也做错了
题目给定范围【-2^31,2^31】，int型是【-2^31,2^31-1】，所以需要用到long long
输出也是%lld 所以这题也要记住


#include<cstdio>
int main()
{
    long long int n,m,k,a,b,c;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a+b>c)
            printf("Case #%d: true\n",i);
        else printf("Case #%d: false\n",i);
    }


    return 0;
}
