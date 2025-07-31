#include <stdio.h> 
int main() {
    int escolhaPeca;
    printf("Escolha uma peça para jogar\n");
    printf("[1] Rainha\n");
    printf("[2] Torre\n");
    printf("[3] Bispo\n");
    printf("[4] Cavalo\n");
    printf("Escolha um deles: ");
    scanf(" %d", &escolhaPeca);
    switch (escolhaPeca)
    {
    case 1:
        char direcao[10];
        char pecaEscolhida[10] = "Rainha";
        int casas;
        int contagem = 1;
        printf("A %s anda em qualquer direção. Escolha a direcao: ");
        scanf(" %s", direcao);
        printf("Quantas casas ela vai andar: ");
        scanf(" %d", &casas);
        printf("A %s vai se mover para a %s, andando %d casas\n", pecaEscolhida, direcao, casas);
        while (contagem <= casas)
        {
            printf("Movendo a rainha para a %s %d°\n", direcao, contagem);
            contagem++;
        }

        break;

        case 2: 
        char direcao2[10];
        char pecaEscolhida2[10] = "Torre";
        int casas2;
        char posicao2[20];
        printf("A %s Move-se em linha reta horizontalmente ou verticalmente. Escolha a direcao: ");
        scanf(" %s", direcao2);

        printf("Escolha o sentido: ");
        scanf(" %s", posicao2);
        printf("Quantas casas ela vai andar: ");
        scanf(" %d", &casas2);
        printf("A %s vai se mover na %s para a %s, andando %d casas\n", pecaEscolhida2, direcao2, posicao2, casas2);
        for (size_t contagem = 1; contagem <= casas2; contagem++)
        {
            printf("Movendo a %s na %s para a %s %d°\n",pecaEscolhida2, direcao2, posicao2, contagem);
        }
        
        break;
    
        case 3:
        char direcao3[10];
        char pecaEscolhida3[10] = "Bispo";
        int casas3;
        char posicao3[20];
        int contagem3 = 1;
        printf("A %s  Move-se na diagonal. Escolha a direcao(CIMA | BAIXO): ");
        scanf(" %s", direcao3);
        printf("Escolha o sentido(DIREITA | ESQUERDA): ");
        scanf(" %s", posicao3);
        printf("Quantas casas ela vai andar: ");
        scanf(" %d", &casas3);
        printf("A %s vai se mover na %s para a %s, andando %d casas\n", pecaEscolhida3, direcao3, posicao3, casas3);
        do{
        printf("Movendo o %s para %s e para a %s %d°\n",pecaEscolhida3, direcao3, posicao3, contagem3);
        contagem3++;
        }while( contagem3 <= casas3);
            break;

        case 4: 
            int c = 1;
            char sentidoCavalo[10];
            char direcaoCavalo[10];
            char ladoCavalo[10];
            int contagemCavalo = 1;
            printf("O cavalo anda em L, tendo dois sentidos, horizontal ou vertical. Escolha o sentido: ");
            scanf(" %s", sentidoCavalo);

            printf("Agora escolha a direção que o cavalo vai se mecher, CIMA | BAIXO | LADO DIREITO | LADO ESQUERDO: ");
            scanf(" %s", direcaoCavalo);

            printf("No final do L ele vai para um dos dois lados, esquerda ou direita. Escolha o lado: ");
            scanf(" %s", ladoCavalo);

            for(size_t i = 0; i < contagemCavalo; i++){
                do{
                    printf(" %s para %s - %d°\n", sentidoCavalo, direcaoCavalo, c);
                    c++;
                }while(c <= 2);
                printf(" vai ficar na casa da %s", ladoCavalo);
            }

            
            break;

    default:
        printf("Escolha uma das opções");
        break;
    }

}