/*************************************************************************
	> File Name: 270.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月09日 星期二 11时52分19秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
#include<algorithm>
#include<cmath>
using namespace std;
#define MAX_N 300000
int arr[MAX_N+5],head,tail;
int q[MAX_N+5];
int main(){
    int n,m,ans;
    cin>>n>>m;
    arr[0]=0;
    for(int i=1;i<=n;i++)cin>>arr[i],arr[i]+=arr[i-1];
    head = tail =0;
    q[tail++]=0;
    ans=arr[1];
    for(int i=1;i<=n;i++){
        ans=max(ans,arr[i]-arr[q[head]]);
        while(tail-head&&arr[i]<=arr[q[tail-1]]) tail--;
        q[tail++]=i;
        if(i-q[head]>=m) ++head;
    }
    cout<<ans<<endl;
    return 0;
}

