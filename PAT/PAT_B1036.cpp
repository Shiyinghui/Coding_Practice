#include <cstdio>

int main(){
    int N;
    char c;
    int row;
    scanf("%d %c", &N, &c);
    if(N % 2 == 0) row = N / 2;
    else row = N / 2 + 1;
    for(int k = 0; k < N; k++)  //输出第一行
        printf("%c", c);
    row --;
    for(int i = 0; i < row - 1; i++){
        printf("\n");
        printf("%c", c);
        for(int j = 0; j < N - 2; j++) printf(" ");
        printf("%c", c); 
    }
    printf("\n");
    for(int k = 0; k < N; k++)  //输出最后一行
        printf("%c", c);
    return 0;
}

