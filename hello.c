#include <stdio.h>
int main()
{ int a,b,c,d,e,f,g,h,i,j;
printf("total number of population:");
scanf("%d",&a);
printf("Total perecnt of literacy:");
scanf("%d",&h);
i=(h*a)/100;
printf("Total number of people literate:%d",i);
printf("\npercentage of men:");
scanf("%d",&b);
c=(a*b)/100;
printf("\nTotal number of men in the city:%d",c);
d=a-c;
printf("\nTotal number of women in the city:%d",d);
printf("\npercentage of men literate:");
scanf("%d",e);
f=(e*a)/100;
printf("\nTotal number of men literate:%d",f);
g=c-f;
printf("\nTotal number of men illeterate:%d",g);
j=d-(i-f);
printf("\nTotal number of women illerate:%d",j);
return 0;
}