/*
//
// Created by 24757 on 2019/3/18.
//

#include <cstdio>

int main(){
    int A, B, D;
    int z[40], num = 0;
    scanf("%d%d%d", &A, &B, &D);
    int sum = A + B;
    do{          //十进制数sum转换为Q进制, num为位数
        z[num++] = sum % D;
        sum = sum / D;
    }while(sum != 0);
    for(int i = num -1; i >= 0; i--)
        printf("%d",z[i]);
    return 0;
}
*/

/*  P进制数 x 转换成 十进制数 y
     int y = 0, product = 1;
     while(x != 0){
        y = y + (x % 10) * product;
        x = x / 10;
        product = product * p; // 得到 p, p^2, p^3...
    }
   */
