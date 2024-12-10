#include <stdio.h>
#include "player.h"

void input_players(int p, int level[], char name[][17]) {
    for (int i = 0; i < p; i++) {
        scanf("%d %s", &level[i], name[i]);
    }
}
