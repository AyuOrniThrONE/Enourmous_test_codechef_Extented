#include <stdio.h>
int main()
{
    int n, k, c = 0;
    int primes = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        int t, div = 0;
        scanf("%d", &t);
        div = t % k;
        if (div == 0)
        {
            c++;
        }
        int q = t / 2;
        
        if (t % 2 != 0 || t%3!=0 || t%5!=0 || t%7!=0 || t%11!=0)
        {
            primes++;
        }
        else if (t <= 2 && t > 0)
        {
            primes++;
        }
    }
    printf("Number of input divisible by %d is: %d\n", k, c);
    printf("Number of input that are primes is: %d\n", primes - 1);

    return 0;
}