#include "batters.h"

BATTER delete_batter(BATTER head, char *firstname, char *lastname) {
	BATTER p, temp;

	if (head == NULL) {
		/* we have an empty list, so nothing to delete */
		printf("\nName %s %s not found", firstname, lastname);
	}
	else if (!strcmp(firstname,head->firstname) && !strcmp(lastname, head->lastname)) {
		/* we will delete the head */
		p = head->next;
		printf("\nDeleting %s %s\n", head->firstname, head->lastname);
		free(head);
		head = p;
	}
	else {
		/* set p to the node before the one to delete */
		p = head;
		while(p->next != NULL && strcmp(firstname,p->next->firstname)) {
			p = p->next;
			printf("\np is now %s %s\n", p->firstname, p->lastname);
		}
		if (p->next == NULL) {
			printf("\nName %s %s not found.\n", firstname, lastname);
		}
		else {
			/* delete a node in the middle or the end of the list */
			temp = p->next;
			p->next = p->next->next;
			printf("\nDeleting %s %s\n", temp->firstname, temp->lastname);
			free(temp);
		}
	}
	return head;
}
