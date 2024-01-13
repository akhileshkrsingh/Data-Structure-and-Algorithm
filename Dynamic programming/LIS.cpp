#include<iostream>
#include<string>
#include<vector>
#include "../../../usr/include/tcl8.6/tcl-private/compat/string.h"
using namespace std;
const int N=1e5+10;
vector<int>arr(N);
int dp[N];
int LIS(int i)
{if(dp[i]!=-1) return dp[i];
    int ans=1;
   for(int  j=0;j<i;j++){
    if(arr[i]>arr[j]){
        ans=max(ans,LIS(j)+1);
    }
   }
   return dp[i]=ans;
}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,LIS(i));
    }
    cout<<ans;
}