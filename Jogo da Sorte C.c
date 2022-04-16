#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
int num, sorteio, tentativas= 0;
char c;
setlocale(LC_ALL, "Portuguese");
srand(time(NULL));
sorteio= rand() % 100;

do{ 
     tentativas++;
     printf("\\ntentativa n�mero %d", tentativas);
     printf("\ntente adivinhar o n�mero:");
     scanf("%d", &num);
     
     if(num==sorteio){
     	printf("Acertou!");
     	break;
	 }
    
    if(num<sorteio){
        printf("Errou (tem que ser um nr. MAIOR)");
}
else{
	printf("Errou (tem que ser um nr, MENOR)");
}
printf("Tente de novo? (S/N)");
fflush(stdin);
scanf("%c", &c);

}while(c=='s' || c=='S');

return 0;
}
