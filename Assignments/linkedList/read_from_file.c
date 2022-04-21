#include "batters.h"

BATTER read_from_file() {
  char fileNameStore[100] = "";
  char firstname[20] ="", lastname[20] = "";
  int atbats, hits;
  FILE *inFile;
  BATTER readHead = NULL;

  printf("Enter the name of the file you would like to read from: ");
  scanf("%s", fileNameStore);
  inFile = fopen(fileNameStore, "r");

  if(fileNameStore == NULL) {
    fprintf(stderr, "File open error, exiting");
    exit(1);
  }
  else {
    while(!feof(inFile)) {
      fscanf(inFile, "%s %s %i %i", firstname, lastname, &hits, &atbats);
      add_new_batter(readHead, firstname, lastname, hits, atbats);
    }
    fclose(inFile);
  }
  return readHead;
}
