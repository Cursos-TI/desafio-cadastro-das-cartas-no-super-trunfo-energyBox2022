/*#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

*/

#include <stdio.h>

int main(){

    char estado[2], codigo[4], nomecidade[20];
    int populacao, pontosturisticos;
    float area, PIB;
    

    printf("Carta 1 \n"); //impressão identificando qual carta estará sendo preenchida

    printf("Digite uma letra de A a H para representar um dos oito estados: \n"); //impresão do questionário
    scanf("%s", &estado); //Leitura de dados

    printf("Digite o código da carta que é a letra do estado seguido dos números 01 a 04 (ex. A01): \n");//impresão do questionário
    scanf("%s", &codigo);//Leitura de dados

    printf("Digite o nome da cidade: \n");//impresão do questionário
    scanf("%s", &nomecidade);//Leitura de dados

    printf("Digite o numero de habitantes: \n");//impresão do questionário
    scanf("%i", &populacao);//Leitura de dados

    printf("Digite a tamanho da área (km^2): \n");//impresão do questionário
    scanf("%f", &area);//Leitura de dados

    printf("Digite valor do PIB: \n");//impresão do questionário
    scanf("%f", &PIB);//Leitura de dados

    printf("Digite a quantidade de pontos turisticos: \n");//impresão do questionário
    scanf("%d", &pontosturisticos);//Leitura de dados


    printf("Carta 2 \n"); //impressão identificando qual carta estará sendo preenchida

    printf("Digite uma letra de A a H para representar um dos oito estados: \n");//impresão do questionário
    scanf("%s", &estado);//Leitura de dados

    printf("Digite o código da carta que é a letra do estado seguido dos números 01 a 04 (ex. A01): \n");//impresão do questionário
    scanf("%s", &codigo);//Leitura de dados

    printf("Digite o nome da cidade: \n");//impresão do questionário
    scanf("%s", &nomecidade);//Leitura de dados

    printf("Digite o numero de habitantes: \n");//impresão do questionário
    scanf("%i", &populacao);//Leitura de dados

    printf("Digite a tamanho da área (km^2): \n");//impresão do questionário
    scanf("%f", &area);//Leitura de dados

    printf("Digite valor do PIB: \n");//impresão do questionário
    scanf("%f", &PIB);//Leitura de dados

    printf("Digite a quantidade de pontos turisticos: \n");//impresão do questionário
    scanf("%d", &pontosturisticos);//Leitura de dados

    //Abaixo segue a impressão dos dados fornecidos

    printf("ACarta 1 \n");
    printf("A letra do estado é: %s \n", estado);
    printf("O código da carta é: %s \n", codigo);
    printf("O nome da cidade é: %s \n", nomecidade);
    printf("O número de habitantes é: %i \n", populacao);
    printf("O tamanho da área é: %f \n", area);
    printf("O valor do PIB é: %f \n", PIB);
    printf("A quantidade de pontos turísticos é: %d \n", pontosturisticos);


    printf("Carta 2 \n");
    printf("A letra do estado é: %s \n", estado);
    printf("O código da carta é: %s \n", codigo);
    printf("O nome da cidade é: %s \n", nomecidade);
    printf("O número de habitantes é: %i \n", populacao);
    printf("O tamanho da área é: %f \n", area);
    printf("O valor do PIB é: %f \n", PIB);
    printf("A quantidade de pontos turísticos é: %d \n", pontosturisticos);

    getchar();

    return 0; 
}
