#include <stdio.h>

int main(void){
  unsigned long long int a, b; // guarda binário como unsigned
  
  while(scanf("%lld %lld", &a, &b) != EOF)printf("%lld\n", a ^ b); // "a"  ou "b" bit a bit
  
  return 0;
}
