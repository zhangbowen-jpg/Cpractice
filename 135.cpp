/*************************************************************************
	> File Name: 135.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月25日 星期四 14时17分33秒
 ************************************************************************/
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(i%7==0){
    printf("%d\n",i);
    }
    }
    return 0; 
}

