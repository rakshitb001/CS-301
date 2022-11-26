#include<stdio.h>
#include<math.h>

float F(float x) {
	return 2*x;
}   

float absVal(float x){
	return x<0 ? x*-1 : x;
}

float relErr(float x1, float x0){
	return absVal((x1-x0)/x1);
}

int main () {
	float x1,x,h,e,S1;
	float I0,I1,u,v;
	int k,i,j;
	printf("Enter value of x1,h,e and k(k is in form of 2^p+1) :");
	scanf("%f %f %f %d",&x1,&h,&e,&k);
	float f[k+1];
	x = x1;

	for(i=1;i<=k;i++) {
		f[i]=F(x);
		x=x+h;
	}

	S1= (f[1]+f[k])/2;
	for(j=2;j<=k-1;j++) {
		S1= S1+f[i];
	}

	I1= h* S1;
	i = k-1;
	
	do {
	I0=I1;
	x = x1 + (h/2);
	for(j=1;j<=i;j++)	{
		S1 = S1 + F(x);
		x = x+h;
	}
	i=2*i;
	h=h/2;
	I1=h*S1;
	} while(relErr(I1, I0)>=e);
	printf("Integrationn of function is %f",I1);
	return 0;
}




