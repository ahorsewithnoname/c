
#include <iostream>
#include <math.h>
using namespace std; 

float func(float x, float y) 
{ 
	return 120*exp(-0.4*x)-0.2*y; 
} 


void euler(float x0, float y, float h, int passos) 
{ 
	float temp = -0; 


	for(int i=0;i<=passos;i++) 
	{ 
		temp = y; 
		y = y + h * func(x0, y); 
		x0 = x0 + h; 
		
			cout << "Passo = "<< i << " ; y = " << y << endl; 
		
	} 	
} 

int main() 
{ 

	float x0 = 0;	 
	float y0 = 7.6; 
	float h = 0.1; 

	float passos = 50; 

	euler(x0, y0, h, passos); 
	system("PAUSE");
	return 0; 
} 

	
	
	
	

