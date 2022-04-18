#include <stdio.h>  //inclue a biblioteca com os comandos de C como printf
#include <stdlib.h> //inclue a biblioteca que disponibiliza comandos com exit
#include <locale.h> //inclue op��es de linguagens

//declarando constantes
//#define NUMERO_DE_TENTATIVAS 5


int main() // main � o ponto de partida
{
    setlocale(LC_ALL, "Portuguese"); //o que esta em ingles fica em portugues como os ascentos

    //cabe�alho do jogo

    printf("*******************************************\n"); // "\n" � utilizado para descer uma linha
    printf("Bem vindo ao mais novo jogo de adivinha��o!\n");
    printf("*******************************************\n");

    //criando variaveis

    int numsecreto, chute; //declara��o de variaveis, int = numero inteiro, char(string) = texto, float = numero com decimal,

    // substituido por define//int NTentativas = 5; //numero de tentativas

    numsecreto = 43; //dps por em aleatorio

    //for (int i =1;  i <= NUMERO_DE_TENTATIVAS; i++) { // for em loop infinito: for (;;) e for siginifica colocar um trecho de comando em repeti��o
            // as tr�s partes do for() est�o separadas por ponto e v�rgula (;), a primeira � a vari�vel que ser� usada de contador, a segunda � a condi��o de parada do loop, a terceira � o incremento

    //int ganhou = 0;
    int tentativa = 1;

    while(1) { //loops infinitos tem que acabar com break em algum momento

        printf("   Tentativa %d\n", tentativa);
        printf("Qual � o seu chute?  ");
        scanf("%d", &chute); //faz a leitura do teclado e guarda em uma variavel, toda variavel tem q ter um & antes

        if(chute < 0 ) {
            printf("voc� n�o pode chutar numeros negativos\n");
            //i--;

            continue; //segue para a proxima intera��o, volta para o i++
        }

        printf("Seu chute foi %d \n", chute);

        int acertou = chute == numsecreto;

        if (acertou) { //o if � sinonimo para "se", dentro das parenteses vai a condi��o, e o igual de compara��o s�o dois simbolos de igual "=="
            printf("Voc� acertou! Como voc� � habilidoso, meus parab�ns! \n");  // acertou
            printf("Voc� jogou bem, jogue mais vezes!\n");

            // parar de executar o for
            //break; // vai parar o loop e ir ao final do while/for pulando tudo
            break;
        }
        else { // caso contrario...

            int maior = chute > numsecreto; // essa variavel esta declarada apenas dentro dessas chaves n�o podendo ser usada no main como um todo, ou seja nas demais chaves externas

            if (maior) {
                printf("Seu chute foi maior que o numero secreto \n");
            }
            else { //if (chute < NS) pode ser escrito assim tbm
                printf("Seu chute foi menor que o numero secreto \n");
            }
            printf("============================= \n");
            printf("Voc� infelizmente esta errado \n"); // errou
            printf("tente novamente, e nunca desista! \n");
            printf("============================= \n");
        }

        tentativa = tentativa + 1; //ou tentativa++ "sinonimos"

    }

    // printf("O numero %d � o secreto, n�o espalhe por ai em!", NS); //%d � uma mascara que indica numero

    printf("____________________________\n");
    printf("Voc� acerou em %d tentativas\n", tentativa);
    printf("Fim de jogo, at� a pr�xima\n");
    printf("''''''''''''''''''''''''''''\n");

    return 0; // para fechar o cmd ap�s pressionar qualquer tecla

} // chaves "{}" s�o escopos

