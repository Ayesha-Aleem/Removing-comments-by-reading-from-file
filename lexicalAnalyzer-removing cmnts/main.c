#include <stdio.h>
int main() {
    FILE *Fr;
    FILE *fw;
    char ch;
    int c=0,d=0;
    Fr=fopen("program.c","r");
    fw=fopen("newfile.txt","w");
    if(fw==NULL || Fr == NULL) {
        printf("cant write to file");
        printf("File doesnt exist");
    }
    while((ch = getc(Fr)) != EOF) {
        printf("%c",ch);

        if(ch=='/') {
            c++;
            d=0;

        }
        else if(ch=='*'){
            d++;
        }
        else if(ch=='\n'){
            c=0;
            d=0;
        }
        else if(c==0 & d==0 ){
            putc(ch,fw);
        }
    }
    fclose(Fr);
    fclose(fw);
    return 0;
}
