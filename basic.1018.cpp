1018题最普通的做法也是最笨的做法
因为是初学对其他的做法不是很熟练，只能以最麻烦的if..else来写
但是底下那个被注释掉的部分始终在测试点失败 改成下面的句子就对了
以我现在的水平还看不出来我是怎么错的
留着以后分析吧
明天最好自己写出按照高级点写法做出来的这道题
话说这道题也是开启我GitHub之路的第一题，好好记住吧...恩 先搞懂了再说吧



#include<cstdio>
int main()
{
    int n,s=0,p=0,f=0,j1=0,c1=0,b1=0,j2=0,c2=0,b2=0;
    char m,k,c='C',j='J',b='B',x,y,q;
    scanf("%d",&n);
    getchar();
    for (int i=0;i<n;i++)
    {
      scanf("%c %c",&m,&k);
      getchar();
      if(m==j&&k==j) p++;
      else if(m==j&&k==c) {f++;c2++;}
      else if(m==j&&k==b) {s++;j1++;}

      else if(m==c&&k==j) {s++; c1++;}
      else if(m==c&&k==c) p++;
      else if(m==c&&k==b) {f++;b2++;}

      else if(m==b&&k==j) {f++;j2++;}
      else if(m==b&&k==c) {s++;b1++;}
      else  p++;


    }
    printf("%d %d %d\n",s,p,f);
    printf("%d %d %d\n",f,p,s);
//    if(b1>=c1&&b1>=j1) printf("B ");
//    if(c1>b1&&c1>=j1) printf("C ");
//    if(j1>c1&&j1>b1) printf("J ");
//
//    if(b2<=c2&&b2<=j2) printf("B");
//    if(c2<b1&&c2<=j2) printf("C");
//    if(j2<c2&&j2<b2) printf("J");
printf("%c %c",((c1>b1&&c1>=j1)?'C':(b1>=j1?'B':'J')),(c2>b2&&c2>=j2)?'C':(b2>=j2?'B':'J'));


    return 0;
}
