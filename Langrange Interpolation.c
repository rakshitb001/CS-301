#include<stdio.h>
int main(){
 int n ;
 float v;
 float  x[10] ,f[10];
 printf("Enter the value of n: and v:\n");
 scanf("%d %f",&n,&v);
 	int i=1;
	for(i;i<=n;i++){
		printf("Enter the value of x[%d]: ",i);
		scanf("%f\n",&x[i-1]);
		printf("Enter the value of f[%d]: ",i);
		scanf("%f\n",&f[i-1]);		
	}
	float sum=0 ;
	for(i;i<=n;i++){
	    float prodfunc=1;
	    int j=1;
		for(;j<=n;j++){
			if(j!=i){
				prodfunc = (prodfunc*(v-x[j-1]))/(x[i-1]-x[j-1]);
			}
		}
		sum=sum+f[i-1]*prodfunc;	
	}
	

printf("The value of x[%d]:%f and f[%d]:%f",&i,&x[i-1],&i,&f[i-1]);
	return 0;
}
