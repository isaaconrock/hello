#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    if (argc == 1) 
    {
        printf("Hello, world!\n");
    } 
    else if (strcmp(argv[1], "-t") == 0) 
    {
        printf("hello, world\n");
    } 
    else if (strcmp(argv[1], "-g") == 0 && argc >= 3) 
    {
        printf("%s\n", argv[2]);
    }
    else if(strcmp(argv[1], "-h") == 0)
    {
        printf("Usage: hello [OPTION]...\n"
               "Print a friendly, customizable greeting.\n\n"
               "  -h                      display this help and exit\n"
               "  -v                      display version information and exit\n"
               "  -t                      use traditional greeting\n"
               "  -g \"TEXT\"               use TEXT as the greeting message\n");
    }
    else 
    {
        printf("Usage: hello [OPTION]...\n"
                       "Print a friendly, customizable greeting.\n\n"
                       "  -h                      display this help and exit\n"
                       "  -v                      display version information and exit\n"
                       "  -t                      use traditional greeting\n"
                       "  -g \"TEXT\"               use TEXT as the greeting message\n");
        return 1;
    }
    return 0;
}
