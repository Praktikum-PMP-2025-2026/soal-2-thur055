#include <stdio.h>
#include <stdlib.h>

int pow (double a, double b){
    int temp = a;
    if (b == 0){
        return 1;
    }
    for (int i = 0; i<b-1;i++){
        a = a*temp;
    }
    return a;
}

int main (){
    int N;
    int jadwal[10];
    scanf("%d ", &N);
    
    for (int i = 0; i < N-1;i++){
        scanf("%d ", &jadwal[i]);
    }
    scanf("%d", &jadwal[N-1]);
    int temp;
    int j = 0;
    while (N - pow (2, j) > 0){
        j++;
    }
    // printf("j: %d\n", j);
    int a = 0;
    for (int i = 0; i < j; i++){
        printf("Level %d: ", i);
        a = a + pow(2, i);
        if (i > 1){
            if (a < N){
                if (i % 2 == 0){
                    for (int k = i + pow(2, i-2); k < a-1; k++){
                    
                        printf("%d ", jadwal[k]);
                    
                    }
                    printf("%d\n", jadwal[a-1]);
                }
                else{
                    for (int k = a-1; k >= i + pow(2, i-2); k--){
                    
                        printf("%d ", jadwal[k]);
                    
                    }
                    int b = i + pow(2, i-2);
                    printf("%d\n", jadwal[b]);
                }
            }
            else{
                if (i % 2 == 0){
                    for (int k = i + pow(2, i-2); k < N-1; k++){
                    
                        printf("%d ", jadwal[k]);
                    
                    }
                    printf("%d\n", jadwal[N-1]);
                }
                else{
                    for (int k = N-1; k > i + pow(2, i-2); k--){
                    
                        printf("%d ", jadwal[k]);
                    
                    }
                    int b = i + pow(2, i-2);
                    printf("%d\n", jadwal[b]);
                }
            }
        }
        else{
            if (i == 0){
                printf("%d\n", jadwal[i]);
            }
            else if (i == 1){
                printf("%d ", jadwal[i+1]);
                printf("%d\n", jadwal[i]);
            }
        }
    }
}
