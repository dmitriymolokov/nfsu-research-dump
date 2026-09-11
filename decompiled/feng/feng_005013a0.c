/* spd-match: far pct=7.57 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
/* Pass A — minimal Ghidra → MSVC6 typedefs (not from speed.exe) */
/* /TC: () stubs = unspecified arity. /TP: use (...) stubs; bool is keyword. */
typedef unsigned char   undefined;
typedef unsigned char   undefined1;
typedef unsigned short  undefined2;
typedef unsigned int    undefined3; /* odd-width Ghidra; soft → 32-bit */
typedef unsigned int    undefined4;
typedef unsigned __int64 undefined8;
typedef unsigned char   byte;
typedef unsigned char   uchar;
typedef unsigned short  ushort;
typedef unsigned int    uint;
typedef unsigned long   ulong;
typedef unsigned int    size_t; /* MSVC6 /TC often lacks stddef in our stub TU */
typedef __int64         longlong;
typedef unsigned __int64 ulonglong;
typedef float           float10; /* Pass A cheap map; real float10 is 80-bit */
/* Odd-width Ghidra ints (CONCAT31 packs); soft-map to 32-bit. */
typedef unsigned int    uint3;
typedef int             int3;
typedef unsigned int    uint5;
typedef int             int5;
typedef unsigned int    uint6;
typedef int             int6;
typedef unsigned int    uint7;
typedef int             int7;
typedef void            code(void);
#ifndef __cplusplus
typedef int             bool;
#ifndef true
#define true 1
#define false 0
#endif
#endif
/* Ghidra decompiler macros — soft-compat (PIECE/CARRY semantics; not MSVC idioms). */
#ifndef NAN
#define NAN ((float)(1e300 * 1e300))
#endif
/* CONCATxy(hi, lo): hi = x bytes MSB, lo = y bytes LSB. */
#define CONCAT11(a,b) ((unsigned short)((((unsigned short)(unsigned char)(a))<<8)|((unsigned char)(b))))
#define CONCAT12(a,b) ((unsigned int)((((unsigned int)(unsigned char)(a))<<16)|((unsigned short)(b))))
#define CONCAT13(a,b) ((unsigned int)((((unsigned int)(unsigned char)(a))<<24)|(((unsigned int)(b))&0x00ffffffu)))
#define CONCAT14(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned char)(a))<<32)|((unsigned int)(b))))
#define CONCAT15(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned char)(a))<<40)|(((unsigned __int64)(b))&((unsigned __int64)0x000000ffffffffff))))
#define CONCAT16(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned char)(a))<<48)|(((unsigned __int64)(b))&((unsigned __int64)0x0000ffffffffffff))))
#define CONCAT17(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned char)(a))<<56)|(((unsigned __int64)(b))&((unsigned __int64)0x00ffffffffffffff))))
#define CONCAT21(a,b) ((unsigned int)((((unsigned int)(unsigned short)(a))<<8)|((unsigned char)(b))))
#define CONCAT22(a,b) ((unsigned int)((((unsigned int)(unsigned short)(a))<<16)|((unsigned short)(b))))
#define CONCAT24(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned short)(a))<<32)|((unsigned int)(b))))
#define CONCAT26(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned short)(a))<<48)|(((unsigned __int64)(b))&((unsigned __int64)0x0000ffffffffffff))))
#define CONCAT28(a,b) ((unsigned __int64)(b)) /* odd width; keep lo as soft fallback */
#define CONCAT31(a,b) ((unsigned int)((((unsigned int)(a))<<8)|((unsigned char)(b))))
#define CONCAT41(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned int)(a))<<8)|((unsigned char)(b))))
#define CONCAT44(a,b) ((unsigned __int64)((((unsigned __int64)(unsigned int)(a))<<32)|((unsigned int)(b))))
/* CARRY4: unsigned carry-out of 32-bit add. SBORROW4: signed overflow on sub. */
#define CARRY4(a,b) ((unsigned int)(a) > (0xffffffffu - (unsigned int)(b)))
#define SBORROW4(a,b) ((int)((((unsigned int)(a)^(unsigned int)(b))&((unsigned int)(a)^(unsigned int)((a)-(b))))>>31))
#define ZEXT416(x) ((unsigned __int64)(unsigned int)(x))
#define ZEXT816(x) ((unsigned __int64)(x))
/* SUBPIECE: drop low n bytes, keep output width. */
#define SUB104(x,n) ((unsigned int)(((unsigned __int64)(x))>>(8*(n))))
#define SUB161(x,n) ((unsigned char)(((unsigned __int64)(x))>>(8*(n))))
/* CRT long-long helpers — compile stubs (CRT-as-fn bodies deferred). */
unsigned __int64 __cdecl __allmul(void);
unsigned __int64 __cdecl __aulldiv(void);
unsigned __int64 __cdecl __alldiv(void);
unsigned __int64 __fastcall __allshl(void);
unsigned __int64 __fastcall __allshr(void);
unsigned __int64 __cdecl __aullshr(void);
void __fastcall __security_check_cookie(unsigned int _StackCookie);
void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);

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
typedef void           *HLINE; /* rare Ghidra / FE alias seen in CE */
struct _iobuf;
typedef struct _iobuf FILE;
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
/* Ghidra often types 64-bit locals as LARGE_INTEGER for __all* helpers. */
typedef union _LARGE_INTEGER {
  struct { DWORD LowPart; LONG HighPart; } s;
  struct { DWORD LowPart; LONG HighPart; } u;
  __int64 QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;
typedef DWORD FARPROC; /* soft; real FARPROC is FARPROC callback — compile-only */
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
typedef struct { int _dummy; } *_ptiddata; /* CRT TLS placeholder */

int __cdecl FUN_004fabf0();
int __cdecl FUN_004fbc30();
int __cdecl FUN_004fbf10();
int __cdecl FUN_004fddb0();
int __cdecl FUN_004ff030();
int __cdecl FUN_00500820();
int __cdecl FUN_005017d0();
int __cdecl FUN_00501ea0();
int __cdecl FUN_005024b0();
extern void LAB_005015f3(void);
extern void LAB_005015fd(void);

uint FUN_005013a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  void *pvVar7;
  byte bVar8;
  int *piVar9;
  
  iVar4 = param_1[1];
  piVar6 = (int *)(iVar4 + 8);
  iVar5 = *(int *)(iVar4 + 8);
  while (iVar5 != -0x33959db1) {
    if (piVar6 == (int *)(*(int *)(iVar4 + 4) + 8 + iVar4)) {
      if (*piVar6 != -0x33959db1) {
        return (uint)piVar6 & 0xffffff00;
      }
      break;
    }
    piVar6 = (int *)((int)piVar6 + piVar6[1] + 8);
    iVar5 = *piVar6;
  }
  piVar2 = piVar6 + 2;
  piVar1 = (int *)(piVar6[1] + 8 + (int)piVar6);
  if ((piVar2 == (int *)0x0) || (piVar1 == (int *)0x0)) {
LAB_005015fd:
    return (uint)piVar6 & 0xffffff00;
  }
  piVar6 = (int *)*piVar2;
  while (piVar6 != (int *)0xea624f46) {
    if (piVar1 <= piVar2) goto LAB_005015f3;
    if (piVar6 == (int *)0x6e747542) {
      iVar4 = *param_1;
      iVar5 = piVar2[2];
      param_1[0x12] = iVar5;
      _free(*(void **)(iVar4 + 0x84));
      *(undefined4 *)(iVar4 + 0x84) = 0;
      if (iVar5 != 0) {
        pvVar7 = _malloc(iVar5 * 4);
        *(undefined4 *)(iVar4 + 0x84) = pvVar7;
      }
      *(int *)(iVar4 + 0x88) = iVar5;
    }
    piVar2 = (int *)((int)piVar2 + piVar2[1] + 8);
    piVar6 = (int *)*piVar2;
  }
  while (piVar2 < piVar1) {
    piVar9 = piVar2 + 2;
    piVar3 = (int *)((int)piVar2 + piVar2[1] + 8);
    param_1[3] = 0;
    param_1[5] = 0;
    if (piVar9 < piVar3) {
      do {
        iVar4 = *piVar9;
        if (iVar4 == 0x446a624f) {
          piVar6 = (int *)FUN_005017d0(param_1,piVar9 + 2,piVar9[1]);
          if ((char)piVar6 == '\0') goto LAB_005015fd;
        }
        else if (iVar4 == 0x5267734d) {
          FUN_005024b0(param_1,piVar9 + 2,0);
        }
        else if (iVar4 == 0x70726353) {
          FUN_00501ea0(param_1,piVar9 + 2,piVar9[1]);
        }
        piVar9 = (int *)((int)piVar9 + piVar9[1] + 8);
      } while (piVar9 < piVar3);
      if (param_1[3] != 0) {
        iVar4 = *(int *)(param_1[3] + 0x18);
        if (iVar4 == 4) {
          FUN_004fddb0();
        }
        else if (iVar4 == 6) {
          FUN_004fabf0();
        }
        for (iVar4 = *(int *)(param_1[3] + 0x4c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 4)) {
          if (*(int *)(iVar4 + 0x18) != 0) {
            for (iVar5 = *(int *)(param_1[3] + 0x4c);
                (iVar5 != 0 && (*(int *)(iVar5 + 0x30) != *(int *)(iVar4 + 0x18)));
                iVar5 = *(int *)(iVar5 + 4)) {
            }
            *(int *)(iVar4 + 0x18) = iVar5;
          }
        }
        iVar4 = param_1[3];
        for (iVar5 = *(int *)(iVar4 + 0x4c); (iVar5 != 0 && (*(int *)(iVar5 + 0x30) != 0x1744b3));
            iVar5 = *(int *)(iVar5 + 4)) {
        }
        *(int *)(iVar4 + 0x54) = iVar5;
        if (iVar5 != 0) {
          FUN_004ff030(iVar4);
        }
        *(undefined4 *)(iVar5 + 0x10) = 0;
        if (((char)param_1[2] == '\0') && (bVar8 = 0, *(int *)(iVar5 + 0x1c) != 0)) {
          do {
            FUN_004fbf10();
            bVar8 = bVar8 + 1;
          } while ((uint)bVar8 < *(uint *)(iVar5 + 0x1c));
        }
        if (param_1[5] == 0) {
          FUN_00500820();
        }
        else {
          FUN_004fbc30();
        }
      }
    }
    piVar2 = (int *)((int)piVar2 + piVar2[1] + 8);
    piVar6 = piVar2;
  }
LAB_005015f3:
  return CONCAT31((int3)((uint)piVar6 >> 8),1);
}
