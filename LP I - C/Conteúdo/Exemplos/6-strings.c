#include <stdio.h>
#include <string.h>

int main()
{
   char str1[20], str2[20],str3[25]={"#####################"};
   //Leia duas strings (str1 e str2)
   //printf("\nInforme a 1a string: ");
   //gets(str1);
   printf("\nInforme a 2a string: ");
   gets(str2);  
   str1[0]='A';
   str1[1]='U';
   str1[2]='L';
   str1[3]='A';
   str1[4]='\0';  
   printf("\nAs strings informadas sao: %s e %s",str1,str2);
   //Exiba o tamanho das duas
   // strlen -> função que retorna a qtde de caracteres
   // da string (tamanho)
   printf("\nTamanho da string1: %i",strlen(str1));
   int tam;
   tam=strlen(str2);
   printf("\nTamanho da string2: %i",tam);
   
   //Verifique se as duas strings são iguais e exibir mensagem se sim e se não
   //if (str1==str2) NAO PODE NAO PODE NAO PODE
   if (strcmp(str1,str2) == 0)
     printf("\nAs strings sao iguais");
   else	 
     printf("\nAs strings sao diferentes"); 
	 
//Concatene as duas strings e exiba o conteúdo concatenado   
   strcat(str1,str2);
   printf("\nAs strings informadas sao: %s e %s",str1,str2);

   //Atribua o texto: "Isto é um teste" para str1 e imprima-o em tela
   //str1="Isto eh um teste"; NAO PODE NAO PODE NAO PODE
   strcpy(str3,"Isto eh um teste");
   printf("\nString3: %s",str3);
   
   //Verifique se o caracter 'C' existe em str2. Se sim, exiba mensagem: "Letra C existem em..." ? usar a função 
   
   if (strchr(str2,'e'))
     printf("\nAchou!");
	else
      printf("\nNao achou");
	  
   if (strstr(str2,"Linguagem"))
     printf("\nAchou!");
	else
      printf("\nNao achou");
   //Verifique se a string "Linguagem" existe em str2. Se sim, exiba a mensagem: "Palavra Linguagem encontrada em..." ? usar função 
 // strstr()
 
  
}