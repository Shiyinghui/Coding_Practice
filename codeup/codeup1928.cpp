//
// Created by 24757 on 2019/3/17.
//  My accepted answer;
#include <cstdio>

int month[13][2] = {
        {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{30,30},{31,31},{30,30},{31,31}};

 bool isLeap(int year){
     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 }

 int main(){
     int time1, y1, m1, d1;
     int time2, y2, m2, d2;
     while(scanf("%d %d", &time1, &time2) != EOF){
         if(time1 > time2){  //time2总指向较晚的那个，即数较大的那个
             int temp = time1;
             time1 = time2;
             time2 = temp;
         }
         y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
         y2 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
         int leap1 = isLeap(y1), leap2 = isLeap(y2);
         int days1 = 0, days2 = 0, days = 0;
         for(int i = 1; i < m1; i++){
             days1 += month[i][leap1];
         }
         days1 += d1;
         for(int i = 1; i < m2; i++){
             days2 += month[i][leap2];
         }
         days2 += d2;
         while(y1 < y2){
             if(isLeap(y1)) days += 366;
             else days += 365;
             y1 ++;
         }
         days += days2 - days1 + 1;
         printf("%d\n", days);
     }
     return 0;
 }


/*  算法笔记上的答案, 实测运行超时 
#include <cstdio>

int month[13][2] = {
        {0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{30,30},{31,31},{30,30},{31,31}};

 bool isLeap(int year){
     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
 }

 int main(){
     int time1, y1, m1, d1;
     int time2, y2, m2, d2;
     while(scanf("%d %d", &time1, &time2) != EOF){
         if(time1 > time2){  //time2总指向较晚的那个，即数较大的那个
             int temp = time1;
             time1 = time2;
             time2 = temp;
         }
         y1 = time1 / 10000, m1 = time1 % 10000 / 100, d1 = time1 % 100;
         y2 = time2 / 10000, m2 = time2 % 10000 / 100, d2 = time2 % 100;
         int ans = 1; //记录结果
         while(y1 < y2 || m1 < m2 || d1 < d2){
             d1 ++;
             if(d1 == month[m1][isLeap(y1)] + 1){
                 m1 ++;
                 d1 = 1;
             }
             if(m1 == 13){
                 y1 ++;
                 m1 = 1;
             }
             ans++; // 累计
         }
         printf("%d\n", ans);
     }
     return 0;
 }*/
