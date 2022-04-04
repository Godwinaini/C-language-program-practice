#include <stdio.h>

int main()
{
    /*
      p67-3-4
      Statistics of student grades
    */
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    int source;
    for(int i=1;i<=n;i++){
      scanf("%d",&source);
      switch(source/ss10){
        case 10:
        case 9:
        printf("A\n");
        break;
        case 8:
        printf("B\n");
        break;
        case 7:
        printf("C\n");
        break;
        case 6:
        printf("D\n");
        break;
        default:
        printf("E\n");
        break;
      }
    }
    

    
    return 0;
}