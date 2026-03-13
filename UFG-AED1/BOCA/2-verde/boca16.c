#include <stdio.h>

unsigned long int fibonacci(int n) {
	
	if (n == 0)
		return 0;
	else if ((n==1) || (n==2))
		return 1;
	else 
		return fibonacci(n-1) + fibonacci(n-2);
		
	return 0;
}

int main() {
	int num,i;
	scanf("%d", &num);
	
	for (i=0;i<= num;i++)
		printf("%lu ", fibonacci(i));
		
	return 0;
}
