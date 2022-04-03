#include <stdio.h>

int main()
{
    /*
      p64-3-8 
    */
    int num;
    printf("[1] apples\n");
    printf("[2] pears\n");
    printf("[3] oranges\n");
    printf("[4] grapes\n");
    printf("[0] Exit\n");
    for(int i=1;i<=5;i++){
        scanf("%d",&num);
        if(num == 0){
            break;
        }else{
           switch(num){
            case 1:
            printf("apples=3.00\n");
            break;
            case 2:
            printf("pears=2.50\n");
            break;
            case 3:
            printf("oranges=4.10\n");
            break;
            case 4:
            printf("grapes=10.20\n");
            break;
            default:
            printf("price=0.00\n");
            break;
        } 
        }
        
    }
    return 0;
}

