#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
 int rollno; 
    char name[30]; 
    char fname[30]; 
    char mname[30]; 
	float sub1,sub2,sub3,sub4,sub5;
	float per,avg;
	float total;
 
 
	printf("\nEnter the Student Roll Number : ");
	scanf("%d", &rollno);
    printf("\nEnter the Student Name : "); 
    scanf("%s", &name);
    printf("Enter Your Fname\n");
    scanf("%s",&fname);
    printf("Enter Your Mname\n");  
    scanf("%s",&mname);
    	printf("Enter the marks of Math : ");
	scanf("%f", &sub1);
	printf("Enter the marks of SE : ");
	scanf("%f", &sub2);
	printf("Enter the marks of TOC : ");
	scanf("%f", &sub3);
		printf("Enter the marks of DS : ");
	scanf("%f", &sub4);
		printf("Enter the marks of ADA : ");
	scanf("%f", &sub5);
	total= sub1+sub2+sub3+sub4+sub5;
	per = (total/500)*100;
	avg = (total/5);
  printf("|..........................................................................................|"); 
  printf("\n|\t\t\t\t\tRGPV-BOPAL\t\t\t\t\t   |");
  printf("\n|..........................................................................................|"); 
  printf("\n|Rno     :   %d      \t\t\t\t\t\t      Course  :  BE|",rollno);
  printf("\n|Name    :   %s  \t\t\t\t\t\t\t      Breanch : CSE|",name);
  printf("\n|Fname   :   %s  \t\t\t\t\t\t\t      SEM     :  V |",fname);
  printf("\n|Mname   :   %s     \t\t\t\t\t\t\t      YEAR    :  3 | ",mname);
  printf("\n|..........................................................................................|");
  printf("\n|\t  SubCode\t  SubName\t  MaxMarks\t MinMarks\tObtMarks\t   |"); 
   printf("\n|\t  cse-501\t    Math \t     70   \t    21    \t    %.2f    \t   |",sub1); 
    printf("\n|\t  cse-502\t    SE  \t     70   \t    21    \t    %.2f    \t   |",sub2); 
     printf("\n|\t  cse-503\t    TOC \t     70   \t    21    \t    %.2f    \t   |",sub3); 
      printf("\n|\t  cse-504\t    DS  \t     70   \t    21    \t    %.2f    \t   |",sub4);
	  printf("\n|\t  cse-505\t    ADA \t     70   \t    21    \t    %.2f    \t   |",sub5);  
   printf("\n|..........................................................................................|");
   printf("\n|\t\ttotal \t   :%.2f\t\t\t\t\t\t\t   |",total); 
   printf("\n|\t\tPercentage :%.2f\t\t\t\t\t\t\t   |", per); 
   printf("\n|\t\tDiv        :%.2f\t\t\t\t\t\t\t   |", avg); 
  printf("\n|..........................................................................................|"); 
    return 0;
}