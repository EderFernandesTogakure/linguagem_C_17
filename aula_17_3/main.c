#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Digite dois valores inteiros!\n");
    scanf("%d %d", &a, &b);
    for(c = a; c <= b && c >0; c++){
        printf("Contando %d \n",c);
    }
}
