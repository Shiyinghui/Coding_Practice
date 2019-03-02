#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;
const int M = 500001;
int num[M] = {-1};

int main(){
	int n;
	int x = 0,y = 0;
	int maxY = -1;
	int flag = 0;
	stack<int> st;
	scanf("%d",&n);
	memset(num, -1, sizeof(num));
	for(int i = 0;i < n;i++){
		scanf("%d %d",&x, &y);
		num[x] = y;
	}
	for(int i = 500000;i >= 0; i--){
		if(num[i] == -1)
		continue;
		if(flag == 0){
		    st.push(num[i]);
		    st.push(i);
		   //printf("%d %d\n",i,num[i]);
		   flag = 1;
		   maxY = num[i];
		}
		else
			if(num[i] > maxY){
			   //printf("%d %d\n",i,num[i]);
			    st.push(num[i]);
		        st.push(i);
			   maxY = num[i];
			}
	}
	for(int i = 0;i < st.size();i++){
		printf("%d ",st.top());
		st.pop();
		printf("%d\n",st.top());
		st.pop();
	}
	
	
	
}

 
