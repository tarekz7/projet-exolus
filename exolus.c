#include <stdio.h>
#include <stdlib.h>
#include "exolus.h"
#include <glib.h>
void bonjour() {
    printf("Hello, world!\n");  
}

int date()
{
     GDateTime *date_time = g_date_time_new_now_local();
    if (!date_time)
        return 1;
    gchar *date_time_string = g_date_time_format(date_time, "%H:%M:%S %F");
    g_print("%s\n", date_time_string ? date_time_string : "it is null\n");
    g_free(date_time_string);
    g_date_time_unref(date_time);
}

   