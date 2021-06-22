#include<stdio.h>
#define SIZE 5

int main(void)
{
int arr[SIZE]={0};
int tmp;
int truth_i;   /* holds the answer to the question: "Is tmp present in the the array arr[] till the
        element i?" */

for(int i=0; i<SIZE; i++)
{
    for(;;)
    {
        truth_i=0;
        printf("\nEnter a product code: ");
        scanf("%d", &tmp);
        /*function which calculates the answer truth_i */

        for(int j=0; j<i; j++)
        {
            if(tmp==arr[j])
            {
                truth_i=1;
                break;
            }
        }
        if(!truth_i && tmp>0)
        {
            arr[i] = tmp;
            printf("Code accepted!");
            break;
        }
        else
            printf("Code rejected!");
    }
}

for(int i=0; i<SIZE; i++)
        printf(" %d ", arr[i]);

return 0;
}
