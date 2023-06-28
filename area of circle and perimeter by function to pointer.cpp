#include<stdio.h>
int main()
{ 
  float  r,a,p;
  void circle(float r,float *a,float *p);
  printf("enetr radius");
  scanf("%f",&r);
  circle(r,&a,&p);
  printf("area of circle=%f\n and perimeterof circle =%f",a,p);
  
}
 void circle(float r,float *a,float *p)
{
	*a=3.14*r*r;
	*p= 2*3.14*r;
 } 
	
