#include <unistd.h>
#include <termios.h>

void enableRawMode(){
    struct terminos raw;
    tcgetattr(STDIN_FILENO, &raw)
    raw.c_lflag &= ~(ECHO);
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}
int main(){
    enableRawMode();
    char c;
    
    /*
    read() and STDIN_FILENO come from <unistd.h>. 
    We are asking read() to read 1 byte from the standard input into the variable c, 
    and to keep doing it until there are no more bytes to read. 
    read() returns the number of bytes that it read, 
    and will return 0 when it reaches the end of a file.
    */
    while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q');      
    return 0;
}
