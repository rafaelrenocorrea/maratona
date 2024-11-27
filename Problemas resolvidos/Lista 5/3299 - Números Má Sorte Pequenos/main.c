#include <stdio.h>
#include <string.h>

int main(void){
  char num[19];
  
  scanf(" %[^\n]", num);
  
  if(strstr(num, "13")){
    printf("%s es de Mala Suerte\n", num);
  }else{
    printf("%s NO es de Mala Suerte\n", num);
  }

  return 0;
}
