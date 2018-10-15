#pragma once

extern "C"
{
	int SuperAdd(int a, int b);
// #ifdef __SUPER_EXPORT
// 	__declspec(dllimport) int SuperAdd(int a, int b);
// #else
// 	__declspec(dllexport) int SuperAdd(int a, int b);
// #endif

}

class CMySuper
{
public:
	CMySuper();
	~CMySuper();

};

