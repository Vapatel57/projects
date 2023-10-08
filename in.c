#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  int n;
  FILE *f1,*f2;
  int number,quantity,i,a,b,x,z;
  float price,value,total = 0,y;
  char item[10],filename[10],ch;
  printf("\x1b[32;44m Choose the numbers : \x1b[0m \n");
  printf("\x1b[31;47m (1)\x1b[0m entering data.\n \x1b[34;47m(2)\x1b[0m checking stock.\n");
  scanf("%d",&n);
  if (n==1)
  {
    f1 = fopen("data.txt","w");
    printf("Enter number of items");
    scanf("%d",&a);
    printf("input data \n");
  printf("ITEM NAME NUMBER PRICE QUANTITY\n");
  //loop for storing data in respective things
  for (int i = 1; i <= a; i++)
  {
    fscanf(stdin,"%s %d %f %d",item,&number,&price,&quantity);
    fprintf(f1,"%s %d %.2f %d\n",item,number,price,quantity);
  }
  //closing file
  fclose(f1);
  fprintf(stdout,"\n\n");
//printing all data
//opening file
  f1 = fopen("data.txt","r");
//printing data
  printf("ITEM NAME NUMBER PRICE QUANTITY VALUE \n");
  for (int i = 1; i <= a; i++)
  {
    fscanf(f1,"%s %d %f %d " ,item,&number,&price,&quantity);
    value = price*quantity;
    fprintf(stdout , "%-8s %5d %6.2f %6d %9.2f \n" ,item,number,price,quantity,value);
    total = total+value;
  }

  fclose(f1);
  printf("--------------------------------------\n");
    //printing total value
    printf("\t\tTOTAL is : %9.2f \n",total);
  }
  if (n==2)
  f1= fopen("data.txt","r");
  f2 = fopen("test.txt","w");
  {
    while ((ch= fgetc(f1)) !=EOF)
    {
      fputc(ch,f2);
    }
    
  }
  fclose(f1);
  fclose(f2);
  printf("\t\t\x1b[33;41m data copied\x1b[0m \n");

  }
  