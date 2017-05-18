#include <stdio.h>
#include <math.h>

int main(void){

  int a,b,c,d;

  printf("等比数列の一般項を求める\n初項を入力\n");
  scanf("%d",&a);
  printf("公比を入力\n");
  scanf("%d",&b);
  printf("何項目の値を求めるか入力\n");
  scanf("%d",&c);

  printf("求められる一般項の式は\n%d*%d^(%d-1)\n",a,b,c);
 
  d = (int)a*pow(b,c-1);  // 等比数列の一般項の公式

  printf("第%d項目の値は\n%d\n",c,d);

  return 0;
}
