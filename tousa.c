/* MIT License

Copyright (c) 2017 yamashita9

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
