/*************************************************************************
	> File Name: euler10-1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年07月31日 星期三 15时28分57秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

#define max 2000000

int main() {
    int32_t prime[max + 5] = {0};
    int64_t sum = 0;
    for(int64_t i = 2; i < max; i++) {
        if(!prime[i]) {prime[++prime[0]] = i; sum += i;}
        for(int64_t j = 1; j <= prime[0]; j++) {
            if(i * prime[j] > max) break;
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    printf("%" PRId64 "\n", sum);
    return 0;
}

