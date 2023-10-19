//to find that points are in line or not.

/* #include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,area;    
    printf("Enter x coordinates : ")
    printf("Enter 1 point : ");
    scanf("%d",&x1);
    printf("Enter 2 point : ");
    scanf("%d",&x2);
    printf("Enter 3 point : ");
    scanf("%d",&x3);
    printf("Enter y coordinates : ");
    printf("Enter 1 point : ");
    scanf("%d",&y1);
    printf("Enter 2 point : ");
    scanf("%d",&y2);
    printf("Enter 3 point : ");
    scanf("%d",&y3);
    area = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (area==0)
    {
        printf("points are in line");
    }
    else{
        printf("Points are not in line");
    }

}*/

//pattern
#include <stdio.h> 

int fact(int i,int j);
int factorial(int x);

int main() {
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=0; i<=n; i++) {
            for(int k=0; k<n-i; k++){
            printf(" ");
        }

        int p = 1;

        for(int j=0; j<=i; j++) {
            printf("%d ",p);
            p = p * (i-j)/(j+1);
            
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main() {
//   int i, n;
//   int a = 0, b = 1;
//   int nextTerm = a + b;
//   printf("Enter the number of terms: ");
//   scanf("%d", &n);
//   printf("Fibonacci Series: %d %d ", a, b);
//   for (i = 3; i <= n; ++i)
//   {
//     printf("%d ", nextTerm);
//     a = b;
//     b = nextTerm;
//     nextTerm = a + b;
//   }
//   return 0;
// }
