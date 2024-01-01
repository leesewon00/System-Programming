#ifdef RUNTIME
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>

ssize_t write(int fd, const void *buf, size_t count){
    ssize_t (*writecp)(int, const void *, size_t);
    const char *error;

    // get addr of glibc write
    writecp = dlsym(RTLD_NEXT, "write");
    if((error=dlerror())!=NULL){
        fputs(error,stderr);
        exit(1);
    }

    // Print ,,,
    printf("Student ID: 12223771\n");
    printf("Student name: 이세원\n");
    printf("File descriptor: %d\n", fd);
    printf("The address of buf: %p\n", buf);
    printf("The Value in buf: ");
    for (size_t i = 0; i < count; ++i) {
        printf("%c", ((char *)buf)[i]);
    }
    printf("\n");

    // Call the real write() function defined in glibc
    ssize_t real = writecp(fd,buf,count);
    return real;
}
#endif