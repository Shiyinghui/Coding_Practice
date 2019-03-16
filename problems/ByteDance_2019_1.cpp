//
// Created by 24757 on 2019/3/16.
// 2019字节跳动春招  A卷 第一题   找硬币  

#include<cstdio>

using namespace std;


int main(){
    int n;
    int change;
    int a1 = 0, b4 = 0, c16 = 0, d64 = 0;
    int res;
    scanf("%d", &n);
    change = 1024 - n;
    if(change == 0) res = 0;
    while (change >= 64){
             d64 = change / 64;
             change = change % 64;
    }
    while(change >= 16){
             c16 = change / 16;
             change = change % 16;
    }
    while(change >= 4 ){
             b4 = change / 4;
             change = change % 4;
    }

    a1 = change;
    res = a1 + b4 + c16 + d64;
    printf("%d", res);
   return 0;
}
