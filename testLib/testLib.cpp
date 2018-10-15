// testLib.cpp : 定义控制台应用程序的入口点。
//
#include "MySuper.h"

//导出的转发
#pragma comment(linker, "/EXPORT:_SuperAdd")
#pragma comment(linker, "/EXPORT:MyCreateFileA=kernel32.CreateFile123A")

int main()
{
    return 0;
}

