#include <stdio.h>

int main(void){

  int a,b,c,d;

  printf("等差数列の一般項を求める\n\n");
  printf("初項を入力\n");
  scanf("%d",&a);
  printf("公差を入力\n");
  scanf("%d",&b);
  printf("何項目の数を求めるか入力\n");
  scanf("%d",&c);

  printf("求められる一般項の式は\n%d+(%d-1)*%d\n",a,c,b);

  d = a+(c-1)*b;  // 等差数列の一般項の公式

  printf("第%d項目の値は\n%d\n",c,d);

  return 0;
} 
