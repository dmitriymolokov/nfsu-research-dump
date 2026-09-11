/* spd-match: far pct=3.04 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_00565410();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
extern int DAT_006f2274;
extern void LAB_00565659(void);

int * FUN_00565550(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6,
                  uint *param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  size_t _Size;
  
  iVar1 = param_1 + 0x3c;
  uVar9 = param_2;
  do {
    FUN_0063f190(iVar1);
    uVar9 = uVar9 + 3 & 0xfffffffc;
    if ((int)uVar9 < 0x10) {
      uVar9 = 0x10;
    }
    piVar11 = (int *)0x0;
    param_2 = 0;
    iVar10 = 0x7fffffff;
    if (param_5 == 0) {
      piVar6 = *(int **)(param_1 + 8);
      if (piVar6 != (int *)(param_1 + 4)) {
        piVar11 = (int *)0x0;
        do {
          iVar8 = (int)((int)piVar6 + param_4 + (piVar6[2] - uVar9) & param_3 - 1U) % param_3;
          iVar4 = (piVar6[2] - iVar8) - uVar9;
          if ((((iVar4 == 0) || (0xf < iVar4)) && (iVar4 < iVar10)) &&
             (iVar10 = iVar4, piVar11 = piVar6, param_2 = iVar8, param_6 == 0)) break;
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != (int *)(param_1 + 4));
        goto LAB_00565659;
      }
    }
    else {
      piVar6 = *(int **)(param_1 + 4);
      if (piVar6 != (int *)(param_1 + 4)) {
        do {
          iVar8 = (int)(param_3 - (param_4 + (int)piVar6 & param_3 - 1U)) % param_3;
          iVar4 = (piVar6[2] - iVar8) - uVar9;
          if (((iVar4 == 0) || (0xf < iVar4)) &&
             ((iVar4 < iVar10 && (iVar10 = iVar4, piVar11 = piVar6, param_2 = iVar8, param_6 == 0)))
             ) break;
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)(param_1 + 4));
LAB_00565659:
        if (piVar11 != (int *)0x0) {
          uVar9 = uVar9 + param_2;
          if (param_5 == 0) {
            iVar10 = piVar11[2] - uVar9;
            piVar11[2] = iVar10;
            piVar6 = (int *)(iVar10 + (int)piVar11);
            if (iVar10 == 0) {
              iVar10 = *piVar11;
              piVar2 = (int *)piVar11[1];
              *piVar2 = iVar10;
              *(int **)(iVar10 + 4) = piVar2;
            }
          }
          else {
            if (piVar11[2] - uVar9 != 0) {
              piVar6 = (int *)((int)piVar11 + uVar9);
              piVar6[2] = piVar11[2] - uVar9;
              piVar6[3] = 0x44443333;
              iVar10 = *piVar11;
              *piVar11 = (int)piVar6;
              *(int **)(iVar10 + 4) = piVar6;
              piVar6[1] = (int)piVar11;
              *piVar6 = iVar10;
            }
            iVar10 = *piVar11;
            piVar6 = (int *)piVar11[1];
            *piVar6 = iVar10;
            *(int **)(iVar10 + 4) = piVar6;
            piVar6 = piVar11;
          }
          if (*(char *)(param_1 + 0x38) != '\0') {
            piVar11 = piVar6;
            for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *piVar11 = -0x55555556;
              piVar11 = piVar11 + 1;
            }
            for (uVar7 = uVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined1 *)piVar11 = 0xaa;
              piVar11 = (int *)((int)piVar11 + 1);
            }
          }
          iVar10 = *(int *)(param_1 + 0x28) + uVar9;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          *(int *)(param_1 + 0x28) = iVar10;
          if (*(int *)(param_1 + 0x2c) < iVar10) {
            *(int *)(param_1 + 0x2c) = iVar10;
          }
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x24) - iVar10;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x2c);
          FUN_0063f1a0(iVar1);
          *param_7 = uVar9;
          return piVar6;
        }
      }
    }
    FUN_0063f1a0(iVar1);
    _Size = uVar9 + 0x10 + param_3;
    if ((int)_Size < (int)DAT_006f2274) {
      _Size = DAT_006f2274;
    }
    piVar11 = _malloc(0x10);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11[3] = _Size;
      pvVar5 = _malloc(_Size);
      piVar11[2] = (int)pvVar5;
    }
    if (piVar11[2] == 0) {
      _free((void *)piVar11[2]);
      _free(piVar11);
      return (int *)0x0;
    }
    iVar10 = piVar11[3];
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + iVar10;
    FUN_00565410(param_1,iVar10);
    puVar3 = *(undefined4 **)(param_1 + 0x18);
    *puVar3 = piVar11;
    *(int **)(param_1 + 0x18) = piVar11;
    piVar11[1] = (int)puVar3;
    *piVar11 = param_1 + 0x14;
  } while( true );
}
