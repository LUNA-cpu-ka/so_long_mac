#ifndef SO_LONG_H
# define SO_LONG_H

#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct try
{
    char *file_name;
    int fd;
}try;


void error(char* msg);
void validation_extantion(try *app, int ac, char **av);
void validation_of_map(try *app);

#endif