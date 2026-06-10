#include <stdio.h>
#include <syslog.h>
#include <unistd.h>

int main() {
    openlog("my_program", LOG_CONS | LOG_PID | LOG_NDELAY, LOG_LOCAL1);
    syslog(LOG_INFO, "This is an informational message.");
    closelog();
    printf("PID:%d\n", getpid());
    return 0;
}
