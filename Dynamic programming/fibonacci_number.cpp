
//  TOP DOWN APPROACH
#include<bits/stdc++.h>
using namespace std;
const int N=1e4+10;
 int dp[N] ;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n!=-1) return dp[n];
    return dp[n]=dp[n-1]+dp[n-2];
}
int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fib(n);
} 



/* 
BOTTOM UP APPROACH
#include<iostream>
using namespace std;
const int N=1e4+10;
 int dp[N] = 10000;

}
int main(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n];
}

*/