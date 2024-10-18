#include <stdio.h>
void soma(int *a,int *b,int *result){
  *result=*a+*b;
}
int main(){
  int a,b,result=0;
  scanf("%d%d",&a,&b);
  soma(&a,&b,&result);
  printf("%d\n",result);
  return 0;
}