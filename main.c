#include "lib/include.h"

int main(void)
{
    uint16_t valor = 0;
    char c='5';
    char cadena[100];
    Configurar_PLL(_40MHZ);
    

    //________________________Experimento 1____________________________________/
 
 Configurar_UART2(); //Configuración UART 2 Monse Elias -fclk 40MHZ Baud-rate 115200
    Configurar_GPIO();
  
    while(1)
    {
         c = readChar();
         switch(c)
         {
             case 'r':
                 //GPIODATA port F 662 pin PF1
                 printChar('a');
                 GPIOF->DATA = (1<<1); 
                 break;
             case 'b':
                 //GPIODATA port F 662 pin PF2
                 printChar('b');
                 GPIOF->DATA = (1<<2);
                 break;
             case 'g':
                 //GPIODATA port F 662 pin PF3
                 printChar('c');
                 GPIOF->DATA = (1<<3);
                 break;
             case 'y':
                 //GPIODATA port F 662
                 printChar('d');
                 GPIOF->DATA = (1<<3) | (1<<2);
                 break;
            case 'n':
            printChar('n');
              GPIOF->DATA = (0<<1) | (0<<2) | (0<<3);
            //c = readChar();
                readString(cadena,'.');
                invertir(cadena);
                numeroletra(cadena);
                printString(cadena);
                break;
             default:
		    if (c < 33)
                {

                }
                else 
                {
                    GPIOF->DATA = (0<<1) | (0<<2) | (0<<3);
                }
                 printChar((char)valor);
                 break;
         }
    }
}