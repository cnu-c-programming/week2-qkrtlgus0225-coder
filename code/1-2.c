#include <stdio.h>
int main()
{

    printf("     % 5s ","name");
    printf("%10s","id");
    printf("      % 5s","value\n");

    printf("     % 5s ","kim");
    printf("%010d",12);
    printf("      % 5.2f\n",4.120000);

    printf("     % 5s ","lee");
    printf("%010d",1922);
    printf("      % 5.2f\n",3.210000);

    printf("     % 5s ","park");
    printf("%010d",432);
    printf("      % 5.2f\n",1.000000);

    return 0;
}
