#include <stdio.h>
#include <math.h>
int main()
{
    /*
      p67-3-5
      Triangle judgment
    */
    int x1,y1,x2,y2,x3,y3;
    printf("Enable x1,y1\n");
    scanf("%d %d",&x1,&y1);
    printf("Enable x2,y2\n");
    scanf("%d %d",&x2,&y2);
    printf("Enable x3,y3\n");
    scanf("%d %d",&x3,&y3);

    int s = 0;
    double area = 0.0;
    int a = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    int b = sqrt((pow(x3-x2,2))+(pow(y3-y2,2)));
    int c = sqrt((pow(x3-x1,2))+(pow(y3-y1,2)));

    if((a+b>c) && (a+c>b) && (b+c>a)){
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("s=%d, area=%.2f\n",s,area);
    }else{
        printf("Impossible\n");
    }

    return 0;
}