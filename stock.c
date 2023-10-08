#include<stdio.h>
int main(){
  int n;
  FILE *f1;
  int number,quantity,i;
  float price,value,total = 0;
  char item[10],filename[10];
//asking user file name for storing data
  printf("Enter the file name : ");
  scanf("%s",filename);
  //opening file
  f1 = fopen(filename,"w");
  //taking total numbers of item
  printf("ENTER NUMBERS OF ITEM");
  scanf("%d",&n);
  //taking data
  printf("input data \n");
  printf("ITEM NAME NUMBER PRICE QUANTITY\n");
  //loop for storing data in respective things
  for (int i = 1; i <= n; i++)
  {
    fscanf(stdin,"%s %d %f %d",item,&number,&price,&quantity);
    fprintf(f1,"%s %d %.2f %d\n",item,number,price,quantity);
  }
  //closing file
  fclose(f1);
  fprintf(stdout,"\n\n");
//printing all data
//opening file
  f1 = fopen(filename,"r");
//printing data
  printf("ITEM NAME NUMBER PRICE QUANTITY VALUE \n");
  for (int i = 1; i <= n; i++)
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