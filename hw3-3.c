#include <stdio.h>
main()
{
    int a, b;
    scanf("%d%d", &a ,&b);
    int aa=a/1000+(a%1000)/100+(a%100)/10+(a%10);
    int bb=b/1000+(b%1000)/100+(b%100)/10+(b%10);
    if(aa==bb){
       if(a>b){
        printf("%d\n",b);
       }
       else if(a<b){
        printf("%d\n",a);
       }
    }
    else if(aa!=bb){
       if(aa>bb){
        printf("%d\n",b);
       }
       else if(aa<bb){
        printf("%d\n",a);
       }
    }

}
