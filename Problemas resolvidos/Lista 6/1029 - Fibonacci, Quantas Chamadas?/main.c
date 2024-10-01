#include <stdio.h>

int num_calls;

int fibonacci(int x);

int main(void){
    int n, x;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        num_calls = 0;

        scanf("%d", &x);

        printf("fib(%d) = %d calls = %d\n", x, num_calls - 1, fibonacci(x));
    }

    return 0;
}

int fibonacci(int x){
    num_calls++;

    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return (fibonacci(x - 1) + fibonacci(x - 2));
    }
}