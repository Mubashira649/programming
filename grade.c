#include<stdio.h>
int main()
{ 
float marks1,marks2,marks3,average ;
printf("Enter marks for subject 1:");
scanf("%f",& marks1);
printf("Enter the marks for subject 2:");
scanf("%f",& marks2);
printf("Enter the marks for subject 3:");
scanf("%f",& marks3);
average =(marks1 + marks2+ marks3)/ 3;
printf("average marks; %.2f\n",average);
if(average >=90){
	printf("grade: A\n");
}
else if (average >=80){
	printf("grade: B\n");
}
else if (average >=70){
	printf("grade: C\n");
}
else if (average >=60){
	printf("grade: D\n");
}
return 0;
}
