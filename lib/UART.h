#ifndef UART_UART_H_
#define UART_UART_H_

extern void Configurar_UART2(void);
extern void Configurar_UART0(void);
extern char readChar(void);        //función para lectura de caracteres
extern void printChar(char c);     //funcion para imprimir caracteres
extern void printString(char* string);//funcion para imprimir cadena
extern void readString(char *string, char delimitador);//funcion para leer cadena recibida
extern void invertir(char *string);// funcion para invertir la cadena
extern void numeroletra (char *string);//funcion que agrega numeros a la cadena
#endif /* UART_UART_H_ */