#include <stdio.h>
#define sz 10000010
int siv[sz], prime[sz], cnt;

int main()
{
    int n, i, j;

    for (i=2; i<sz; i++)
        if(!siv[i])
            for (j = i+i; j<sz; j+=i)
                siv[j] = 1;

    for (i=2; i<sz; i++)
        if(!siv[i]) prime[cnt++]=i;

//    for (i=0; i<cnt; i++)
//        printf("%d%c", prime[i],",\n"[i==cnt-1]);
    printf("Total prime = %d\n", cnt);
//        if(i==cnt-1)printf("%d", prime[i]);
//        else printf("%d, ", prime[i]);

    return 0;
}
