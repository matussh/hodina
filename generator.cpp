#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int *Generator(int n):
int main(){
    int n=15;
    int *p=Generator(n);
    int *temp=p;
	for(int i=0; i<n; i++){
		printf("%d ", *temp++ );
	}	
    
    
	
    return 0;
}

int *Generator(int n){
	srand(time(NULL));
	int *pole=(int*) malloc(n*sizeof(int));
	int i;
	for (i=0; i<n; i++){
		*(pole+i)=rand()%99+1;
	}	
	
	
	return pole;
}
