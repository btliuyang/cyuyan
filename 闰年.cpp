#include<stdio.h>
int main(){
	
	int a;
	printf("�������\n",a);
	scanf("%d",&a);
	
	if(a %4== 0&&a%100 != 0)
	printf("%d������\n",a);
	else if(a%400 == 0)
	printf("%d������\n",a);
	else
	printf("%d��������\n",a);
	
	return 0; 
	
	
}
