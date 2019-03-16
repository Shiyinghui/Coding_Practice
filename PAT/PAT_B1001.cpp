// PAT B1001 by Yinghui On 16th March, 2019 

#include<cstdio>

int main(){
  int n;
  int step = 0;
  scanf("%d", &n);
  while(n != 1){
    if(n % 2 == 0) n = n / 2;
    else n = (3 * n + 1) / 2;
    step += 1;
  }
  printf("%d", step);
  return 0;
}
