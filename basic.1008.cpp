这道题呢 也是一道重点题，起码对于现在的我来说还是很重点的
这道题附上第一次做的部分正确的代码
#include<cstdio>
int main()
{
   int n,l,m=0;
   scanf("%d",&n);
   int a[100]={0},b[100]={0};
   scanf("%d",&l);
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(int i=n-l;i<n;i++)
   {
       b[m]=a[i];
   m++;
   }
   for(int i=0;i<n-l;i++)
   {
       b[m]=a[i];
       m++;
   }
   for(int i=0;i<n;i++)
   {
       if(i<n-1)
        printf("%d ",b[i]);
       else printf("%d",b[i]);

    }return 0;

}

现在的做法对数据处理做的不够细致，这个题的思想也是没有想的到
附上晴神的关键的做法，M%N后这道题就ac了
#include<cstdio>
int main()
{
   int n,l,m=0;
   scanf("%d",&n);
   int a[1001]={0},b[1001]={0};
   scanf("%d",&l);
   l=l%n;
   for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
   for(int i=n-l;i<n;i++)
   {
       b[m]=a[i];
   m++;
   }
   for(int i=0;i<n-l;i++)
   {
       b[m]=a[i];
       m++;
   }
   for(int i=0;i<n;i++)
   {
       if(i<n-1)
        printf("%d ",b[i]);
       else printf("%d",b[i]);

    }return 0;

}
