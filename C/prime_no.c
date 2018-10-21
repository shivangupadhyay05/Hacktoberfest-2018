 
#include<stdio.h>

int main()
{
    int end_point , start_point , temp;
    printf("enter the end point of prime numbers \n");
    scanf("%d",end_point);

            for( start_point = 0 ; start_point < end_point ; start_point++)
            {
                for( temp = 2 ; temp < start_point/2 ; temp++)
                {
                    if(!start_point/temp) break;
                }
                 printf("%d \n" , start_point);
            }
    printf("all of th the prime no. between the given no. and one");
}
