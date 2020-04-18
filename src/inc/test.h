#pragma once
#include <stdio.h>
inline void inline_function()
{
    wprintf(L"In: " __FUNCTIONW__ L"\n");
}