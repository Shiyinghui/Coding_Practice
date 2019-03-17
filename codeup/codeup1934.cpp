#include <cstdio>
const int N = 210;
int input[N];

int main(){
    int n;
    int x, index;
    while(scanf("%d", &n) != EOF){
        index = -1;
        for(int i = 0; i < n; i++)
            scanf("%d", &input[i]);
        scanf("%d", &x);
        for(int i = 0; i < n; i++){
            if(x == input[i]){
                index = i; break;
            }
        }
        printf("%d", index);
    }

    return 0;
}
