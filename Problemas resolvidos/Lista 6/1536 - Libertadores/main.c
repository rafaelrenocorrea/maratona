#include <stdio.h>

int main(void){
    int n;
    int m, v;
    int time1, time2, flag;
    int maior;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        time1 = 0;
        time2 = 0;

        scanf("%d x %d\n", &m, &v);

        time1 += m;
        time2 += v;
        maior = v;
        flag = 2;

        scanf("%d x %d\n", &m, &v);

        time2 += m;
        time1 += v;
        if(v > maior){
            maior = v;

            flag = 1;
        }else if(v == maior){
            flag = 0;
        }

        if(time1 > time2){
            printf("Time 1\n");
        }else if(time2 > time1){
            printf("Time 2\n");
        }else{
            switch(flag){
                case 1:
                    printf("Time 1\n");

                    break;

                case 2:
                    printf("Time 2\n");

                    break;

                case 0:
                    printf("Penaltis\n");

                    break;
            }
        }
    }

    return 0;
}