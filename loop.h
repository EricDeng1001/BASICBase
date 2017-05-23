#ifndef _LOOP_H_
#define _LOOP_H_
#include <typeinfo>
unsigned int foreach_cursor_do_not_use;
#define array_len(name) (sizeof(name)/sizeof(name[0]))
#define loop(n) for(int i = 0;i < n; i++)
#define until(condition) while(!condition)
#define foreach(array_name,element_name) foreach_cursor_do_not_use = 0;for(decltype(array_name[0]) element_name = array_name[0]; ((element_name = array_name[foreach_cursor_do_not_use]) || true) && foreach_cursor_do_not_use < array_len(array_name); foreach_cursor_do_not_use++)

#endif