#ifndef SSU_RSYNC_H
#define	SSU_RSYNC_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <malloc.h>
#include <time.h>
#include <errno.h>
#include <signal.h>
#include <dirent.h>
#include <sys/wait.h>

#define NAME_SIZE 100
#define BUFFER_SIZE 1024
#define PATHMAX 1024
#define FILE_NAME 1024
#define TIME_LEN 24
#define TRUE 1
#define FALSE 0
#define null 0


int command_separation(char *line, int argc, char (*argv)[BUFFER_SIZE]);

int min_scope_check(char (*argv)[BUFFER_SIZE], int i);

int hour_scope_check(char (*argv)[BUFFER_SIZE], int i);

int day_scope_check(char (*argv)[BUFFER_SIZE], int i);

int month_scope_check(char (*argv)[BUFFER_SIZE], int i);

int week_scope_check(char (*argv)[BUFFER_SIZE], int i);

int opt_check(char (*argv)[BUFFER_SIZE]);

int number_check(char (*argv)[BUFFER_SIZE]);

void add_command(char (*argv)[BUFFER_SIZE]);

void remove_command(char (*argv)[BUFFER_SIZE]);

void write_remove_log(char *command);

void write_add_log(char (*argv)[BUFFER_SIZE]);

void write_log_date();


#endif
