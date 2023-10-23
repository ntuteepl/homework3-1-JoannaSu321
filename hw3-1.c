#include <stdio.h>
main()
{
    int n ,a;
    scanf("%d", &n);
    for(int i=2; i<n; i++){
        if(n%i==0){
            a=1;
            break;
        }
        else if(n%i!=0){
            a=0;
        }
    }
    if(a==1){
        printf("NO");
    }
    else if (a==0){
         printf("YES");
    }
}
