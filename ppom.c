#include <stdio.h>

int main()
{
  int x, y, ans;
  printf("The First number : ");
  scanf("%d", &x);
  printf("The Second number : ");
  scanf("%d", &y);
  
while (x < y){
  if (x < y)
  {
    x = x+1;
  }
  if (x == 2 || x == 4 || x == 5) 
    {
      y = y - 3;
    }
   x++;
}
 ans = x+y;
 printf("The answer : %d\n", ans);
}
