#include <stdio.h>

// Reading files

int main(){

  FILE *pF = fopen("poem.txt","r");
  char buffer[255];

  if(pF == NULL){
    printf("File not found\n");
  }
  else{
    while(fgets(buffer, 255, pF) != NULL){
      printf("%s",buffer);
    }

  }

  fclose(pF);

    return 0;
  }