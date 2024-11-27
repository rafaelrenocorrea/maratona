#include <stdio.h>
#include <string.h>

int main(void){
  char str[1001];
  int n, aux, qtd;
  int i, j;
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++){
    scanf(" %[^\n]", str);
  
    aux = 0;
    qtd = 0;
    for(j = 0; j < strlen(str); j++){
      if(str[j] == '<'){
        aux++; 
      }else if(str[j] == '>'){
        aux--;
        if(aux >= 0){
          qtd++;
        }else if(aux < 0){
          aux = 0;
        }
      }
    }
    
    printf("%d\n", qtd);
  }

  return 0;
}
