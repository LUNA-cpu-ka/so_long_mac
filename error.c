#include "so_long.h"

void error(char* msg)
{
    write(2, msg, strlen(msg));
    exit(1);
}