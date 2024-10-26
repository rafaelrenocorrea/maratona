#include <stdio.h>

int main(void){
  int n, j;
  
  scanf("%d", &n);
  
  j = 1;
  for(int i = 0; i < n; i++){
    while(j % 4 != 0){
      printf("%d ", j);
      
      j++;
    }
    
    printf("PUM\n");
    
    j++;
  }

  return 0;
}
