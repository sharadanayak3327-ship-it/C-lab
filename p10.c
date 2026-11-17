#include<stdio.h>
#include<math.h>
int main(void)
{
    double a,b,c,d,r1,r2,realpart,imagepart;
    printf("Enter a,b and c:");
    scanf("%If %If %If",&a,&b,&c);
    if(a==0){
        printf("not a quadratic equation.\n");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("roots are %.2If and %.2If)n",r1,r2);
    }else if(d==0){
        r1=-b/(2*a);
        printf("equal roots=%.2If\n",r1);
    }else{
        realpart=-b/(2*a);
        imagepart=sqrt(-d)/(2*a);
        printf("roots are %.2If+%.2If i and %.2If-%.2If i\n",realpart,imagepart,realpart,imagepart);
    }
    return 0;
}