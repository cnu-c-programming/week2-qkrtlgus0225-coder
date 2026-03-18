#include <stdio.h>

int main()
{
 int num1;
    int num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);
    switch (op){
        case '+':
            printf("%d",num1+num2);
            break;
        case '-':
            printf("%d",num1-num2);
            break;
        case '*':
            printf("%d",num1*num2);
            break;
        case '/':
            printf("%d",num1/num2);
            break;
    }
    return 0;
}

