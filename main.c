#include <stdio.h>


int main(){

	printf("%s\n","I want pizza");

	printf("Integer %d\n",34);
	printf("Long %lf\n",2342.24);

	int x = 23;
	float y = 34.324;
	double z = 343432.343454;

	printf("Double  %f\n",z);
	printf("Double with 4 sig fig %0.4lf\n",z);

	char c = 'a';
	printf("Character %c %c\n",c,'a');


	unsigned w = 24;
	printf("%d\n",w);

	// overflow in conversion
	// int s = 1234567890123465790;
	//printf("%d\n",s)

	return 0;
}
