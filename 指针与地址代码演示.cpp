#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define offset(T, a) (long long)(&(((T *)(NULL))->a))
// ��/0ת����T *���͵ĵ�ַ
#define pchar char * //����������滻
typedef char * ppchar;  //������������������

struct Data {
    int a;
    double b;
    char c;
};

void output_args(int argc, char *argv[], char *env[]) {
    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    for(int i = 0; env[i]; i++) {
        printf("env[%d] = %s\n", i, env[i]);//��ӡ��������
        if(strncmp(env[i], "USER=", 5) == 0) {//ֻ����ĳ���û�����ִ��
            if(strcmp(env[i] + 5, "zhangbowen")) {
                printf("you are not zhangbowen, don't run me! GUN!");
                exit(0);
            }
        }
    }
    return ;
}

int main(int argc, char *argv[], char *env[]) {//��һ�������������������ڶ�����ʾ�������飬����봫���ո���ַ�����Ҫ�����߼ӡ���,�������������棩������ʾ����������
	int num1 = 0x616263; //ʮ������ 61ת��Ϊʮ����97 �����ƴ���a
	int num2 = 0x61626364; 
	printf("%s\n", (char *)(&num2));  
    offset(Data, a); //�궨�� ���Data�ṹ����a�ֶε�ƫ����
    printf("%lld\n",offset(struct Data, a));
    printf("%lld\n",offset(struct Data, b));
    printf("%lld\n",offset(struct Data, c));
    pchar p1, p2;
    ppchar p3, p4;
    //char *ָ��ռ8���ֽ�
    printf("sizeof(p1) = %lu sizeof(p2) = %lu\n",sizeof(p1),sizeof(p2));
    printf("sizeof(p3) = %lu sizeof(p4) = %lu\n",sizeof(p3),sizeof(p4));
    output_args(argc, argv, env);
	return 0;
}

