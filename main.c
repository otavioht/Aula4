#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include<stdint.h>
#define MAX_FILENAME 255


void erro(const char *msg){
    printf(*msg);
    exit(0);
}

void carrega_arquivo(const char *arquivo, uint8_t memoria){
    FILE *fp;
    fp = fopen("PROG", "rb");
    if (fp==NULL){
        erro("Não foi possivel abrir o arquivo");
    }
   
    fread(memoria,256,1,fp);         
    fclose(fp);
    if(memoria+250==NULL){
        erro("Não foi possivel criar o vetor memoria");
    }
}

void simular(){

}

void salvar_arquivo(){

}
int main(int argc, char *argv[]){
    if (argc!=3){
        puts("Sintaxe: neander <prog.bin> pc");
        exit(0);
    }
    char narq[MAX_FILENAME+1];
    strncpy(narq, argv[1], MAX_FILENAME);
    int pc = atoi(argv[2]);
    printf("%s:%d\n", narq,pc);

    uint8_t memoria[256];
    carrega_arquivo(narq, memoria);
    }
