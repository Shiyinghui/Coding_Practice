// my accepted answer:  
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

typedef struct{
    int id;  
    int score; 
}data;

bool cmp(data d1, data d2){
    return d1.id < d2.id;
}
int main(){
  int N;
  int curid, sum;
  data res;
  scanf("%d", &N);
  vector<data> input(N);
  for(int i = 0; i < N; i++)
      scanf("%d%d", &input[i].id, &input[i].score);
  sort(input.begin(), input.end(), cmp);
  res.score = sum = input[0].score;
  res.id = curid = input[0].id;
  for(int i = 1; i < N; i++){
      if(input[i].id == curid){
          sum += input[i].score;
      }
      else{
          if(sum > res.score) {
              res.id = input[i-1].id;
              res.score = sum;
          }
          curid = input[i].id;
          sum = input[i].score;
      }
  }
  if(sum > res.score) {
      res.id = curid;
      res.score = sum;
  }
  printf("%d %d", res.id, res.score);
  return 0;
}

//the answer given in my reference book:
   
 #include <cstdio>
const int maxn = 100010;
int school[maxn] = {0};

int main(){
    int n, schoolID, score;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
         scanf("%d %d", &schoolID, &score);
         school[schoolID] += score;
    }
    int k = 1, MAX = -1;
    for(int i = 1; i <= n; i++){
        if(school[i] > MAX) {
            k = i;
            MAX = school[i];
        }
    }
    printf("%d %d\n", k, MAX);
    return 0;
}

