#include<stdio.h>

int GCD(int m, int n);

int main(void){
  int m,n,tmp;
  int i;
  puts("m,nを入力してください");
  scanf("%d%d",&m,&n);
  printf("GCD(%d,%d)=%d\n",m,n,GCD(m,n));
  return 0;
}

int GCD(int m, int n){
  int tmp;
  while(n!=0){
    tmp = m%n;
    m = n;
    n = tmp;
    printf("m=%d,n=%d\n",m,n);
  }
  return m;
}
