#include <stdio.h>

int main() {

    // practice problem no. 2
    // int a, b;
    // scanf("%d%d", &a, &b);

    // printf("%d", a+b);

    // for (int i = 0; i < 2; i++)
    // {
    //     scanf("%d%d", &a, &b);

    //     printf("%d", a+b); 

    //     if(i == 0) {
    //         printf("\n");
    //     }
    // }


    // practice problem no. 3
    // int a; 
    // long long int b; 
    // double c;
    // char d;

    // scanf("%d %lld %lf %c", &a, &b, &c, &d);

    // printf("%d\n%lld\n%.2lf\n%c", a, b, c, d);



    // practice problem no. 4
    int n;
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++) {

        if (i%5 == 0) {
            printf ("%d Yes\n", i);

        } else {
            printf ("%d No\n", i);

        }
    }
    

    return 0;
}