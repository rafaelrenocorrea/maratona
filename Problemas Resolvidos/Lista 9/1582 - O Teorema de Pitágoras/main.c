#include <stdio.h>

int mdc(int x, int y, int z){
    int menor = x;
    if(y < menor)menor = y;
    if(z < menor)menor = z;

    while(
       x % menor != 0 ||
       y % menor != 0 ||
       z % menor != 0
      )menor--;

    return menor;
}

int main(void){
    int x, y, z;

    while(scanf("%d %d %d", &x, &y, &z) != EOF){
        if(
           x * x + y * y == z * z ||
           x * x + z * z == y * y ||
           z * z + y * y == x * x
          ){
            if(mdc(x, y, z) == 1){
                printf("tripla pitagorica primitiva\n");
            }else printf("tripla pitagorica\n");
        }else printf("tripla\n");
    }

    return 0;
}