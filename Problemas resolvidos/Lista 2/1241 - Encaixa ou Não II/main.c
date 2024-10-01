#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n, i, j, k, l, aux, flag;
  char x[1000];
  char y[1000];
  char c;
  
  for(i = 0; i < 1000; i++){
    x[i] = 'x';
    y[i] = 'y';
  }
  
  scanf("%d", &n);
  
  getchar(); // consome o '\n' no buffer
  
  for(i = 0; i < n; i++){
    j = 0;
    while(1){
      c = getchar();
      
      if(c != ' '){
        x[j] = c;
        
        j++;
      }else break;
    }
    
    k = 0;
    while(1){
      c = getchar();
      
      if(c != '\n' && c != EOF){
        y[k] = c;
        
        k++;
      }else break;
    }
    
    aux = 0;
    flag = 0;
    if(j >= k){
      for(l = (j - k); l < j; l++){
        if(x[l] != y[aux]){
          //printf("%c != %c\n", x[l], y[aux]);
        
          flag++;
        }else{
          //printf("%c == %c\n", x[l], y[aux]);
        }
        
        aux++;
      }
    }else flag++;
    
    if(flag == 0){
      printf("encaixa\n");
    }else printf("nao encaixa\n");
    
    /*for(l = 0; l < j; l++)printf("%c", x[l]);
    printf(" ");
    for(l = 0; l < k; l++)printf("%c", y[l]);
    printf("\n\n");*/
  }
  
  return 0;
}
