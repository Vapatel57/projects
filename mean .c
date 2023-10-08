#include<stdio.h>
#include<math.h>

int main(){
    int n,sum= 0,mean,value,i;
    //taking the total numbers for finding mean and sum
    printf("Enter the total numbers : ");
    //storing the numbers in n
    scanf("%d" ,&n);

printf("Enter the numbers : ");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d" ,&value);
        //adding the numbers 
        sum= sum+value;
        //finding the mean
        mean = sum/n; 
    }
    //printing the sum
    printf("Sum = %d \n" ,sum);
    //printing the mean
    printf("mean = %d\n",mean);

    return 0;
}