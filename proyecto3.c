#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    char buffer[100];
    double pi;

	archivo=fopen("archivo.txt","w");
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    fgets(buffer,100,archivo);
    printf("la primera línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la segunda línea es %s",buffer);

    fgets(buffer,100,archivo);
    printf("la tercera línea es %s",buffer);

    fscanf(archivo, "%lf", &pi);
    fprintf("el número en la cuarta línea es %lf",pi);

    fprintf(archivo,"\n");

    fputs("se agrega una quinta línea",archivo);
  
    fclose(archivo);


    return 0;
}
	return 0;
}
