#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct submission{
    char problem;
    int time;
    char grade[10];
};

int acertou(struct submission x, struct submission *y, int n);
// verifica se o problema x está em y ("n" é o tamanho de "y")
// retorno:
// 0 - está
// 1 - não está

int main(void){
    struct submission *tries, *right, *wrong; // submissões
    int n = 1, i, j, k;
    int total; // tempo total

    while(1){
        scanf("%d", &n);
        if(n == 0)break;

        tries = (struct submission*) malloc(sizeof(struct submission) * n);
        right = (struct submission*) malloc(sizeof(struct submission) * n);
        wrong = (struct submission*) malloc(sizeof(struct submission) * n);
        // nota: complexidade espacial O(n)

        j = 0; k = 0;
        for(i = 0; i < n; i++){
            scanf(" %c", &tries[i].problem); //printf("%c\n", tries[i].problem);

            scanf("%d", &tries[i].time); //printf("%d\n", tries[i].time);

            scanf(" %[^\n]", tries[i].grade); //printf("%s\n", tries[i].grade);

            if(strcmp(tries[i].grade, "correct") == 0){
                right[j] = tries[i];
                
                j++;
            }else{
                wrong[k] = tries[i];

                k++;
            }
        }

        total = 0;
        for(i = 0; i < j; i++)total += right[i].time;

        for(i = 0; i < k; i++)if(acertou(wrong[i], right, j) == 0)total += 20;

        printf("%d %d\n", j, total);
        
        free(tries);
        free(right);
        free(wrong);
    }

    return 0;
}

int acertou(struct submission x, struct submission *y, int n){
    for(int i = 0; i < n; i++)if(x.problem == y[i].problem)return 0;

    return 1;
}