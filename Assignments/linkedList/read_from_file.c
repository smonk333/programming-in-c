#include "batters.h"

BATTER read_from_file() {
  char fileNameStore[100] = "";
  char firstname[20] ="", lastname[20] = "";
  int atbats, hits;
  float average;
  FILE *inFile;
  BATTER head = NULL;

  printf("Enter the name of the file you would like to read from: ");
  scanf("%s", fileNameStore);
  inFile = fopen(fileNameStore, "r");

  if(inFile == NULL) {
    fprintf(stderr, "File open error, exiting");
    exit(1);
  }
  else {
    while(!feof(inFile)) {
      fscanf(inFile, "%s %s %d %d %f", firstname, lastname, &hits, &atbats, &average);
      head = add_new_batter(head, firstname, lastname, hits, atbats);
    }
    fclose(inFile);
    delete_batter(head, firstname, lastname); //because I genuinely can't figure out how else to mitigate the file from placing the final element from the read file in the linked list twice.
  }
  return head;
}
