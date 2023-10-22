
#include <stdio.h>
main()
{
    int s1, d1, s2, d2, s3, d3, car=0;
    scanf("%d%d%d%d%d%d", &s1, &d1, &s2, &d2, &s3, &d3);
    if (s1==s2==s3){
        car=3;
    }
    else if(((s1<=s2&&s2<d1)||(s2<s1&&s1<=d2))&&((s1<=s3&&s3<d1)||(s3<s1&&s3<=d3))&&((s3<=s2&&s2<d3)||(s1<s3&&s3<=d1))){
    car+=3;
    }
    else if(((s1<=s2&&s2<d1)||(s2<s1&&s1<=d2))&&((s1<=s3&&s3<d1)||(s3<s1&&s1<=d3))){
        car+=2;
    }
    else if(((s1<=s3&&s3<d1)||(s3<s1&&s1<=d3))&&((s3<=s2&&s2<d3)||(s1<s3&&s3<=d1))){
        car+=2;
    }
    else if(((s3<=s2&&s2<d3)||(s1<s3&&s3<=d1))&&((s1<=s2&&s2<d1)||(s2<s1&&s1<=d2))){
        car+=2;
    }
    else if((s1<=s2&&s2<d1)||(s2<s1&&s1<=d2)){
        car++;
    }
    else if((s1<=s3&&s3<d1)||(s3<s1&&s1<=d3)){
        car++;
    }
    else if((s3<=s2&&s2<d3)||(s1<s3&&s3<=d1)){
        car++;
    }
    else{
        car=+1;
    }
    printf("%d\n", car);
}
