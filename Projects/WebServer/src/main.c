#include "socket.h"
#include "system_calls.h"
#include "basicio.h"
#include "utility.h"

void _start(){
  print("Hello_syscall\n\0");
  const char* store;
  store = ask("Say: \0",12);
  print(store);
  print('\n');
  break_exec(0);
}

