这道题，还算简单，一遍过
附上代码
#include<cstdio>
int main()
{
    int n,a,b,c,d,n1=0,n2=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a+c==b&&a+c!=d) n2++;
        if(a+c==d&&a+c!=b) n1++;
    }
    printf("%d %d",n1,n2);

    return 0;

}
