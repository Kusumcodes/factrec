#include <stdio.h>
#include <stdlib.h>

int factrec(int N)
{
    if(N == 0 || N == 1)
        return 1;

    return N*factrec(N-1);
}

int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    int result = factrec(n);
    printf("%d", result);

    return 0;
}
