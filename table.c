// // #include<stdio.h>
// // int main(){
// //     int n;
// //     int fact;
// //     printf("Enter a number : ");
// //     scanf("%d",&n);
// //     for (int i = 1; i <= n; i++)
// //     {
// //         fact=fact*i;
// //     }
// //     printf("%d\n",fact);
// // }
// #include<stdio.h>
// int main(){
//     int n;
//     int sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for (int i = 1; i <= n; i++)
//     {
//         if (i%2 !=0)
//         {
//             sum=sum+i;
//         }
        
//     }
// printf("Sum of odd number is : %d\n",sum);    
// }
#include<stdio.h>
int main(){
    int n,c;
    int a=0,b=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for (int i = 2; i <= n; i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;
}