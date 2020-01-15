#include<stdio.h>

#define YEAR_LIMIT 2075
#define AGE_LIMIT 90

int main(){

	int year;
	printf("Enter you birth year");
	scanf("%d",&year);

	if(YEAR_LIMIT - year > AGE_LIMIT)
			printf("\nYou are not likely to be in %d\n",YEAR_LIMIT);
	else
			printf("\nHappy %d\n",YEAR_LIMIT);
}
