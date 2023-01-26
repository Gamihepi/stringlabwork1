#include<stdio.h>
main()
{
   
   int i;
   char n[40];
   
   printf("Enter the character : ");
   gets(n);
   
   for(i=0;n[i]!='\0';i++)
   {
      if(n[i]>=65 && n[i]<=90)
	  {
         n[i]=n[i]+32;
      }
   }
   printf("The converted lower case character is : ");
   puts(n);
}
