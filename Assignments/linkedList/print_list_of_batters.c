#include "batters.h"

void print_list_of_batters(FILE *fp, BATTER head)
{
	BATTER p = head;

	while (p != NULL) {
		printf("%s %s %d %d %.3f\n", p->firstname, p->lastname, p->hits, p->atbats, p->average);
		p = p->next;
	}
}	
