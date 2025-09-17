#include <stdio.h>

unsigned long int Ackermann(int m, int n) {
	if (m==0)
		return (n+1);
	else if ((n==0) && (m > 0))
		return (Ackermann(m-1,1));
	else 
		return (Ackermann(m-1,Ackermann(m,n-1)));
	
}

int main() {
	int m,n;
	unsigned long int acke;
	scanf("%d %d",&m,&n);
	acke = Ackermann(m,n);
	printf("%lu\n", acke);
	
	return 0;
}
