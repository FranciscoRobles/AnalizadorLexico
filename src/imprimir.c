#include <stdio.h>
#include <stdlib.h>

void imprimir(int estadoFinal, char palabra[]){
	char a = (char)0;
	if(estadoFinal == 11)
	{
		printf("Número natural[");
			for(int i = 0;i<100;i++){
				if(palabra[i]!='\n'&& palabra[i]!= ' ' && palabra[i] != '\t')
				{
					if(palabra[i] == '('||palabra[i] == ')'||palabra[i] == '['|| palabra[i] ==']'||palabra[i] == ','||palabra[i] == ';')
					{
						switch(palabra[i]){
							case '(':
								printf("]\nParéntesis izquierdo[(]\n");
								a = palabra[i];
								break;
							case ')':
								printf("]\nParéntesis derecho[)]\n");
								a = palabra[i];
								break;
							case '[':
                                printf("]\nCorchete izquierdo[[]\n");
								a = palabra[i];
                                break;
							case ']':
                                printf("]\nCorchete derecho[]]\n");
								a = palabra[i];
                                break;
							case ',':
								printf("]\nPunto[,]\n");
								a = palabra[i];
								break;
							case ';':
								printf("]\nPunto y coma[;]\n");
								a = palabra[i];
								break;
						}
					}
					else
					{
						printf("%c", palabra[i]);
					}
				}
			}
		if(a != '('&& a!=')'&& a!='['&& a!=']'&& a!=','&& a!=';'){
			printf("]\n");
		}
	}
	else if(estadoFinal == 10 || estadoFinal == 108)
	{
		printf("Número octal[");
			for(int i = 0;i<100;i++){
				if(palabra[i]!='\n'&& palabra[i]!= ' ' && palabra[i] != '\t')
				{
					if(palabra[i] == '('||palabra[i] == ')'||palabra[i] == '['|| palabra[i] ==']'||palabra[i] == ','||palabra[i] == ';')
					{
						switch(palabra[i]){
							case '(':
								printf("]\nParéntesis izquierdo[(]\n");
								a = palabra[i];
								break;
							case ')':
								printf("]\nParéntesis derecho[)]\n");
								a = palabra[i];
								break;
							case '[':
                                printf("]\nCorchete izquierdo[[]\n");
								a = palabra[i];
                                break;
							case ']':
                                printf("]\nCorchete derecho[]]\n");
								a = palabra[i];
                                break;
							case ',':
								printf("]\nPunto[,]\n");
								a = palabra[i];
								break;
							case ';':
								printf("]\nPunto y coma[;]\n");
								a = palabra[i];
								break;
						}
					}
					else
					{
						printf("%c", palabra[i]);
					}
				}
			}
		if(a != '('&& a!=')'&& a!='['&& a!=']'&& a!=','&& a!=';'){
			printf("]\n");
		}
	}
	else if(estadoFinal == 112||estadoFinal == 114||estadoFinal == 115)
	{
		printf("Número real[");
			for(int i = 0;i<100;i++){
				if(palabra[i]!='\n'&& palabra[i]!= ' ' && palabra[i] != '\t')
				{
					if(palabra[i] == '('||palabra[i] == ')'||palabra[i] == '['|| palabra[i] ==']'||palabra[i] == ','||palabra[i] == ';')
					{
						switch(palabra[i]){
							case '(':
								printf("]\nParéntesis izquierdo[(]\n");
								a = palabra[i];
								break;
							case ')':
								printf("]\nParéntesis derecho[)]\n");
								a = palabra[i];
								break;
							case '[':
                                printf("]\nCorchete izquierdo[[]\n");
								a = palabra[i];
                                break;
							case ']':
                                printf("]\nCorchete derecho[]]\n");
								a = palabra[i];
                                break;
							case ',':
								printf("]\nPunto[,]\n");
								a = palabra[i];
								break;
							case ';':
								printf("]\nPunto y coma[;]\n");
								a = palabra[i];
								break;
						}
					}
					else
					{
						printf("%c", palabra[i]);
					}
				}
			}
		if(a != '('&& a!=')'&& a!='['&& a!=']'&& a!=','&& a!=';'){
			printf("]\n");
		}
	}
	else if(estadoFinal == 116)
	{
		printf("Número Hexadecimal[");
			for(int i = 0;i<100;i++){
				if(palabra[i]!='\n'&& palabra[i]!= ' ' && palabra[i] != '\t')
				{
					if(palabra[i] == '('||palabra[i] == ')'||palabra[i] == '['|| palabra[i] ==']'||palabra[i] == ','||palabra[i] == ';')
					{
						switch(palabra[i]){
							case '(':
								printf("]\nParéntesis izquierdo[(]\n");
								a = palabra[i];
								break;
							case ')':
								printf("]\nParéntesis derecho[)]\n");
								a = palabra[i];
								break;
							case '[':
                                printf("]\nCorchete izquierdo[[]\n");
								a = palabra[i];
                                break;
							case ']':
                                printf("]\nCorchete derecho[]]\n");
								a = palabra[i];
                                break;
							case ',':
								printf("]\nPunto[,]\n");
								a = palabra[i];
								break;
							case ';':
								printf("]\nPunto y coma[;]\n");
								a = palabra[i];
								break;
						}
					}
					else
					{
						printf("%c", palabra[i]);
					}
				}
			}
		if(a != '('&& a!=')'&& a!='['&& a!=']'&& a!=','&& a!=';'){
			printf("]\n");
		}
	}
	else if(estadoFinal == 31)
	{
		printf("Paréntesis izquierdo[(]\n");
	}
	else if(estadoFinal == 32)
	{
		printf("Paréntesis derecho[)]\n");
	}
	else if(estadoFinal == 33)
	{
		printf("Corchete izquierdo[[]\n");
	}
	else if(estadoFinal == 34)
	{
		printf("Corchete izquierdo[]]\n");
	}
	else if(estadoFinal == 41)
	{
		printf("Suma[+]\n");
	}
	else if(estadoFinal == 42)
	{
		printf("Resta[-]\n");
	}
	else if(estadoFinal == 43)
	{
		printf("Multiplicación[*]\n");
	}
	else if(estadoFinal == 44)
	{
		printf("División[/]\n");
	}
	else if(estadoFinal == 51)
	{
		printf("Operador de asignación[=]\n");
	}
	else if(estadoFinal == 52)
	{
		printf("Operador de Igualdad[==]\n");
	}
	else if(estadoFinal == 53)
	{
		printf("Operador de Menor qué[<]\n");
	}
	else if(estadoFinal == 54)
	{
		printf("Operador de Menor o igual qué[<=]\n");
	}
	else if(estadoFinal == 55)
	{
		printf("Operador de Mayor qué[>]\n");
	}
	else if(estadoFinal == 56)
	{
		printf("Operador de Mayor o igual qué[>=]\n");
	}
	else if(estadoFinal == 58)
	{
		printf("Operador de Desigualdad[!=]\n");
	}
	else if(estadoFinal == 61)
	{
		printf("Punto[.]\n");
	}
	else if(estadoFinal == 62)
	{
		printf("Coma[,]\n");
	}
	else if(estadoFinal == 63)
	{
		printf("Punto y coma[;]\n");
	}
	else if(estadoFinal == 20)
	{
		if(palabra[0] == 'a' && palabra[1]=='n' && palabra[2]=='d' && (palabra[3]==' '|| palabra[3]=='\n' || palabra[3]=='\t'|| palabra[3] == (char)0))
		{
			printf("Operador conjunción[and]\n");
		}
		else if(palabra[0]=='o' && palabra[1]=='r' && (palabra[2]==' '||palabra[2]=='\n'||palabra[2]=='\t'||palabra[2] == (char)0))
		{
			printf("Operador disyunción[or]\n");
		}
		else if(palabra[0]=='n' && palabra[1]=='o' && palabra[2]=='t' && (palabra[3]==' '||palabra[3]=='\n'||palabra[3]=='\t'||palabra[3] == (char)0))
		{
			printf("Operador negación[not]\n");
		}
		else if(palabra[0]=='b'&& palabra[1]=='e'&& palabra[2]=='g'&& palabra[3]=='i'&& palabra[4]=='n'&&(palabra[5]==' '||palabra[5]=='\n'||palabra[5]=='\t'||palabra[5] == (char)0))
		{
			printf("Palabra reservada[begin]\n");
		}
		else if(palabra[0]=='v'&& palabra[1]=='a'&& palabra[2]=='r'&& (palabra[3]==' '||palabra[3]=='\n'||palabra[3]=='\t'||palabra[3] == (char)0))
		{
			printf("Palabra reservada[var]\n");
		}
		else if(palabra[0]=='p'&& palabra[1]=='r'&& palabra[2]=='o'&& palabra[3]=='g'&& palabra[4]=='r'&& palabra[5]=='a'&& palabra[6]=='m'&& (palabra[7]==' '||palabra[7]=='\n'||palabra[7]=='\t'||palabra[7] == (char)0))
		{
			printf("Palabra reservada[program]\n");
		}
		else if(palabra[0]=='e'&& palabra[1]=='n'&& palabra[2]=='d'&& (palabra[3]==' '||palabra[3]=='\n'||palabra[3]=='\t'||palabra[3] == (char)0))
		{
			printf("Palabra reservada[end]\n");
		}
		else if(palabra[0]=='i'&& palabra[1]=='f'&& (palabra[2]==' '||palabra[2]=='\n'||palabra[2]=='\t'||palabra[2] == (char)0))
		{
			printf("Palabra reservada[if]\n");
		}
		else if(palabra[0]=='t'&& palabra[1]=='h'&& palabra[2]=='e'&& palabra[3]=='n'&& (palabra[4]==' '||palabra[4]=='\n'||palabra[4]=='\t'||palabra[4] == (char)0))
		{
			printf("Palabra reservada[then]\n");
		}
		else if(palabra[0]=='e'&& palabra[1]=='l'&& palabra[2]=='s'&& palabra[3]=='e'&& (palabra[4]==' '||palabra[4]=='\n'||palabra[4]=='\t'||palabra[4] == (char)0))
		{
			printf("Palabra reservada[else]\n");
		}
		else
		{
			printf("Identificador[");
			for(int i = 0;i<100;i++){
				if(palabra[i]!='\n'&& palabra[i]!= ' ' && palabra[i] != '\t')
				{
					if(palabra[i] == '('||palabra[i] == ')'||palabra[i] == '['|| palabra[i] ==']'||palabra[i] == '.'||palabra[i] == ','||palabra[i] == ';')
					{
						switch(palabra[i]){
							case '(':
								printf("]\nParéntesis izquierdo[(]\n");
								a = palabra[i];
								break;
							case ')':
								printf("]\nParéntesis derecho[)]\n");
								a = palabra[i];
								break;
							case '[':
                                printf("]\nCorchete izquierdo[[]\n");
								a = palabra[i];
                                break;
							case ']':
                                printf("]\nCorchete derecho[]]\n");
								a = palabra[i];
                                break;
							case '.':
								printf("]\nPunto[.]\n");
								a = palabra[i];
								break;
							case ',':
								printf("]\nPunto[,]\n");
								a = palabra[i];
								break;
							case ';':
								printf("]\nPunto y coma[;]\n");
								a = palabra[i];
								break;
						}
					}
					else
					{
						printf("%c", palabra[i]);
					}
				}
			}
			if(a != '('&& a!=')'&& a!='['&& a!=']'&& a!='.'&& a!=','&& a!=';'){
				printf("]\n");
			}
		}
	}
}