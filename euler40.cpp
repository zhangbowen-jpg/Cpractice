/*************************************************************************
	> File Name: euler40.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月03日 星期六 13时12分07秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<cstring>

char s[1005000] = {0};

void fun10(void){
    long i;
    long sum = 1, k = 1, m = 0, n = 0;
    char s1[100];

    for(i = 1; ; i++) {
        sprintf(s1, "%ld", i);
        strcat(s,s1);

        if(strlen(s) >= k)
        {
            m = s[k-1] - 48;
            sum *= m;
            k *= 10;
            ++n;
            printf("%ld %ld %ld\n", sum, k, m);
        }
        if (n == 7) break;
    }
    printf("%ld\n", sum);
}

int main() {
    fun10();
    return 0;
}
