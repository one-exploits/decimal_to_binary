#include <stdio.h>
int dec_to_bin(int,int*);
int main(){
	int n;
	int bit[64]={0};
	scanf("%d",&n);
	printf("\n");
    printf("\t\t\033[30m\033[42mB i n a r y   O f   %d \033[0m\n",n);
   for(int i=0;i<=dec_to_bin(n,bit);i++){

   	printf("%d",bit[i]);
   }

	
}
		
	

int dec_to_bin(int n,int *array_bit){
	int rem=0;
	int i=0;
	int bit[64]={0};
	int k=0;
	
	while(n){
		rem=n%2;
		n=n/2;
		bit[i]=rem;
		//printf("%d",bit[i]);
		i++;		
			
	}
	for(int j=(i-1);j>=0;j--){
		
		*(array_bit+k)=bit[j];
		k++;
		
	}
	
	return (i-1);
}
