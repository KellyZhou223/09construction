#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//creating the struct
struct player{
	int level;
	int num_collected;
	char name[256];
};

//prints the items in the struct
void display_stats(struct player *p){
	printf("Player Name: %s\tLevel: %d\t Total items collected: %d\n", p->name, p->level, p->num_collected);
}

//creates new player with name, level, and number of items collected
struct player *new_player(int i, int nc, char *n){

	struct player *np;

	//dynamic heap memory
	np = malloc(sizeof(struct player));

	strncpy(np->name, n, sizeof(np->name)-1);
	np->level=i;
	np->num_collected=nc;

	return np;
}

//changing information in the struct
void change_info(struct player *p, char *n, int i, int nc){
	strncpy(p->name, n, sizeof(p->name)-1);
	p->level=i;
	p->num_collected=nc;
}