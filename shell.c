#include "shell.h"



int _fork(void)
{
    
    int var =22;

	pid_t pidC;
	printf("**proc. PID = %d comienza **\n", getpid());
	pidC = fork();
	
	printf("proc. PID = %d , pidC = %d ejecutandose \n", getpid());
	
	if (pidC > 0)
	{
		var = 44;
	}
	else if (pidC == 0)
	{
		var = 33;
	}
	else /*error*/
	{
	}

	while (1)
	{
		sleep(2);
		printf("proc. PID = %d , var = %d ejecutandose \n", getpid(), var);
	}
	return 0;
}


void command(char **string)
{

	if (execve("", string, NULL) == -1)
	{
	perror("Error:");
	}

	if (_strcmp(string[0], "exit") == 0)
	{
	exit(1);
	}

}


char * strtok(char str[], const char *delims){
 
   //Declaracion de variables
   int i = 0;
   int j = 0;
   int k = 0;
   char *token = malloc(strlen(str) * sizeof(char));
   char *word = malloc(strlen(str) * sizeof(char));
 
   //Ciclo para recorrer cada caracter de la cadena
   while (str[i] != '\0') {
 
      //Recorre los delimitadores
      for (j = 0; delims[j] != '\0'; j++) {
 
         //Verifica si el caracter es un delimitador
         if (str[i] == delims[j]) {
 
            //Verifica que la palabra no este vacia
            if (k > 0) {
 
               //Termina la palabra
               word[k] = '\0';
 
               //Agrega la palabra al array
               token[i] = malloc(strlen(word) * sizeof(char));
               strcpy(token[i], word);
 
               //Reinicia los contadores
               k = 0;
            }
         }
      }
 
      //Agrega la letra a la palabra
      word[k] = str[i];
      k++;
      i++;
   }
 
   //Termina la palabra
   word[k] = '\0';
 
   //Agrega la palabra al array
   token[i] = malloc(strlen(word) * sizeof(char));
   strcpy(token[i], word);
 
   //Libera memoria
   free(word);
 
   //Retorna el array con las palabras
   return token;
}


