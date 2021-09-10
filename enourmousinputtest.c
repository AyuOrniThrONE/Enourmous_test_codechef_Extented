#include <stdio.h>
int main()
{
    int n, k, c = 0;
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
    }
    printf("%d\n", c);

    return 0;
}