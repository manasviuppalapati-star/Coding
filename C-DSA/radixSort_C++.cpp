// Radix Sort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int *pData, **pBuckets;
    int n, i, j, bi;
    int sizeofdata;
    int steps, exp;
    scanf("%d", &sizeofdata);
    pData = (int *)malloc(sizeofdata * sizeof(int));
    pBuckets = (int **)malloc(10 * sizeof(int *));

    for(i = 0; i < 10; i++)
    {
        pBuckets[i] = (int *)malloc((sizeofdata + 1) * sizeof(int));
        pBuckets[i][0] = 0;
    }
    srand(time(0));
    for(i = 0; i < sizeofdata; i++)
    {
        pData[i] = rand() % 1000;
    }
    printf("\nNumbers before sorting:\n");
    for(i = 0; i < sizeofdata; i++)
    {
        printf("%d ", pData[i]);
    }
    exp = 1;
    for(steps = 0; steps < 3; steps++)
    {
        for(i = 0; i < sizeofdata; i++)
        {
            n = pData[i];
            bi = (n / exp) % 10;

            pBuckets[bi][pBuckets[bi][0] + 1] = n;
            pBuckets[bi][0]++;
        }
        i = 0;
        for(bi = 0; bi < 10; bi++)
        {
            for(j = 0; j < pBuckets[bi][0]; j++)
            {
                pData[i++] = pBuckets[bi][j + 1];
            }
            pBuckets[bi][0] = 0;
        }
        exp *= 10;
    }
    printf("\nNumbers after sorting:\n");
    for(i = 0; i < sizeofdata; i++)
    {
        printf("%d ", pData[i]);
    }
    
}
