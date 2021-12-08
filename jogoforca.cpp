#include <iostream>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <string> 
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
	char tam_palavra, palavra[20], letra[20],mascara[20]="_";
	int vidas=3, x=0,i=0, pontos=0, dica=0;
	char quant[5][7]= {"uma","duas","tres","quatro","cinco"};
	int num;
	char palavras[100][20]={"laranja", "melancia","melao", "banana","uva","framboesa","amora","maca","graviola","abacate","goiaba","kiwi","tangerina","frutadoconde","acerola","pitanga","morango","ponkan","limao","pera",
	"carro","caminhao","caminhonete","bicicleta","moto","barco","canoa","navio","aviao","skate","patinete","monociclo","triciclo","caravela","trator","helicoptero","jangada","onibus","trem","metro",
	"pudim","saladadefruta","bolo","brigadeiro","torta","mousse","quindin","docedeleite","pave","gelatina","sonho","sorvete","flan","bemcasado","bombom","chocolate","trufa","alfajores","pavlova","pedemoleque",
	"abobora","abobrinha","alcachofra","aspargos","beterraba","cenoura","cogumelo","ervilha","inhame","pepino","pimentao","rabanete","tomate","fava","batatadoce","beringela","chuchu","batata","cebola","mandioca",
	"cachorro","gato","leao","vaca","pato","cavalo","marreco","tigre","panda","urso","coelho","capivara","camondongo","camelo","ornitorrinco","bode","cabrito","carneiro","pavao","camaleao"};//colocar 100 palavras aqui
	srand(time(0));
	num=rand()%100;
	printf("%i \n",num);
	printf("%s \n", palavras[num]);
	strcpy(palavra, palavras[num]);
	tam_palavra=strlen(palavra);//strlen mostra a quantidade de caracter no array
	printf("%i\n",tam_palavra);
	for(i=0;i<tam_palavra;i++){
		mascara[i]='*';
	}

	printf("\n se voce nao sabe te dou uma dica.. aperte 1 para ganhar a dica:\n\n");
	scanf("%i",&dica);
	if(dica == 1){
		if(num<20){
			printf("\n\n faz suco e vende na feira...!!!\n\n");
		}else if(num<40){
			printf("\n\n te leva mais rapido do que andar... se ainda não descobriu ...é um meio de transporte\n\n");
		}else if(num<60){
			printf("\n\n é gostoso e vem sempre depois da comida.... não sabe ainda? é a sobremesa \n\n");
		}else if(num<80){
		printf("\n\n è bom e geralmente tem na sopa.... se não sabe... tem q se alimentar melhor... sao legumes\n\n");
	}else if(num<=100){
		printf("\n\n é o que mais tem no zoologico...essa vc sabe ne? Animal \n\n");
	}else{
		printf("\n\n	ai sim ....vai na raça mesmo?\n\n");
}
	
}

	
//	printf("%s \n", _DATE_);
	//o jogo continua enquanto vida>0
	do{
		x=0;//x= acumulador de quantidade de acertos na jogada:
		printf("\n[%s] - digite uma letra: ", mascara);
		scanf("%s",&letra);
		
		for(i=0;i<strlen(palavra);i++){
			if(letra[0]==palavra[i]){
				mascara[i]=palavra[i];
				pontos++;
				x++;
				
			}
		}
		if(x==0){
			vidas--;
			if(vidas==0){
				printf("\n\n hihi voce se lascou, ta enforcado!!!");
				printf("\n\nA palavra era: %s", palavra);
				break;
				
			}else{
				printf("\n Voce errou!!! so tem mais %d vida(s)", vidas);
				
			}
		}else{
			if(pontos==tam_palavra){
				printf("\Voce teve sorte dessa vez, ganhou!!!");
				printf("\n a palavra e:%s", palavra);
				break;
			}else{
				printf("\n voce acertou %s letras !!", quant[x-1]);
			}
		}
	}while(vidas>0);
	printf("\n\n");
	return 0;
}
