#define _OPENGL32_CXX_
#include "opengl32.hxx"

BOOL APIENTRY DllMain
( 
    HMODULE   hModule,
    DWORD     dwReason,
    LPVOID    lpReserved
)
{
    switch (dwReason)
    {
        case (DLL_PROCESS_ATTACH): { debug("[INFO]: DLL_PROCESS_ATTACH"); } break;
        case (DLL_THREAD_ATTACH):  { debug("[INFO]: DLL_THREAD_ATTACH" ); } break;
        case (DLL_THREAD_DETACH):  { debug("[INFO]: DLL_THREAD_DETACH" ); } break;
        case (DLL_PROCESS_DETACH): { debug("[INFO]: DLL_PROCESS_DETACH"); } break;
        default:                   { debug("[INFO]: DLL_UNKNOWN_REASON"); } break;
    }
    return TRUE;
}

#ifndef NDEBUG
VOID DebugLogToFile(LPCSTR format, ...)
{
    CHAR buffer[DEBUG_MAX_LENGTH] = "";
    va_list va = va_list();
    va_start(va, format);
    vsprintf_s(buffer, format, va);
    va_end(va);
    strcat_s(buffer, "\n");
    
    printf(buffer);

    std::fstream fs;
    fs.open("./opengl32.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    fs << buffer;
    fs.close();
}
#endif//NDEBUG

VOID glBegin()
{
    debug("[CALL]: glBegin");
}

INT glTest(INT a)
{
    debug("[CALL]: glTest");
    return a + 1;
}

VOID glEnd()
{
    debug("[CALL]: glEnd");
}