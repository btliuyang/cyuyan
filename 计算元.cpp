#include<stdio.h>
int main(){
	float r,h;
	float c,a,b,e,f;
	printf("������Բ�İ뾶��Բ���ĸ�");
	scanf("%f%f",&r,&h);
	
	c=2*3.14*r;
	a=3.14*r*r;
	b=4*3.14*r*r;
	e=(4.0/3)*3.14*r*r*r;
	f=3.14*r*r*h;
	
	printf("Բ�ܳ���%.2f\n",c);
	printf("Բ�����%.2f\n",a);
	printf("Բ��������%.2f\n",b);
	printf("Բ�������%.2f\n",e);
	printf("Բ�������%.2f\n",f);
	
	
	
	
	return 0; 
	
	
}
