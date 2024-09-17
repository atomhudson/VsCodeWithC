#include<stdio.h>
int main() {
    double a = 1.99999999;
    printf(" %f \n",a); //2.000000 

    double b = 1.99999999;
    printf(" %d \n",b); //-45035996

    double e = (int) 1.99999999;
    printf(" %d \n",e); // 0

    int c = 1.99999999;
    printf(" %f \n",c); //1.000000

    int d = 1.99999999;
    printf(" %d \n",d); // 1
    
    return 0;
}