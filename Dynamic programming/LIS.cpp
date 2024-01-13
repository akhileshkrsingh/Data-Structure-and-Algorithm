#include<iostream>
#include<vector>
using namespace std;
const int N=1e5+10;
vector<int>arr(N);
int LIS(int i)
{
    int ans=1;
   for(int  j=0;j<i;j++){
    if(arr[i]>arr[j]){
        ans=max(ans,LIS(j)+1);
    }
   }
   return ans;
}

int main()
{
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