#include <stdio.h>

int main()
{
   int num;
    bool flag = true;
    scanf("%d",&num);
    if (num < 2) {
        flag = false; 
    } else {
        for (int i = 2; i * i <= num; i++) { 
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
    }
    
    if (flag) {
        printf("true");
    } else {
        printf("false");
    }
    return 0;
}

