#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    // Get the maximum number of file descriptors allowed
    long max_fd = sysconf(_SC_OPEN_MAX);

    // Iterate over each file descriptor
    for (int fd = 0; fd < max_fd; fd++) {
        int flags = fcntl(fd, F_GETFD);

        if (flags != -1) {
            printf("File descriptor %d is open.\n", fd);
        }
    }

    return 0;
}
