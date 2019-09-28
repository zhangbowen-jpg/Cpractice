#include<stdio.h>

union IP {
	int num;
	struct {
		unsigned char a1;
		unsigned char a2;
		unsigned char a3;
		unsigned char a4;	
	} ip;
};

int is_little() {
	static int x = 1;
	return ((char *) &x)[0];
}
 
int main() {
	printf("%d\n",is_little());
	char str[100];
	IP p;
	int a[4];
	while (~scanf("%s", str)) {
		sscanf(str, "%d.%d.%d.%d", a + 0, a + 1, a + 2, a + 3);
		p.ip.a1 = a[0];
		p.ip.a2 = a[1];
		p.ip.a3 = a[2];
		p.ip.a4	= a[3];
		printf("%u\n",p.num);
	} 
}

 
