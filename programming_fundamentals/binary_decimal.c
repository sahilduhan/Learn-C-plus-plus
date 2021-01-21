#include <stdio.h>
int main()
{
    //binary to numeric
    int bniary_num, decimal = 0, base = 1,rem;
    printf("enter the value:");
    scanf("%i", &bniary_num);
    while(bniary_num!=0)
{
   rem= bniary_num%10;
   decimal=decimal+rem*base; 
   bniary_num=bniary_num/10;
   base=base*2;
}
printf("the num is:",base);

    return 0;
}