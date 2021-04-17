#ifndef _OPENGL32_HXX_
#define _OPENGL32_HXX_

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cstdarg>
#include <cstdbool>

///OpenGL 2.1 Reference Pages
///https://www.khronos.org/registry/OpenGL-Refpages/gl2.1/

///OpenGL 4.5 Reference Pages
///https://www.khronos.org/registry/OpenGL-Refpages/gl4/

///Selected Standard: OpenGL 2.1 (legacy compatibility)
///https://github.com/KhronosGroup/OpenGL-Refpages

#ifndef NDEBUG
    void DebugLogToFile(LPCSTR format, ...);
    #define debug(FORMAT, ...)   DebugLogToFile(FORMAT, __VA_ARGS__);
    #define DEBUG_MAX_LENGTH     1024
#else
    #define debug(...)
#endif//NDEBUG

#ifndef _OPENGL32_CXX_
#define OPENGL_API      __declspec(dllimport)
#else
#define OPENGL_API      __declspec(dllexport)
#endif

extern "C"
{
    OPENGL_API VOID glBegin();
    OPENGL_API INT  glTest(INT a);
    OPENGL_API VOID glEnd();
}

#endif//_OPENGL32_HXX_