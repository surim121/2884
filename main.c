#include <stdio.h>
#include "player.h"
#include "room.h"

int main() {
    int p, m;
    int level[300];
    char name[300][17];
    int room[300][300];
    int room_size[300] = { 0 };

    scanf("%d %d", &p, &m);

    input_players(p, level, name);

    int room_count = assign_rooms(p, m, level, room, room_size);

    print_rooms(room_count, m, level, name, room, room_size);

    return 0;
}
