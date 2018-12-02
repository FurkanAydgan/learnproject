#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matris[3][4];
    int i,j;
    int sum=0;
    for(i=0;i < 3;i++){
        for(j=0;j< 4;j++){
             printf("%d .ninci sutun ve %d'ninci satir",i,j);
            scanf("%d",&matris[i][j]);

        }
        }

        for(j=0;j < 4 ;j++){
            for(i=0;i < 3;i++){
                sum+=matris[i][j];


                }
            printf("%d 'ninci satirin toplami:%d\n",j,sum);
            sum=0;
        }






    return 0;
}
