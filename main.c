#include<stdio.h>
#include "swap.h"
int main(void){
  int x = 39;
  int y = 89;
  printf("This is my print of the original numbers: x = %d and y = %d\n", x,y);

  // Swap x and y
  swap(x, y);
  printf("This is my print of the swapped numbers: x = %d and y = %d\n", x, y);
  printf("Amazing new feature added in iss53!\n");
  // What a beautiful mess! Lets continue
  
  return 0;
}
