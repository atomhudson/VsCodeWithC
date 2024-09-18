#include<stdio.h>
typedef struct vector{ int x; int y;} vector;
vector calSum(vector v1,vector v2, vector sum);
int main() {
    vector v1 = {5,10};
    vector v2 = {3,7};
    vector sum = {0};
    sum = calSum(v1,v2,sum);
    printf("sum of X vector : %d\n",sum.x);
    printf("sum of Y vector : %d\n",sum.y);
    return 0;
}
vector calSum(vector v1,vector v2, vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;    
    return sum;
}