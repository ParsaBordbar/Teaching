#include <stdio.h> 

#define PI 3.1415

int main() 
{ 

    float radius;
    printf("Enter The Radius: ");
    scanf("%f" ,&radius);

	float area; 

	area = PI * radius * radius; 
	printf("Area of Circle of radius %.2f: %.2f", radius, area); 

	return 0; 
}
