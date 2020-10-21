#include<stdio.h>
int main()
{
   char a;
   signed char b;
   unsigned char c;


   int d;
   short int e;
   long int f;
   long long int g;
   unsigned int h;
   unsigned short int i;
   unsigned long int j;
   unsigned long long int k;


   printf("Size of Character Data Types(bytes) : \n\n");

   printf("Size of Char          : %d \n",sizeof a);
   printf("Size of Signed Char   : %d \n",sizeof b);
   printf("Size of Unsigned Char : %d \n\n\n",sizeof c);

   printf("Size of Integer Data Types(bytes) : \n\n");

   printf("Size of Int                    : %d \n",sizeof d);
   printf("Size of Short Int              : %d \n",sizeof e);
   printf("Size of Long Int               : %d \n",sizeof f);
   printf("Size of Long Long Int          : %d \n",sizeof g);
   printf("Size of Unsigned Int           : %d \n",sizeof h);
   printf("Size of Unsigned Long Int      : %d \n",sizeof j);
   printf("Size of Unsigned Short Int     : %d \n",sizeof i);
   printf("Size of Unsigned Long Long Int : %d \n\n",sizeof k);

   return 0;
}
