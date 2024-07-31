#include <stdio.h>

int main(){

  int n,j= 01;
  printf("please enter vaule for n:");
  scanf("%d",&n);

  do {
      printf("%d",j);
      ++j;

  }while(j<=n);
    return 0;


}
