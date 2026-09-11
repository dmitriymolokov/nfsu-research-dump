/* spd-match: matched pct=100.00 flags=/O1 /c /nologo /TC method=m36_pass_b source=m36_pass_b/va_00614972 */
/* Pass A — minimal Ghidra → MSVC6 typedefs (not from speed.exe) */
/* /TC: () stubs = unspecified arity. /TP: use (...) stubs; bool is keyword. */
typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined4;
typedef unsigned __int64 undefined8;
typedef unsigned char   byte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef __int64         longlong;
typedef unsigned __int64 ulonglong;
typedef float           float10; /* Pass A cheap map; real float10 is 80-bit */
typedef void            code(void);
#ifndef __cplusplus
typedef int             bool;
#ifndef true
#define true 1
#define false 0
#endif
#endif

typedef unsigned long   DWORD;
typedef unsigned short  WORD;
typedef unsigned char   BYTE;
typedef int             BOOL;
typedef char            CHAR;
typedef unsigned short  WCHAR;
typedef long            LONG;
typedef unsigned long   ULONG;
typedef unsigned int    UINT;
typedef long            HRESULT;
typedef void           *HANDLE;
typedef void           *HWND;
typedef void           *HINSTANCE;
typedef void           *HMODULE;
typedef void           *HKEY;
typedef void           *HMENU;
typedef void           *HFONT;
typedef void           *HDC;
typedef void           *HICON;
typedef void           *HBRUSH;
typedef void           *HPEN;
typedef void           *HBITMAP;
typedef void           *HPALETTE;
typedef void           *HGDIOBJ;
typedef const char     *LPCSTR;
typedef char           *LPSTR;
typedef const void     *LPCVOID;
typedef void           *LPVOID;
typedef DWORD          *LPDWORD;
typedef int             INT;
typedef unsigned int    UINT_PTR;
typedef long            LONG_PTR;
typedef unsigned long   ULONG_PTR;
typedef ULONG_PTR       SIZE_T;
typedef struct tagRECT { long left, top, right, bottom; } RECT, tagRECT;
typedef struct _FILETIME { DWORD dwLowDateTime; DWORD dwHighDateTime; } FILETIME;
typedef struct _WIN32_FIND_DATAA {
  DWORD dwFileAttributes; FILETIME ftCreationTime; FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime; DWORD nFileSizeHigh; DWORD nFileSizeLow;
  DWORD dwReserved0; DWORD dwReserved1; CHAR cFileName[260]; CHAR cAlternateFileName[14];
} WIN32_FIND_DATAA, _WIN32_FIND_DATAA;
typedef struct _OVERLAPPED {
  DWORD Internal; DWORD InternalHigh; DWORD Offset; DWORD OffsetHigh; HANDLE hEvent;
} OVERLAPPED, *LPOVERLAPPED;
typedef struct _SYSTEM_INFO {
  DWORD dwOemId; DWORD dwPageSize; LPVOID lpMinimumApplicationAddress;
  LPVOID lpMaximumApplicationAddress; DWORD dwActiveProcessorMask;
  DWORD dwNumberOfProcessors; DWORD dwProcessorType; DWORD dwAllocationGranularity;
  WORD wProcessorLevel; WORD wProcessorRevision;
} SYSTEM_INFO, _SYSTEM_INFO;
DWORD __stdcall SleepEx(DWORD, BOOL);
DWORD __stdcall Sleep(DWORD);
void __stdcall SetLastError(DWORD);
DWORD __stdcall GetLastError(void);
HWND __stdcall GetDesktopWindow(void);
BOOL __stdcall SetRect(RECT *, int, int, int, int);
HWND __stdcall CreateWindowExA(DWORD, LPCSTR, LPCSTR, DWORD, int, int, int, int,
                               HWND, HMENU, HINSTANCE, LPVOID);
HANDLE __stdcall FindFirstFileA(LPCSTR, WIN32_FIND_DATAA *);
BOOL __stdcall FindNextFileA(HANDLE, WIN32_FIND_DATAA *);
BOOL __stdcall FindClose(HANDLE);
BOOL __stdcall WriteFile(HANDLE, LPCVOID, DWORD, LPDWORD, LPOVERLAPPED);
int __stdcall wvsprintfA(LPSTR, LPCSTR, void *);

/* CRT / common externs seen in cleanish — compile-only stubs */
void __cdecl _free(void *);
void *__cdecl _malloc(unsigned int);
void *__cdecl _realloc(void *, unsigned int);
void __cdecl _memcpy(void *, const void *, unsigned int);
void *__cdecl _memset(void *, int, unsigned int);
int __cdecl _sprintf(char *, const char *, ...);
int __cdecl _strlen(const char *);


undefined4 __fastcall FUN_00614972(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  if (*(uint *)(param_1 + 8) > 0) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + uVar3 * 4);
      if (*(int *)(iVar1 + 0x24) != -1) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + *(int *)(iVar1 + 0x24) * 4);
        *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
        *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
        *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
        uVar4 = *(uint *)(iVar2 + 0x38);
        if (uVar4 == 0xffffffff) {
          *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
          *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
          *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(iVar1 + 0x40);
        }
        else {
          if (uVar4 < *(uint *)(iVar1 + 0x38)) {
          }
          else {
            uVar4 = *(uint *)(iVar1 + 0x38);
          }
          *(uint *)(iVar1 + 0x38) = uVar4;
          *(uint *)(iVar2 + 0x38) = uVar4;
          uVar4 = *(uint *)(iVar2 + 0x3c);
          if (*(uint *)(iVar2 + 0x3c) <= *(uint *)(iVar1 + 0x3c)) {
            uVar4 = *(uint *)(iVar1 + 0x3c);
          }
          *(uint *)(iVar1 + 0x3c) = uVar4;
          *(uint *)(iVar2 + 0x3c) = uVar4;
          *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + *(int *)(iVar1 + 0x40);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return 0;
}
