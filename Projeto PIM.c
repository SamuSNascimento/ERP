/******************************************************************************

Comente sempre que alterar.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void name(char *NM, FILE *fi){
    printf("Nome:\n");
    gets(NM);
    fprintf(fi, "%s; ", NM);

  return;
}
void phone(char *nu, FILE *fl){
    printf("Numero:\n");
    gets(nu);
    fprintf(fl, "%s; ", nu);
    
  return;
}
void CPF(char *pf, FILE *fe){
    printf("CPF:\n");
    gets(pf);
    fprintf(fe, "%s; ", pf);

  return;
}
void gmail(char *email, FILE *fi){
    printf("E-MAIL:\n");
    scanf("%s", email);
    fprintf(fi, "%s\n", email);
}

int main()
{
    char nome[50], cpf[11], fone[50], linha[50], e_mail[20];
    int cont = 5;
    int opcao = 1;
    int op2 = 0;
    char *resultado;

    FILE *file;
    while (op2 == 0)
 {
    
    printf("\n\tINVESTIMENTOS SSC\n\n");
    printf("Digite 1 para se cadastrar:\n");
    printf("Digite 2 se já tem cadastro:\n");
    scanf("%d", &cont);
    system("cls");

    switch (cont)
    {
    case 1:
    //Abrindo arquivo
    file = fopen("Alunos_Unip", "a");
    if(file == NULL){
        printf("não deu mermão");
        return 1;
        }  
        opcao = 1;
        while(opcao != 0){
        gets(nome);
    
        name(nome, file);
        system("cls");
        phone(fone, file);
        system("cls");
        CPF(cpf, file);
        system("cls");
        gmail(e_mail, file);
        system("cls");

            printf("Cadastro executado com sucesso...\n");
            printf("Vamos continuar?(se nao,digite 0):\n");
            scanf("%d", &opcao);
            system("cls");
        }
        fclose(file);
    break; 
     
    case 2:
    file = fopen("Alunos_Unip.txt", "r");
    if(file == NULL){
        printf("não deu mermão");
        return 1;
        }
        while(!feof(file)){
       resultado = fgets(linha, 41, file);
        if(resultado){
            printf("%s", linha);
        }
        }
        fclose(file);
        printf("Digite 0 para continuar:");
        scanf("%d", &op2);
        system("cls");
        break;
    }
    
 }
    
    return 0;
}