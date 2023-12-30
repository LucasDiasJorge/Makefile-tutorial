#include "message.c"

#define MAX_LEN 255

int main(){

    Box *box = malloc(sizeof(Box));

    strncpy(box->m, "Hello again", MAX_LEN);

    printf("%s\n", box->m);

    free(box);

    return 0;
}