#ifndef _STDIO_H_
#include <stdio.h>
#endif

#include <string.h>
#include "windows.h"

class SerialClass
{
public:

   void print(int d)
    {
        printf("%d",d);
    }
    void print(float f)
    {
        printf("%f",f);
    }


    void print(char c){
        printf("%c",c);
    }


    void print(char string[100]){
        char string1[100];
        printf("%s",strncpy(string1,string,100));
    }

    void println(int d)
    {
        printf("%d\n",d);
    }
    void println(float f)
    {
        printf("%f\n",f);
    }
    void println(char c){
        printf("%c\n",c);
    }


    void println(char string[100]){
        char string1[100];
        printf("%s\n",strncpy(string1,string,100));
    }

    int read(){
        return getchar();
    }
};

SerialClass Serial;

void delay(int i){
    Sleep(i);
}
