#include "basicio.h"
#include "utility.h"

void print(const char* str){
    write(STDOUT, str, count_string(str));
}

//Takes input using read syscall
void take_input(const char* destination, size_t read_bytes){
    read(STDIN,destination,read_bytes);
}

const char* ask(const char* instruction, size_t size){
    print(instruction);
    char str[size];
    take_input(str, size);
    str[size-1] = NULL;
    return str;
}
