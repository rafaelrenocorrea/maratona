#include <stdio.h>

int main(void){
  int n;
  int x, y;
  char c;
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf("%d%c%d", &x, &c, &y);
    
    if(x == y){
      printf("%d\n", x * y);
    }else if(c >= 65 && c <= 90){
      printf("%d\n", y - x);
    }else if(c >= 97 && c <= 122){
      printf("%d\n", x + y);
    }
  }

  return 0;
}
