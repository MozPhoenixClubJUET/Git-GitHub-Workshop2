#include<stdio.h>
#include<Windows.h>

int main()
{
    SYSTEMTIME str_t;
    GetSystemTime(&str_t);

    printf("Y:M:D   -> %d:%d:%d \n h:m:s -> %d:%d:%d",
    str_t.wYear,str_t.wMonth,str_t.wDay
    ,str_t.wHour,str_t.wMinute,str_t.wSecond);

	getch();
}
