#include <stdio.h>
#include <stdlib.h>
#include "numeros.c"
#include "numeros.h"
#include "relacion.c"
#include "relacion.h"
#include "delimitacion.c"
#include "delimitacion.h"
#include "aritmetico.c"
#include "aritmetico.h"
#include "puntuacion.c"
#include "puntuacion.h"
#include "imprimir.c"
#include "imprimir.h"

FILE *inicio, *avance;
char msj[100];
int linea = 1;
int ident = 0;

/*
Estados:
error = -1, 57, 106, 111, 113, or ident = -1
comentarios = 2
*/

void aceptar(){
	long inicioPalabra = ftell(inicio);
	long finPalabra = ftell(avance);

	fread(msj, finPalabra - inicioPalabra, 1, inicio);

	fseek(inicio, finPalabra, SEEK_SET);
}

void rechazar(){
	fseek(avance, ftell(inicio), SEEK_SET);
}

char obtenerCaracter(){
	return fgetc(avance);
}

int isfeof(){
	char c = obtenerCaracter();
	rechazar();
	return c == EOF;
}

int identificar(){
	int estado = 0;
	char c = obtenerCaracter();
	if(c == '/' && estado != -1)
	{
		estado = 44;
		c = obtenerCaracter();
		if( c == '/')
		{
			c = obtenerCaracter();
			while(c!= '\n'){
				c = obtenerCaracter();
				estado = 2;
			}
		}
		else if(c == ' ' || c == '\n' || c =='\t')
		{
			estado = 44;
		}
		else
		{
			return estado = -1;
		}
	}
	else
	{
		while(c != ' ' && c != '\n' && c != '\t' && c != EOF && estado != -1){
			if(48<=(int)c && (int)c<=57)
			{
				if(estado == 20)
				{
					estado = 20;
				}
				else
				{
					estado = tipoNumero(c, estado);
				}
			}
			else if((65 <= (int)c && (int)c <= 90) || (97<= (int)c && (int)c <=122) || c=='_')
			{
				if(estado!=20 && estado != 0)
				{
					estado = tipoNumero(c, estado);
				}
				else if(estado == 0 || estado == 20)
				{
					if(c=='_')
					{
						if(ident == 0 && estado == 0)
						{
							ident = -1;
						}
					}
					else
					{
						ident = 1;
					}
					estado = 20;
				}
			}
			else if(c == '.' || c == ',' || c == ';')
			{
				if((estado == 10 || estado == 11)&& c == '.')
				{
					estado = tipoNumero(c, estado);
				}
				else if((c==','||c==';')&&(estado==11||estado==108||estado==112||estado==114||estado==115||estado==116))
				{
					estado = estado;
					break;
				}
				else if(estado == 0)
				{
					estado = tipoPuntuacion(c, estado);
					break;
				}
				else if(estado == 20)
				{
					estado = 20;
					break;
				}
				else
				{
					estado = -1;
				}
			}
			else if(c == '+' || c == '-' || c == '*' || c=='/')
			{
				if(estado == 113)
				{
					estado = tipoNumero(c, estado);
				}
				else if(estado == 0)
				{
					estado = tipoAritmetico(c,estado);
				}
				else
				{
					estado = -1;
				}
			}
			else if(c == '=' || c == '<' || c == '>' || c == '!')
			{
				if(estado == 0 || estado == 51 || estado == 53 || estado == 55 || estado == 57)
				{
					estado = tipoRelacion(c, estado);
				}
				else
				{
					estado = -1;
				}
			}
			else if(c == '(' || c == ')' || c == '[' || c == ']')
			{
				if(estado == 0)
				{
					estado = tipoDelimitacion(c, estado);
					break;
				}
				else if(estado == 20)
				{
					estado = 20;
					break;
				}
				else
				{
					estado = -1;
				}
			}
			c = obtenerCaracter();
		}
	}
	if(c == '\n')
	{
		linea = linea+1;
	}
	return estado;
}

int main(){
	inicio = fopen("lectura.txt", "r");
	avance = fopen("lectura.txt", "r");
	int estadoFinal = 0;
	while(!isfeof()){
		estadoFinal = identificar();
		if(estadoFinal != -1 && estadoFinal != 57 && estadoFinal != 106 && estadoFinal != 111 && estadoFinal != 113 && ident != -1)
		{
			aceptar();
			imprimir(estadoFinal, msj);
			for(int i = 0;i<100;i++){
				msj[i] = (char)0;
			}
		}
		else
		{
			rechazar();
			printf("Error en el input! (Línea %d)\n", linea);
			break;
		}
	}
	printf("Fin de la ejecución\n");
	fclose(inicio);
	fclose(avance);
	return 0;
}

