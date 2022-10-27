#include <stdio.h>

int main(){
    printf("The Physic Calculator :\n");
    double x1 ,x2 ,t1, t2 ,v;
    printf("Distance[First] :");
    scanf("%lf", &x1);
    printf("Distance[End]:");
    scanf("%lf", &x2);
    printf("Time[First] :");
    scanf("%lf" , &t1);
    printf("Time[End] :");
    scanf("%lf", &t2);
    v = (x2-x1)/(t2-t1);

    printf("Result is : %lf", v); 
    return 0;
}