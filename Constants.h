#ifndef CONSTANTS_H
#define CONSTANTS_H

/*
 * Constants
 */

// długość boku
const unsigned int SIDE_LENGTH	= 25;
// czas "odświeżania" w milisekundach
const unsigned int REFRESH_TIME	= 300;

// minimalna ilość sąsiadów komórki żywej dla której stan nie ulega zmianie
const unsigned int MIN_CELLS_ALIVE = 2;
// maksymalna ilość sąsiadów komórki żywej dla której stan nie ulega zmianie
const unsigned int MAX_CELLS_ALIVE = 3;

// minimalna ilość sąsiadów komórki martwej dla której zmieniany jest stan na żywy
const unsigned int MIN_CELLS_DEAD = 3;
// maksymalna ilość sąsiadów komórki martwej dla której zmieniany jest stan na żywy
const unsigned int MAX_CELLS_DEAD = 3;

#endif