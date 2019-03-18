/*
//
// Created by 24757 on 2019/3/18.
// my accepted answer:
#include <cstdio>
#include <cstring>
const int maxn = 90;
char res[maxn][maxn];

int main(){
    char a[90];
    fgets(a, 90, stdin);  // Linux OJ系统不能使用gets()
    a[strlen(a) - 1] = '\0';
     //gets(a);
     int j = 0, k = 0;
    for(int i = 0; i < strlen(a); i++) {
        if(a[i] != ' ')res[j][k++] = a[i];
        else{
            res[j][k] = '\0';
            j++; k = 0;
        }
    }
    for(j; j >= 0; j--){
        printf("%s", res[j]);
        if(j > 0)printf(" ");
    }
    return 0;

}
*/
