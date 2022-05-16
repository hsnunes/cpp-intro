#include <iostream>

using namespace std;

int main()
{
    // Imprimindo textos na tela da abertura do jogo/aplicação
    cout <<"***************************************************" << endl;
    cout <<"******* Bem-vindos ao jogo da advinhação! *********" << endl;
    cout <<"***************************************************" << endl;

    // Declarando uma constante inteira com o número escolhido para advinhação
    const int NUMERO_SECRETO = 44;
    // Variável de controle de tentaivas
    bool nao_acertou = true;
    // Controlando a quantidade de tentativas
    int tentativas = 0;

    // Enquanto nao_acertou for verdadeira, o programa se repete
    while (nao_acertou)
    {
        // Somando as tentaivas
        tentativas++;

        // Criando variáveis par acontrole de informações sobre a constante
        int chute;

        // Imprimindo quantidade de tentativas e uma mensagem para escolher um número
        // Chute será o valor escolhido pelo usuário, a primeira tentaiva
        cout <<"Tentativa " << tentativas <<", qual seu chute? ";

        // Recebendo o valor digitado do usuário para a variável chute
        cin >> chute;

        // Informando na tela o valor digitado
        cout <<"O valor do seu chute é: " << chute << endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        /** Verificando as condições do chute do usuário */
        if (acertou)
        {
            cout <<"Parabens! Você acertou o número secreto!" << endl;
            // nao_acertou vira FALSE, para finalizar a repetição da aplicação
            nao_acertou = false;
        }
        else if(maior)
        {
            cout <<"Seu chute foi maior que o número secreto!" << endl;
        }
        else
        {
            cout <<"Seu chute foi menor que o número secreto!" << endl;
        }
        cout << endl;
    }

    cout << endl;
    // Informando a quantidade de tentativas e finalizando o jogo
    cout <<"Você teve " << tentativas <<" Tentativas. Fim de Jogo!" << endl;

}