#ifndef CONSTRUCTION_H
#define CONSTRUCTION_H

struct player{
	int level;
	int num_collected;
	char name[256];
};

void print_stats(struct player p);
struct player * new_player(int i, int nc, char *n);
void change_info(struct player *p, char *n, int i, int nc);

#endif