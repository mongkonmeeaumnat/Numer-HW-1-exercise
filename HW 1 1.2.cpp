#include<stdio.h>
#include<math.h>

// Function Declaration
double F(double x) ;
 
// main function
int main() {
	int n ; printf("Input Number of range\n");
	scanf("%d",&n) ;
	if(n > 10001) {
    printf("Maximum n is 10001\n");
    return 1;
    
	} else {
		double a , b , x[10001] , fx[10001] ;
	printf("Input Value of x(0) and x(n)\n") ;
	scanf("%lf %lf",&a,&b);
	double h = (b - a) / n ;
	for(int i=0;i<=n;i++) {
		x[i] = a + i*h ; // compute x(i) ;
	}
	for(int i=0;i<=n;i++) {
		fx[i] = F(x[i]) ; // compute f(x) ;
	}
	double sum = 0 ; // compute 2*(fx(1) to fx (n-1) ) ;
	for(int i=1;i<n;i++) {
		sum += 2 * (fx[i]) ;
	}
	double I = h/2.0 * (fx[0] + fx[n] + sum ) ;
	printf("I = %lf\n",I);
	
	double e = ( ( 155930.4 - I ) / 155930.4 ) * 100;
	printf("Error is %lf percentage",e) ;
}

	
	
}
 
// Function Definition 
double F(double x) {
 	x = 4*pow(x,5) - 3*pow(x,4) + pow(x,3) - 6*x + 2 ;
 	return x ;
 }
