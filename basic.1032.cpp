这道题 ，第一次做错了 半天不知道错在哪里
后来仔细看晴神笔记，原来是定义的数组没有初始化，这一点一定要记住


#include<cstdio>
const int maxn=100001;
int main()
{
    int n,k,school[maxn]={0},score,Max=-1,m;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&k,&score);
        school[k]+=score;
    }
    for(int i=1;i<=n;i++)
    {
        if(school[i]>Max){
            Max=school[i];
            m=i;
        }
    }
    printf("%d %d",m,Max);
    return 0;
}
