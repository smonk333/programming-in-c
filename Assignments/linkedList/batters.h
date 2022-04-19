#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct batter {
	char firstname[20];
	char lastname[20];
	int  hits;
	int  atbats;
	float average;
	struct batter *next;
};
typedef struct batter *BATTER;

BATTER add_new_batter(BATTER head, char *firstname, char *lastname, int hits, int atbats);
void print_list_of_batters(FILE *fp, BATTER head);
BATTER delete_batter(BATTER head, char *firstname, char *lastname);
