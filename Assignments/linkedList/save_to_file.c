//save_to_file.c

#include "batters.h"

void save_to_file(BATTER head) {
  char fileNameStore[100] = "";
  FILE *inFile;

  printf("Enter the name of file to save list to: ");
  scanf("%s", fileNameStore);
  inFile = fopen(fileNameStore, "w");

  if(fileNameStore == NULL) {
    fprintf(stderr, "File open error, exiting");
    exit(1);
  }
  else {
  print_list_of_batters(inFile, head);
  fclose(inFile);
}
  return;
}
