#include <stdio.h>
#include <string.h>

int main(){
    char kata[500] = {'\0'};
    char temp[500] = {'\0'};
    int n, i, j = 0;

    printf("Program Mengecek Kata - Kalimat Palindrom atau Bukan\n\n");
    printf("Input Kata : ");
    gets(kata);
    n = strlen(kata);

    for(i = 0; kata[i]; i++){
        kata[i] = tolower(kata[i]);
    }

    for(i = n-1; i >= 0; i--){
        temp[j] = kata[i];
        j++;
    }

    printf("Result : ");
    if(strcmp(kata, temp) == 0)
        printf("Palindrom");
    else
        printf("Bukan Palindrom");

    getch();
    return 0;
}
