clc; 
clear; 
close all;
txt = "Mon";
instrreset;
s= serial('COM8','BaudRate',115200);
s.Terminator = 0;
 fopen(s);
while (1)
	prompt = "Introduzca su nombre: ";
	txt = input(prompt,"s");
	fprintf(s,txt);
	C = fscanf(s,"%s");
	fprintf("Nombre invertido: %s \n",C);
end
fclose(s);
instrreset