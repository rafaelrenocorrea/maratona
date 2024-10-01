#include <stdio.h>
#include <string.h>

int main(void){
  int n, cifra;
  char str[51];
  
  scanf("%d", &n);
  
  for(int i = 0; i < n; i++){
    scanf(" %[^\n]", str);
    
    scanf("%d", &cifra);
    
    for(int j = 0; j < strlen(str); j++){
      str[j] -= cifra;
      
      if(str[j] < 'A'){
        str[j] = 'Z' - ('A' - str[j]) + 1;
      }
    }
    
    printf("%s\n", str);
  }

  return 0;
}
