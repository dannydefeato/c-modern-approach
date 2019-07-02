// Calculates a broker's commission

#include <stdio.h>

/*#define BOOL unsigned int
#define TRUE 1
#define FALSE 0 */

int main(void)
{
   /*BOOL flag = FALSE;

    if(flag)
        printf("TRUE");
    else if (!flag)
        printf("FALSE"); */

    float PriceShare, commission, value;
    int NumShares;
   
    printf("Enter number of shares: ");
    scanf("%d", &NumShares);
    printf("Enter price per share: ");
    scanf("%f", &PriceShare);

    value = NumShares * PriceShare;

    if (value < 2500.00f)
        commission = 30.00f + .017f * value;
    else if (value < 6250.00f)
        commission = 56.00f + .0066f * value;
    else if (value < 20000.00f)
        commission = 76.00f + .0034f * value;
    else if (value < 50000.00f)
        commission = 100.00f + .0022f * value;
    else if (value < 500000.00f)
        commission = 155.00f + .0011f * value;
    else
        commission = 255.00f + .0009f * value;

    if (commission < 39.00f)
        commission = 39.00f;

    printf("\nCommission: $%.2f", commission);
    
    if (NumShares < 2000)
        printf("\nRival commission: $%.2f", NumShares * .03f + 33.00f);
    else
        printf("\nRival commission: $%.2f", NumShares * .02f + 33.00f);



    return 0;
}