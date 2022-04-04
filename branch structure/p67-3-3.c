#include <stdio.h>

int main()
{
    /*
      p67-3-3
      Taxi fare
    */
    double km;
    int min;
    double pay = 0.0;
    printf("Enter km,min\n");
    scanf("%lf %d",&km,&min);

    if(min == 0){
        pay = 0.0;
    }else if(min >0 && min<=5){
        pay = 2.0;
    }else{       
        pay = min/5.0*2.0;
    }

    if(km>0 && km<=3.0){
        pay += 10;
    }else if(km>3.0 && km<=10.0){
        pay += 10 + (10-3)*2.0;
    }else if(km>10.0){
        pay += 10 + (10-3)*2.0 + (km-10)*3.0;
    }

    printf("pay=%.0f\n",pay);
    return 0;
}