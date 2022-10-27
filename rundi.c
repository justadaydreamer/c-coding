//เทสต์มีเดียแลบ
#include <stdio.h>


int main()
{
    int numb, calc , sum , sub , multi , divi, n ;
    printf("The 16 Base Binary Calculator :\n");
    printf("Calculated Program\n");
    printf("Addition Programming : 1 \n");
    printf("Subtraction Prgramming : 2 \n");
    printf("Mutiply Programming : 3\n");
    printf("Division Programming : 4\n");
    printf("Choose program to following :");
    scanf("%d", &n);
    printf("Add First Number :\n");
    scanf("%x", &numb);
    printf("Add Second Number :\n");
    scanf("%x", &calc);
    sum = numb + calc;
    sub = numb - calc;
    multi = numb * calc;
    divi = numb / calc;
   
    if (n == 1)
    {
      printf("Sum : %d\n", sum);
      sum = sum+sum;   
    }
    if (n == 2)
    {
      printf("Sub : %d\n", sub);
      sub = sub-sub;
    }
     if (n == 3)
    {
     printf("Multi : %d\n", multi);
     multi = multi*multi; 
    }
    if (n == 4)
    {
     printf("Divi : %d\n", divi);
     divi = numb/calc; 
    } 
    return 0;
}