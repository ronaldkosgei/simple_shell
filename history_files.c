#include "shell.h"

/**
 * get_history_file - Retrieve the path to the history file.
 * @info: The parameter struct containing potential arguments.
 *
 * This function constructs the path to the history file
 * using the user's home directory and the predefined history file name.
 *
 * Return: A dynamically allocated string containing
 * the full path to the history file.
 */
char *get_history_file(DataInfo_tii *info)
{
char *buf, *dir;
int a = 0, b = 1;
dir = fetchEnvironVariable(info, "HOME=");
if (!dir)
return (NULL);
buf =
malloc(sizeof(char) * (stringlength(dir) + stringlength(HIST_FILE) + 2));
if (!buf)
return (NULL);
buf[0] = 0;
swap_int(b, a);
copy_str(buf, dir);
merge_strings(buf, "/");
merge_strings(buf, HIST_FILE);
return (buf);
}
