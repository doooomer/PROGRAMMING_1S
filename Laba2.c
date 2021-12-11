#include <stdio.h> 
#include <math.h> 
    
int main() 
{ 
    
float z1,z2,x; 
    
scanf("%f", &x); 
    
z1 = ((cos(x) + sin(x)) / (cos(x) - sin(x))); 
    
z2 = ((sin(2*x)) / (cos(2*x))) + ((1) / (cos(2*x))) ; 
    
printf("%f\n", z1);
    printf("%f" , z2);
}