/*************************************************************************
	> File Name: 134.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 13时55分41秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int flag = 0;
    for(int i=a;i<=b;i++){
    if(i%11==0){
    if(flag==1){
    cout<<" ";
    }
    cout << i;
    flag = 1;
    }
    }
    return 0;
}

