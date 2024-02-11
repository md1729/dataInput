#include<stdio.h>
main(){
char c;
char text[20];
int number1;
float number2;
double number3;
printf("Enter a Character:");
scanf("%c",&c);
printf("Enter a Text:");
scanf("%s",&text);
printf("Enter a integer:");
scanf("%d",&number1);
printf("Enter a float type number:");
scanf("%f",&number2);
printf("Enter a number of type Double:");
scanf("%lf",&number3);


printf("%c\n",c);
printf("%s\n",text);
printf("%d\n",number1);
printf("%.2f\n",number2);
printf("%lf\n",number3);

	
	
}
