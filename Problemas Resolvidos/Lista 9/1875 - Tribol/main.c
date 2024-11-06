#include <stdio.h>

int maior(int R, int G, int B){
    if(R > G && R > B)return R;
    if(G > R && G > B)return G;
    if(B > R && B > G)return B;

    return 0;
}

int main(void){
    int R, G, B;
    int C, P;
    char M, S;

    scanf("%d", &C);

    for(int i = 0; i < C; i++){
        R = 0; G = 0; B = 0;

        scanf("%d", &P);

        for(int j = 0; j < P; j++){
            scanf(" %c %c", &M, &S);

            switch(M){
                case 'R':
                    switch(S){
                        case 'G':
                            R += 2;

                            break;

                        case 'B':
                            R++;

                            break;
                    }

                    break;

                case 'G':
                    switch(S){
                        case 'R':
                            G++;

                            break;

                        case 'B':
                            G += 2;

                            break;
                    }

                    break;

                case 'B':
                    switch(S){
                        case 'R':
                            B += 2;

                            break;

                        case 'G':
                            B++;

                            break;
                    }

                    break;
            }
        }

        if(R == G && G == B){
            printf("trempate\n");
        }else if(maior(R, G, B) == 0){
            printf("empate\n");
        }else{
            if(maior(R, G, B) == R){
                printf("red\n");
            }else if(maior(R, G, B) == G){
                printf("green\n");
            }else if(maior(R, G, B) == B){
                printf("blue\n");
            }
        }
    }

    return 0;
}