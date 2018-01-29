这个非常简单 一遍过

#include<cstdio>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n){
    if(n==1) {printf("%d",i);break;}
    else {
    if(n%2==0) n=n/2;
    else if (n%2!=0) n=(3*n+1)/2;
    i++;
    }
    }
    return 0;
}
