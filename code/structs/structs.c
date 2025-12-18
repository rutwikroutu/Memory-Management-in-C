#include "coord.h"

coordinate_t new_coord(int x, int y, int z) {
    coordinate_t coord = {.x = x, .y = y, .z = z};
    return coord;
}

coordinate_t scale_coordinate(coordinate_t coord, int factor) {
    coordinate_t scaled = coord;
    scaled.x *= factor;
    scaled.y *= factor;
    scaled.z *= factor;

    return scaled;
}

void coordinate_update_x(coordinate_t coord, int new_x) {
    coord.x = new_x;
}

coordinate_t coordinate_update_and_return_x(coordinate_t coord, int new_x) {
    coord.x = new_x;
    return coord;
}