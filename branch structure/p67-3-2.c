#include <stdio.h>

int main()
{
    /*
      p67-3-2
      Speeding fine
    */
    int v;
    printf("Enter v\n");
    scanf("%d",&v);

    int speed10 = 110;
    int speed50 = 150;
    if(v>=speed10 && v<speed50){
        printf("Fine 200\n");
    }else if(v>=speed50){
        printf("Revocation of driver's license\n");
    }else{
        printf("Let's go\n");
    }
    return 0;
}
