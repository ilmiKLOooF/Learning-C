#include <stdio.h>
#include <stdlib.h>

// ascii basic encoder & decoder
// Uppercase and lowercase matter!

void asciDecoder(int numbers[]);
void asciEncoder(char *text);

int main()
{
    int i;
    int message[] = {65,66,67,32,97,98,99}; // here you place numbers to decode.. you can leave it blank
    asciEncoder("ABC abc"); // and here to encode.. you can leave it blank
    for (i=0;i<sizeof(message)/sizeof(message[0]);i++){
        asciDecoder(message[i]);
    }
}


void asciDecoder(int numbers[])
{
    int i;
    for (i=1;i<sizeof(numbers)/sizeof(numbers[0]);i++){
        printf(" %c",numbers);
    }
}
void asciEncoder(char *text)
{

    while (*text){
        printf(" %d",*text);
        text++;
    }

}

