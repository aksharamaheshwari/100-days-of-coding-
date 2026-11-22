//ques103- Find the Pivot Index//

#include <stdio.h>

int main()
{
    int nums[100], n, i;
    int totalSum = 0, leftSum = 0;
    int pivot = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
        totalSum = totalSum + nums[i];
    }

    for(i = 0; i < n; i++)
    {
        int rightSum = totalSum - leftSum - nums[i];

        if(leftSum == rightSum)
        {
            pivot = i;
            break;
        }

        leftSum = leftSum + nums[i];
    }

    printf("%d", pivot);

    return 0;
}
