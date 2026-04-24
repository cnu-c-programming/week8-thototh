#include <stdio.h>
#include <string.h>

char my_strcmp(const char *a, const char *b){
    int alen = strlen(a);
    int blen = strlen(b);
    if(alen>blen){
        for(int i = 0; i < blen; i++){
            if(a[i]==b[i]) continue;
            else return a[i]-b[i];
        }
        return a[alen-1]-0;
    }else if(alen<blen){
        for(int i = 0; i < alen; i++){
            if(a[i]==b[i]) continue;
            else return a[i]-b[i];
        }
        return 0-b[blen-1];
    }else{
        for(int i = 0; i < blen; i++){
            if(a[i]==b[i]) continue;
            else return a[i]-b[i];
        }
    }


}


int main() {
    
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));

    return 0;
}
