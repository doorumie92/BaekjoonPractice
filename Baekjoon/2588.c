#include <stdio.h>

int main()
{
    int numA,numB;

    scanf("%d",&numA);
    scanf("%d",&numB);

    printf("%d\n",numA*(numB % 10));
    printf("%d\n",numA*((numB % 100)/10));
    printf("%d\n",numA*(numB/100));
    printf("%d\n",numA*numB);
    return 0;
}
