#include <stdio.h>

int main(void){
    int i, j, k;
    int aux;
    int fibonacci[100000];
    int fibonot[100000];

    fibonacci[0] = 1;
    fibonacci[1] = 1;

    i = 2; // primeiro índice de fibonacci
    j = 0; // primeiro índice de fibonot

    scanf("%d", &k);

    while(j < k){
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];

        for(aux = (fibonacci[i - 1] + 1); aux < fibonacci[i]; aux++){
            fibonot[j] = aux;

            j++;
            if(j == k){
                break;
            }
        }
        
        i++;
    }

    printf("%d\n", fibonot[k - 1]);

    return 0;
}