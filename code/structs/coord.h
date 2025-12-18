#pragma once

typedef struct Coordinate {
    int x;
    int y;
    int z;
} coordinate_t;

struct Coordinate new_coord(int x, int y, int z);
struct Coordinate sclae_coordinate(struct Coordiate c, int factor);
