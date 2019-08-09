/*************************************************************************
	> File Name: euler14-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年08月07日 星期三 15时15分36秒
 ************************************************************************/

#include<stdio.h>
#define max_n 1000000
#define keep_max_len 1000000

int keep[keep_max_len] = {0};

long long get_len(long long x) {
    if(x == 1) return 1;
    if(x < keep_max_len && keep[x]) return keep[x];
    int ret;
    if(x & 1) ret = get_len(x * 3 + 1) + 1;
    else ret =  get_len(x >> 1) + 1;
    if(x < keep_max_len) keep[x] = ret;
    return ret;
}


int main() {
    int ans = 0, num = 0;
    for (int  i = 1; i < max_n; i++) {
        int l = get_len(i);
        if (l > ans) ans = l, num = i;
    }
    printf("%d\n", num);
    return 0;
}

