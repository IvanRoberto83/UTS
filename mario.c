#include <stdio.h>

int main()
{
   int n;
    printf("Tinggi Piramida : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++){
        for(int k = 1; k<=i; k++){
            printf("#");
        }
        printf("\n");
    }
}
