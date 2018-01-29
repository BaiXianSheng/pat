这题还是挺有意思的，做错了
一开始因为题目有个四舍五入，所以一脸懵逼，定义了double类型，但是依然还是做错了，用了用round也用不对
下面是我的错误答案
#include<cstdio>
#include<math.h>
int main()
{
    int c1,c2,h,m,s,n;
    double u;
    scanf("%d %d",&c1,&c2);
    int x=c2-c1;
    u=round(x/100);
    n=u;
    h=n/3600;
    m=(n-3600*h)/60;
    s=n-3600*h-60*m;
    printf("%d:%d:%d",h,m,s);
    return 0;
}
恩 ，是比较可笑哈，连时间换算的方式也做错了
有时候答案老是差一秒钟是让人很崩溃的事情
现在列上，参考晴神的答案做出来的题
#include<cstdio>
#include<math.h>
int main()
{
    int c1,c2,h,m,s,n,ans;
    scanf("%d %d",&c1,&c2);
    int x=c2-c1;
    if(x%100>=50)
        n=x/100+1;
        else n=x/100;
    h=n/3600;
    m=n%3600/60;
    s=n%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}

那个if很精髓 可以以后看一下
