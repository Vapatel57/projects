#include<stdio.h>
#include<string.h>

int main(){
    int i=0,j=0,n;
    char string[100][100],dummy[100];
    printf("Enter a number of names :");
    scanf("%d",&n);
    printf("Enter the names of %d items \n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",string[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (strcmp(string[i],string[j])>0)
           {
            strcpy(dummy,string[i]);
            strcpy(string[i],string[j]);
            strcpy(string[j],dummy);
           }  
        }   
    }
    printf("\nalphabetical list : \n");
    printf("-------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",string[i]);
    }
    return 0;
}
// #include<stdio.h>
// int main(){
//     int num[100];
//     int a,i,j,n;
//     printf("Enter total numbers : ");
//     scanf("%d",&n);
//     printf("Enter numbers : ");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d",&num[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//            if (num[i]>num[j])
//            {
//             a=num[i];
//             num[i]=num[j];
//             num[j]=a;
//            }  
//         }
//     }
//     printf("Numbers in ascending order : \n");
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d\n",num[i]);
//     }
//     return 0;
// }