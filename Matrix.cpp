#include <stdio.h>
int main(){
	int Asutun=4,Asatir=3;
	int Bsutun=2,Bsatir=4;
	
	int A[Asatir][Asutun]={{1,3,5,7},{2,4,6,8},{1,2,3,4}};
	int B[Bsatir][Bsutun]={{10,1},{5,2},{20,1},{10,2}};
	
	int i,j;
	
	printf("A matrisi:\n");
	for(i=0;i<Asatir;i++){
		for(j=0;j<Asutun;j++){
			printf("[ %d ]",A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("B matrisi:\n");
	for(i=0;i<Bsatir;i++){
		for(j=0;j<Bsutun;j++){
			printf("[ %d ]",B[i][j]);
		}
		printf("\n");
	}
	
	int C[3][2];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			C[i][j]=0;
		}
	}
	
	
	int toplam=0;
	int counter;
	
		
	int var1=-1,var2=0;
	for(counter = 0 ; counter <6; counter++ ){
		if(counter%2==0){var1++;}
		var2=counter%2;
		
		for(j=0;j<Bsatir;j++){
			printf("A[%d][%d]=%d * B[%d][%d] =%d\n",var1,j,A[var1][j],j,var2,B[j][var2]);
			toplam+= A[var1][j] * B[j][var2];
			
			
		}
		C[var1][var2]=toplam;
		printf("= %d\n",toplam);
		toplam=0;
		printf("\n");
	}
	

	printf("\n");
	printf("A matrisi ile B matrisinin carpimi sonucu olusan C matrisi:\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("[ %d ]",C[i][j]);
		}
		printf("\n");
	}
	
	

	
	
	return 0;
}
