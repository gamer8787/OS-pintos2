#include <syscall.h>
#include <stdio.h>
int main (int, char *[]);
void _start (int argc, char *argv[]);

void
_start (int argc, char *argv[]) {
	printf("up exit\n");
	exit (main (argc, argv));
}
