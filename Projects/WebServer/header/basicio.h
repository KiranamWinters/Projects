#ifndef BASICIO_H
#define BASICIO_H

#include "system_calls.h"

#define STDIN 0
#define STDOUT 1
#define STDERR 2

typedef const char* string;

void take_input(const char* destination, size_t read_bytes);
void print(const char *);
const char* ask(const char* instruction, size_t size);

#endif
