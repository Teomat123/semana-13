#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo2=NULL;

    archivo=fopen("vector.txt","r+");
    archivo2=fopen("vectormultiplicación,txt","w");

    int a,b;
    
    if (archivo==NULL){
        printf("No se puede abrir el archivo");
        return -1;
    }

    for(int i=0; i<100; i++){
        fscanf(archivo,"%d",&a);
        b=a*3;
        fprintf(archivo2,"%d\n",b);
    }
     fclose(archivo);
     fclose(archivo2);
     return 0;
}