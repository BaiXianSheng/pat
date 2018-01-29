这道题，没做出来
看了晴神笔记才做出来
思想上连正确的思路都没有想出来
大失败 唉唉
以后再看一定要自己想出来
附上代码
#include<cstdio>
int main()
{
    long long int a,b,n,m;
    scanf("%lld %lld %lld %lld",&a,&b,&n,&m);
    long long pa=0,pb=0;
    while(a!=0)
    {
        if(a%10==b) pa=pa*10+b;
        a/=10;
    }
while(n!=0)
    {
        if(n%10==m) pb=pb*10+m;
        n/=10;
    }
    printf("%lld",pa+pb);
    return 0;
}
