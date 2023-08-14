#include <stdio.h>
#include <string.h>

// definindo a estrutura para o cadastro
struct Cadastro {
    char nome[50];
    int idade;
    int matricula;
    char endereco[100];
    char curso[50];
    char periodo[20];
    char disciplinas[200];
};

int main() {
    // criando uma variável para armazenar o cadastro
    struct Cadastro aluno;

    // campos do cadastro
    printf("Cadastro de Aluno\n");
    printf("Nome: ");
    fgets(aluno.nome, sizeof(aluno.nome), stdin);
    printf("Idade: ");
    scanf("%d", &aluno.idade);
    printf("Matrícula: ");
    scanf("%d", &aluno.matricula);
    getchar(); // limpar o buffer do teclado
    printf("Endereço: ");
    fgets(aluno.endereco, sizeof(aluno.endereco), stdin);
    printf("Curso: ");
    fgets(aluno.curso, sizeof(aluno.curso), stdin);
    printf("Período: ");
    fgets(aluno.periodo, sizeof(aluno.periodo), stdin);
    printf("Disciplinas: ");
    fgets(aluno.disciplinas, sizeof(aluno.disciplinas), stdin);

    // apresentando todas informações do cadastro
    printf("\nInformações do Cadastro:\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Endereço: %s", aluno.endereco);
    printf("Curso: %s", aluno.curso);
    printf("Período: %s", aluno.periodo);
    printf("Disciplinas: %s\n", aluno.disciplinas);

    return 0;
}
