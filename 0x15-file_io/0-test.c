#include "header.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int w_count;
	int r_count;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR | O_CREAT);
	if (fd < 0)
		return (0);

	buf = malloc(size of (char) * letters)
		if (buf == NULL)
			return (0);

	r_count = read(fd, buf, letters);
	if (r_count < 0)
	{
		free(buf);
		return (0);
	}

	w_count = write(STDOUT FILE_NO, buf, r_count)
		if (w_count < 0)
		{
			free(buf);
			return (0);
		}
	free(buf);
	close(fd);
	return (w_count);
}
