/*
#include<cstdio>
const int N = 500000;
int data[N];

int main(){
	int min, sum, max, res;
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	scanf("%d", &data[i]);
	max = 0;
	for(int i=0; i<n; i++){
	    sum = data[i];
		min = data[i];
		res = data[i] * data[i];
		for(int j=i+1; j<n; j++){
		 sum += data[j];
		 if(data[j] < min) min = data[j];
		  res = min * sum;
		  if(res > max) max = res;
		}
	
	}
	printf("%d\n", max);
	return 0;
}*/

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);  // 初始大小为 n 
    vector<int> cusum(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];  // 输入 
    cusum[0]=nums[0];  // 赋第一个值 
    for(int i=1;i<n;i++)
        cusum[i]=cusum[i-1]+nums[i]; 
    nums.push_back(0);   // 0 加到最后一个元素  
    stack<int> stk;    
    int i=0;
    int ans=0;
    while(i<nums.size())   // size: n+1 
    {
        if(stk.empty()||nums[i]>=nums[stk.top()])
            stk.push(i++);   
        else
        {
            int h=stk.top();
            stk.pop();
            int st=(stk.empty())?cusum[i-1]:(cusum[i-1]-cusum[stk.top()]);
            ans=max(ans,nums[h]*st);
        }
    }
    cout<<ans;
    return 0;
}

