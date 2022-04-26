//batters.c

#include "batters.h"

int main(int argc, char *argv[])
{
	int  ans;
	bool done = false;
	char firstname[20], lastname[20];
	int  hits, atbats;
	BATTER head = NULL;

	while (!done) {
		printf("\n0 exit\n");
		printf("1 add new batter\n");
		printf("2 delete batter\n");
		printf("3 print list of batters\n");
		printf("4 save batters\n");
		printf("5 read batters\n");
		printf("\nenter command : ");
		scanf("%d", &ans);

		switch (ans) {
			case 0:
				done = true;
				break;
			case 1:
				printf("First name : ");
				scanf("%s", firstname);
				printf("Last name : ");
				scanf("%s", lastname);
				printf("Hits : ");
				scanf("%d", &hits);
				printf("Bats : ");
				scanf("%d", &atbats);
				head = add_new_batter(head, firstname, lastname, hits, atbats);
				break;
			case 2:
				printf("First name : ");
				scanf("%s", firstname);
				printf("Last name : ");
				scanf("%s", lastname);
				head = delete_batter(head, firstname, lastname);
				break;
			case 3:
				printf("\n");
				print_list_of_batters(stdout, head);
				printf("\n");
				break;
			case 4:
				save_to_file(head);
				break;
			case 5:
				head = read_from_file();
				break;
			default:
				printf("Invalid command\n");
				break;
		}
	}
}
