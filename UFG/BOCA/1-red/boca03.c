    #include <stdio.h> 

    int main() {
        int val1,val2,valorAlvo,result;
        char operacao;

        scanf("%i", &valorAlvo);
        scanf("%i %c %i", &val1, &operacao, &val2);

        switch (operacao){
            case '+':
                result = val1 + val2;
                break;
            case 'x':
                result = val1 * val2;
                break;
        
            default:
                return -1;
                break;
        }

        if (result > valorAlvo) {
            printf("overflow\n");
        } else {
            printf("no overflow\n");
        }
        return 0;
    }