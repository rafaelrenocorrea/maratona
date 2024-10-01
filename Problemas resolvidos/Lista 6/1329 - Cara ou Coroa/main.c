#include <stdio.h>

int main(void){
    int mary, john;
    int n, r;
    
    while(1){
        scanf("%d", &n);
        if(n == 0){
            break;
        }

        mary = 0;
        john = 0;

        for(int i = 0; i < n; i++){
            scanf("%d", &r);

            switch(r){
                case 0:
                    mary++;

                    break;

                case 1:
                    john++;

                    break;
            }
        }

        printf("Mary won %d times and John won %d times\n", mary, john);
    }

    return 0;
}