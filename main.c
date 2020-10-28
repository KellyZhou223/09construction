#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "construction.h"

//Structs for players in a game
int main(){
	srand(time(NULL));

	//Creating new players and randomizing certain parts
	struct player *p1=new_player(rand()%500, rand()/100, "Potatocat");
	struct player *p2=new_player(rand()%500, rand()/100, "Carmouse");
	struct player *p3=new_player(rand()%500, rand()/100, "Iceduck");

	//Printing out information
	printf("Player 1 Information: \n");
	display_stats(p1);

	printf("Player 2 Information: \n");
	display_stats(p2);

	printf("Player 3 Information: \n");
	display_stats(p3);

	//Changing information
	printf("\nPlayer 1 leveling up . . .\n");
	change_info(p1, "Potatocat", (p1->level)+2, (p1->num_collected)+50);
	display_stats(p1);

	printf("\nPlayer 2 changing name . . .\n");
	change_info(p2, "Po", p2->level, (p2->num_collected)+20);
	display_stats(p2);

	free(p1);
	free(p2);
	free(p3);

	return 0;
}