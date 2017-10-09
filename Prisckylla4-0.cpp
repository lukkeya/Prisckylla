#include<stdio.h>
#include<locale.h>
#include<conio.h>
int main(){
	int A[4];
	int B[4];
	int Sa[4];
	int Reg[16]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	int Mem[16];
	int PC = 1;
	int overflow = 0;
	
	printf("1 Valor menos Significativo para A: ");
	scanf("%d", &A[1]);
	printf("2 Valor menos Significativo Para A: ");
	scanf("%d", &A[2]);
	printf("3 Valor menos Significativo Para A: ");
	scanf("%d", &A[3]);
	printf("4 Valor menos Significativo Para A: ");
	scanf("%d", &A[4]);
	printf("Numero Binario A: %d%d%d%d", A[4],A[3],A[2],A[1]);
	getch();
	printf("\n1 Valor menos Significativo para B: ");
	scanf("%d", &B[1]);
	printf("2 Valor menos Significativo Para B: ");
	scanf("%d", &B[2]);
	printf("3 Valor menos Significativo Para B: ");
	scanf("%d", &B[3]);
	printf("4 Valor menos Significativo Para B: ");
	scanf("%d", &B[4]);
	printf("Numero Binario B: %d%d%d%d \n", B[4],B[3],B[2],B[1]);
	getch();
	if(A[1]+B[1] == 2){
		Mem[1] = 0; //saida 1
		Mem[2] = 1; //co 2
 	}
 	else if(A[1]+B[1] == 1){
 		Mem[1] = 1; //Saida 1
 		Mem[2] = 0; //Carry out 2
	 }
	 else if(A[1]+B[1] == 0){
	 	Mem[1] = 0; // saida 1
	 	Mem[2] = 0; // co 2
	 }
	 printf("Saida 1:	%d\n",Mem[1]);
	 printf("Carry out 2:	%d\n",Mem[2]);
	 getch();
	 //Carry in  / out 2
	if(A[2]+B[2]+Mem[2]==3){
		Mem[3] = 1;//saida 2
		Mem[4] = 1;//carry out 3
		
	}
	else if(A[2]+B[2]+Mem[2] == 2){
		Mem[3] = 0;
		Mem[4] = 1;
	}
	else if(A[2]+B[2]+Mem[2] == 1){
		Mem[3] = 1;
		Mem[4] = 0;
		
	}
	
	printf("\nSaida 2:	%d \n",Mem[3]);
	printf("Carry out 3:	%d \n", Mem[4]);
	getch();
	// Carry in / out 3
	if(A[3]+B[3]+Mem[4]==3){
		Mem[5] = 1;
		Mem[6] = 1;
		
	}
	else if(A[3]+B[3]+Mem[4] == 2){
		Mem[5] = 0;
		Mem[6] = 1;
	}
	else if(A[3]+B[3]+Mem[4] == 1){
		Mem[5] = 1; //Saida 3
		Mem[6] = 0; // Co 4
		
	}
	
	printf("\nSaida 3:	%d \n",Mem[5]);
	printf("Carry out 4 :	%d \n", Mem[6]);
	getch();
	if(A[4]+B[4]+Mem[6]==3){ //A4+b4+Co4
		Mem[7] = 1;//sa 4
		Mem[8] = 1;//co 5 - overflow //overflow = 1; 
		
	}
	else if(A[4]+B[4]+Mem[6] == 2){
		Mem[7] = 0;
		Mem[8] = 1;//overflow = 1; //
	}
	else if(A[4]+B[4]+Mem[6] == 1){
		Mem[7] = 1;
		Mem[8] = 0; //overflow = 0; //
		
	}else if(A[4]+B[4]+Mem[6]== 0){
		Mem[7] = 0;
		Mem[8] = 0; //overflow = 0; //
		
	}
	
	printf("\nSaida 4:	%d \n",Mem[7]);
	printf("Overflow:	%d\n ",Mem[8]);
	getch();
	printf("\n\nSoma = %d%d%d%d\n", Mem[7],Mem[5],Mem[3],Mem[1]);
	getch();
	int i = 0;
	int numReg[16]{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	while(i<12){
		Mem[i] = A[i];
		printf("\nRegistrador %d: Com valor: %d\n",numReg[i], Mem[i]);		
		i++;
		
		while(i >=5 && i<=8){
			Mem[i] = B[i];	
			printf("\nRegistrador %d: Com valor: %d\n",numReg[i], Mem[i]);		
			i++;	
		}
	
		while(i >=9 && i <12){
			Mem[i] = Sa[i];
			printf("\nRegistrador %d: Com valor: %d\n",numReg[i], Mem[i]);		
			i++;
		}
				
		if(i>12){
			break;
			
		}
		
	}
	
	
	getch();
		
	
}


/*while(PC <= 16){
		int Con = 1;
		if(Mem[Con] <= 16){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 1){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 2){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 3){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 4){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 5){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 6){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 7){
			Reg[Con] = Mem[Con];
			PC++;
		}	else if(Mem[Con] == 8){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 9){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 10){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 11){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 12){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 13){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 14){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 15){
			Reg[Con] = Mem[Con];
			PC++;
		}else if(Mem[Con] == 16){
			Reg[Con] = Mem[Con];
			PC++;
		}
		*/
