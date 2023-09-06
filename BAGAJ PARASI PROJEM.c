#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	
	int bagaj,el,bagajpara,elpara,toplam;
	
printf("bagajiniz: ",bagaj);
	scanf("%d", &bagaj);
printf("elinizdeki: ",el);
	scanf("%d", &el);
	
if (bagaj >15) {

	bagajpara = (bagaj - 15)*5;
	printf("Bagaj icin %d tl odeyiniz.",bagajpara); }

else {

	printf("Bagaj icin para odemenize gerek yoktur.\n"); }
	
if (el >5){
	
	elpara = (el - 5)*4;
	printf("Elinizdekiler icin %d tl odeyiniz\n",elpara);
	
}
else { 
printf("Elinizdekiler icin para odemenize gerek yoktur");
}

printf("***********************\n");	
printf("* IYI UCUSLAR DILERIZ *\n");
printf("***********************");
	
	

	
	
	
	
	
	return 0;
}
