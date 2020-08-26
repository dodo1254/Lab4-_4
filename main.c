#include <stdio.h>

int main(void) {
  int cent;
  float L1,L2,height,sumL,area;
  printf("Enter L1 = ");
  scanf(" %f",&L1);
  printf("Enter L2 = ");
  scanf(" %f",&L2);
  printf("Enter height = ");
  scanf("%f",&height);
  cent = (L2/L1)*100;
  printf("L2 = %d %  \n",cent);
  sumL = L1 + L2 ;
  if (cent>=40){
  area = 0.5 * height * sumL;
  printf(" area = %0.2f  \n ",area);
  }
  return 0;
}