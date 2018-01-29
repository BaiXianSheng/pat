这道题，花了我好久的时间，老是不对，结果你猜怎么着，就是一个小小的double
double a4就不对，按照晴神的强制类型转换就对了（double）c/b
好奇怪，我以后看的话如果能知道为什么还是顺便写下来吧，以后还是不会的话，赶紧百度问别人吧

#include<cstdio>
int main()
{
    int n,m,b=0,c=0,a1=0,a2=0,a3=0,a5=0;
    int b1=0,b2=0,b3=0,b4=0,b5=0;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
    if(m%5==0)
    {
        if(m%2==0) {a1+=m; b1++;}

    }
    else if(m%5==1)
    {
        if(b2%2==0)a2+=m;
        else a2-=m; b2++;
    }
    else if(m%5==2)
        {b3++;a3++;}
    else if(m%5==3) {
            b4++;
            c+=m;
    b++;
    }
    else
    {

        if(m>a5) a5=m; b5++;
    }
    }


    if (b1==0) printf("N ");
      else  printf("%d ",a1);
      if (b2==0) printf("N ");
     else printf("%d ",a2);
    if (b3==0) printf("N ");
     else  printf("%d ",a3);
    if (b4==0) printf("N ");
     else printf("%.1f ",(double)c/b);
   if (b5==0) printf("N");
    else printf("%d",a5);


    return 0;

}
