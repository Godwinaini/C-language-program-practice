#include <stdio.h>

int main()
{
    /*
      p67-3-1
      Compare size
    */
    int x,y,z;
    printf("Enter num\n");
    scanf("%d %d %d",&x,&y,&z);
    int max,mid,min;
    if(x>y && x>z && y>z){
        max = x;
        mid = y;
        min = z;
    }else if(x>y && x>z && z>y){
        max = x;
        mid = z;
        min = y;
    }else if(y>x && y>z && x>z){
        max = y;
        mid = x;
        min = z;
    }else if(y>x && y>z && x<z){
        max = y;
        mid = z;
        min = x;
    }else if(z>x && z>y && x>y){
        max = z;
        mid = x;
        min = y;
    }else{
        max = z;
        mid = y;
        min = x;
    }
    
        
    printf("min=%d, mid=%d, max=%d\n",min,mid,max);
    return 0;
}