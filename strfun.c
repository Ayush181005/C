#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
	
	char a[15],b[15],c[15];
	int i,len,choice;
	
	puts("Enter your first string :");
	gets(a);
	
	puts("Enter your second string :");
	gets(b);
	
	printf("\nEnter a choice :");
	printf("\nSelect a choice :");
    printf("\n1.strlen for length.");
 	printf("\n2.strupr for upper case.");
 	printf("\n3.strlwr for lower case.");
 	printf("\n4.strrev for reversing.");
 	printf("\n5.strcpy for copying.");
 	printf("\n6.strcat for joining both strings.");
 	printf("\n7.strcmp for comparing.");
 	scanf("%d",&choice);
 	switch(choice)
 	{
 		case 1:
 			len = strlen(a);
 			printf("\nThe string length of A is %d.",a);
 			break;
 			
 		case 2:
 			strupr(a);
 			printf("\nThe upper case word is %s",a);
 			break;
 			
 		case 3:
 			strlwr(a);
 			printf("\nThe lower case word is %s",a);
 			break;
 			
 		case 4:
 			strrev(a);
 			printf("\nThe reversed word is %s",a);
 			break;
 			
 		case 5:
 			strcpy(c,a);
 			printf("\nThe copied value is %s",c);
 			break;
 			
 		case 6:
 			strcat(a,b);//cat = concate
 			printf("\nYour joined string is %s",a);
 			break;
 			
 		case 7:
 			i = strcmp(a,b);
 			if(i=0){
 				printf("\nBoth the strings are same.");
			 }
			 
			else{
				printf("\nBoth the strings are different.");
			}
			
		default:
			printf("\t\t\t\t\t\t\tInvalid choice");
 			
	 }
	 getch();
}   













                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
