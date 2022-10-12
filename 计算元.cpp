#include<stdio.h>
int main(){
	float r,h;
	float c,a,b,e,f;
	printf("请输入圆的半径与圆柱的高");
	scanf("%f%f",&r,&h);
	
	c=2*3.14*r;
	a=3.14*r*r;
	b=4*3.14*r*r;
	e=(4.0/3)*3.14*r*r*r;
	f=3.14*r*r*h;
	
	printf("圆周长是%.2f\n",c);
	printf("圆面积是%.2f\n",a);
	printf("圆球表面积是%.2f\n",b);
	printf("圆球体积是%.2f\n",e);
	printf("圆柱体积是%.2f\n",f);
	
	
	
	
	return 0; 
	
	
}
