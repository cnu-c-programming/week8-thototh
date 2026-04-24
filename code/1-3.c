#include <stdio.h>
#include <string.h>

char *my_strcat(char *dst, const char *src){
    int dlen = strlen(dst);
    char *start = dst+dlen;
    int slen = strlen(src);
   

    for(int i = 0; i < slen; i++){
        dst[dlen+i] = src[i];
        
    }
}


int main() {
    char str1[20] = "Hello";
    char str2[] = "World";

    printf("%s\n", str1);
    my_strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
