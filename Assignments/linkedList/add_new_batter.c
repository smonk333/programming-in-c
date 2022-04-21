#include "batters.h"

BATTER add_new_batter(BATTER head, char *firstname, char *lastname, int hits, int atbats) {
  // When I wrote this program, only God and I knew how it worked. Now it's only God.

  BATTER p, new_batter;

  new_batter = (BATTER) malloc(sizeof(struct batter));
  new_batter->next = NULL;
  strncpy(new_batter->firstname, firstname, 20);
  strncpy(new_batter->lastname, lastname, 20);
  new_batter->hits = hits;
  new_batter->atbats = atbats;
  new_batter->average = (float)hits / (float)atbats;

  //printf("Pointer is %p\n", new_batter);

  /* Create the first entry if head points to NULL (list is empty) */
  if (head == NULL) {
    head = new_batter;
  }

  /* Put the new entry at the beginning of the existing list. */
  else if(new_batter->average > head->average) {
    new_batter->next = head;
    head = new_batter;
  }

  else {
    p = head;
    /* move p to point to the node that should precede the new node */
    while(p->next != NULL && new_batter->average < p->average) {
      p = p->next;
    }
    if (p->next == NULL) {
      /* the new node is inserted at the end of the list */
      p->next = new_batter;
    }
    else {
  		/* the new node is inserted somewhere in the middle of the list */
  		new_batter->next = p->next;
  		p->next = new_batter;
  	}
  }
  return head;
}
