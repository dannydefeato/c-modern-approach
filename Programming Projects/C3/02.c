#include <stdio.h>

int main(void)
{
    int itemNumber, day, month, year;
    float unitPrice;

    printf("Enter item number: "); scanf("%d", &itemNumber);
    printf("Enter unit price: "); scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): "); scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit Price\t\tPurchase Date\n%d\t\t$%-7.2f\t\t%d/%d/%d", itemNumber, unitPrice, month, day, year);
    
    return 0;
}