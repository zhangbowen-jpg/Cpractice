/*************************************************************************
	> File Name: 158.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月27日 星期六 19时29分15秒
 ************************************************************************/

#include <stdio.h>

int main() {
    int n,flag;
    scanf("%d",&n);
    for(int i = 1; i <= n+1; i++) {
        flag = 0;
        for(int j = 1; j <= 2*n+2-i; j++){
            if(j == i||j == 2*n+2-i){ 
                printf("%d",n-i+1);
            }
            printf(" ");
            }    
        } 
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= 2*n+2-i; j++){
            if(j == i||j == 2*n+2-i) printf("%d",n-i+1);
            if(flag == 1){
            printf(" ");
            flag = 1;
            }
        } 
        printf("\n");
    }

}

