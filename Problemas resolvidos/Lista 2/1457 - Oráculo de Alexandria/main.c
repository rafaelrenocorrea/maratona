#include <stdio.h>

int main(void){
  long long int res;
  int t, n, k, j;
  char c;
  
  scanf("%d", &t);
  
  for(int i = 0; i < t; i++){
    scanf("%d", &n);
    
    k = 0;
    while(1){
      c = getchar();
      
      if(c == '!'){
        k++;
      }else break;
    }
    
    res = 1;
    j = 0;
    while((n - (j * k)) >= 1){
      res *= (n - (j * k));
      j++;
    }
    
    printf("%lld\n", res);
  }

  return 0;
}
