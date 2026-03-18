#include <stdio.h>

int main()
{
  int num;
    bool flag = true;
    scanf("%d",&num);
    for (int i=2;i<num;i++){
        if (num%i==0){
            flag = false;
            break;
        }
    }
    if (flag&&num>1){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

