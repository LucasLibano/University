#include <stdio.h>
#include <string.h>

int main (){
	
	char usuario [50], senha [50];
	int tentativas = 3;
	char usuario_login[50], senha_login[50];
	
	//Inicio do programa
	
	printf("=== UNASP ===\n");
	printf("=== CADASTRO DE USUARIO ===\n");
	
	printf("Digite um nome de usuario: \n");
	scanf( "%s", &usuario);
	printf("Digite uma senha: \n");
	scanf(" %s", &senha);
	
	printf("=== Cadastro realizado com sucesso! === \n");
	
	//Login e Verificacaoo
	
	while (tentativas > 0){
	printf("Digite o seu login: \n");
	scanf(" %s", &usuario_login);
	printf("Digite a sua senha: \n" );
	scanf(" %s", &senha_login);
	
	if(strcmp(usuario_login,usuario) == 0 && strcmp (senha_login,senha) == 0){
	break;
	
	}
	
	 else {
		
	tentativas--;
	
	printf("Tentativas restantes: %i \n", tentativas);
	
	} 
	
	if (tentativas == 0){
		
	printf("Voce excedeu o numero de tentativas: %i", tentativas);
	printf("\n");
	return 0;
		
	}
	
	}
	
	printf("=== Login realizado com sucesso ===");
	
	printf("\n");
	printf("\n");
	
	
	//Menu Principal
	
	int opcao,opcao_editar;
	char nome[50] = "",turma [10] = "";
	float nota;
	
	while(1){
	printf("=== MENU PRINCIPAL ===\n");
	
	printf("1 - Cadastrar Aluno \n");
	printf("2 - Editar aluno\n");
	printf("3 - Mostrar Aluno \n");
	printf("4 - Sair \n ");
	printf("Escolha 1 opcao.\n");
	scanf("%i", &opcao);
	
		switch (opcao) {
		case 1:
		printf("=== Cadastrar aluno === \n");
		
		printf("Digite o nome do aluno: \n");
		scanf(" %s", &nome);
		printf("Digite a turma do aluno: \n");
		scanf(" %s", &turma);
		printf("Digite a nota do aluno: \n");
		scanf("%f", &nota);
		
		printf("=== DADOS DO ALUNO === \n");
		printf("Nome do aluno: %s \n", nome);
		printf("A turma do aluno e :%s \n", turma);
		printf("A nota do aluno e: %.1f  \n", nota);
		
		printf("=== Aluno cadastrado com sucesso=== \n");
		printf("\n");
		break;
		
		case 2:		
	    printf("=== Editar Aluno === \n");
	    
	    printf("1 - Editar Nome \n");
	    printf("2 - Editar Turma \n");
	    printf("3 - Editar Nota \n");
	    scanf("%i", &opcao_editar);
	    printf("\n");
	    
	    
	    //Editar
	    	    
	    switch(opcao_editar){
	    case 1: 
	    printf("Digite um novo nome: \n");
	    scanf(" %s", &nome);
	    printf("=== Dados Atualiazdos === \n");
	    printf("Nome: %s \n", nome);
	    printf("\n");
	    break;
	    
	    case 2:
	    	
	    printf("=== Editando nota dos aluno === \n"); 
	    	    
	    printf("Digite uma nova turma: \n");
	    scanf(" %s", &turma);
	    printf("=== Dados Atualizados === \n");
	    printf("Turma: %s \n", turma);
	    printf("\n");
	    break;
	    
	    case 3:
	    printf("=== Editando nota dos aluno === \n"); 
	    
	    printf("Digite uma nova nota: \n");
	    scanf("%f", &nota);
	    printf("=== Dados Atualizados === \n");
	    printf("Nota: %.1f", nota);
	    printf("\n");
	    break;
	    
	    default:
	  	
	  	printf("Opcao invalida\n");
	    
	  }
	  
	  break;
	  
	  case 3:
	  	printf("Aluno: %s \n", nome);
	  	printf("Turma: %s \n", turma);
	  	printf("Nota: %.1f\n" , nota);
	  	printf("\n");
	  	break;
	  	
	  	case 4:
	  	printf("Saindo do programa... \n");
	  		  	
	  	return 0;
	  	
	  	default:
	  	
	  	printf("Opcao invalida\n");
	  	
	  	
	  	
	    	
		}
	    
	}
	
	}
	
	
	
	

	
	

