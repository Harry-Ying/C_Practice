//写一个标准strcpy函数
#include<stdio.h>
#include<string.h>

void strcpya(char *desti, char *source);
    
int main() {
    char getData[100];
    char convData[100];
    scanf("%s", &getData);
    printf("input is %s\n",getData);
    strcpya(convData,getData);
    printf("copied data is %s\n",convData);
    
    return 0;
}

void strcpya(char *desti, char *source ) {
    int len = strlen(source);
    printf("length of source %d\n",len);
    for(int i = 0;i<len;i++) {
        *(desti+i) = *(source+i);
    }
}
