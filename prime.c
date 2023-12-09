#include<stdio.h>
#include<conio.h>
void main(){
    int n,i,count=0;
    clrscr();
    printf("Enter a number : ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
           count++;
        }
    }
    if (count==2)
    {
        printf("%d is prime number",n);
        
    }
    else{
        printf("%d is not prime number",n);
        }
   getch();
}