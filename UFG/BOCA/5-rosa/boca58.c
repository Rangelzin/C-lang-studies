#include <stdio.h>
#include <string.h>
#define MAX 10000

int main() {
    int n,i,j,countVowels[MAX],len=0;
    char name[MAX];

    scanf("%d", &n);
    getchar();


    for(i=0;i<n;i++){
		len=0;
        fgets(name, sizeof(name), stdin);
        len = strlen(name);
        for(j=0;j<len;j++){
            if (name[j] == 'A' || name[j] == 'a'||
            name[j] == 'E' || name[j] == 'e'||
            name[j] == 'I' || name[j] == 'i'||
            name[j] == 'O' || name[j] == 'o'||
            name[j] == 'U' || name[j] == 'u')
            countVowels[i]++;
        }
        for(j=0;j<MAX;j++){
            name[j]=0;
        }
    }

    for(i=0;i<n;i++){
       printf("%d\n",countVowels[i]);
    }

}


