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
    do{          //ʮ������sumת��ΪQ����, numΪλ��
        z[num++] = sum % D;
        sum = sum / D;
    }while(sum != 0);
    for(int i = num -1; i >= 0; i--)
        printf("%d",z[i]);
    return 0;
}
*/

/*  P������ x ת���� ʮ������ y
     int y = 0, product = 1;
     while(x != 0){
        y = y + (x % 10) * product;
        x = x / 10;
        product = product * p; // �õ� p, p^2, p^3...
    }
   */
