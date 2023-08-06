#include <stdio.h>
#include <stdlib.h>

struct Advertising
{
    int displayedAds;
    float ClickedAds;
    float DayRate;
};

void TotalIncome(struct Advertising income)
{
    float Total = income.displayedAds * income.ClickedAds * income.DayRate;
    printf("Total Income: %f\n", Total);
}

int main()
{
    struct Advertising data;
    printf("No of Ads Displayed: ");
    scanf("%d", &data.displayedAds);
    printf("Percentage of Ads Clicked: ");
    scanf("%f", &data.ClickedAds);
    printf("Per Day Rate of Ads: ");
    scanf("%f", &data.DayRate);
    TotalIncome(data);
    return 0;
}

#include <stdio.h>
int where(int arr[10], int value)
{   
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == value)
        {

            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[10] = {1, 2, 34, 5, 6, 78, 33, 4, 55, 23};
    int val = 5;
    int wh = where(arr, val);
    printf("%d is at Index: %d",val,wh);
    return 0;
}
