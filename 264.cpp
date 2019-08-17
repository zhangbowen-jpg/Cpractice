/*************************************************************************
	> File Name: 264.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月09日 星期二 11时30分39秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
#include<stack>
using namespace std;
#define MAX_N 100000
long long arr[MAX_N+5];
long long l[MAX_N+5],r[MAX_N+5];
stack<int> s;

int main(){
   int n;
    cin>>n;
   arr[0]=arr[n+1]=-1;
   for(int i=0;i<=n;i++)cin>>arr[i];
   s.push(0);
    for(int i =0;i<=n;i++){
        while(arr[s.top()]>=arr[i])s.pop();
        l[i]=i-s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();
    s.push(n+1);
    for(int i=n;i>=1;i--){
        while(arr[s.top()]>=arr[i]) s.pop();
        r[i] = s.top()-i;
        s.push(i);
    }
    long long ans =0;
    for(int i=1;i<=n;i++){
        ans = max(ans,arr[i]*(l[i]+r[i]-1));
    }
    cout<<ans<<endl;
   return 0;
}
//(l&r)+(l^r)/2; 位运算，不会超界。
