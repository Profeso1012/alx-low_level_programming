#include "main.h"

/**
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, r;
	int fp;
	char *buf;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char)*letters);
	if (buf == NULL)
		return (0);

	r = read(fp, buf, letters);
	if (r == -1)
		return (0);
	n = write(1, buf, letters);
	free(buf);
	close(fp);
	return (n);
}
