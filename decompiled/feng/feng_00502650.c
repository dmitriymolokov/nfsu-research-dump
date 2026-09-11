/* spd-match: far pct=3.15 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

typedef void _func_void_void_ptr(void);
int __cdecl FUN_004fe980();
int __cdecl FUN_004ffb00();
extern void LAB_004fe960(void);
extern void LAB_004fe970(void);
extern void LAB_00685a80(void);
void *ExceptionList;

undefined4 FUN_00502650(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint local_28;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685a80;
  local_c = ExceptionList;
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 8);
  piVar5 = (int *)(iVar2 + 8);
  while ((iVar3 != 0x67726154 && (piVar5 != (int *)(*(int *)(iVar2 + 4) + 8 + iVar2)))) {
    piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
    iVar3 = *piVar5;
  }
  if (*piVar5 == 0x67726154) {
    piVar10 = piVar5 + 2;
    piVar6 = (int *)(piVar5[1] + (int)piVar10);
    piVar5 = piVar6;
    if (piVar10 < piVar6) {
      param_1 = (int *)0x0;
      ExceptionList = &local_c;
      do {
        if ((short)*piVar10 == 0x6354) {
          iVar2 = piVar10[1];
          *(int *)(*piVar4 + 0x60) = iVar2;
          piVar7 = _malloc(iVar2 * 0x10 + 4);
          piVar5 = (int *)0x0;
          local_4 = 0;
          if (piVar7 != (int *)0x0) {
            piVar5 = piVar7 + 1;
            *piVar7 = iVar2;
            _eh_vector_constructor_iterator_
                      (piVar5,0x10,iVar2,(_func_void_void_ptr *)&LAB_004fe960,
                       (_func_void_void_ptr *)&LAB_004fe970);
          }
          local_4 = 0xffffffff;
          *(int **)(*piVar4 + 100) = piVar5;
        }
        else if ((short)*piVar10 == 0x744d) {
          uVar1 = *(ushort *)((int)piVar10 + 2);
          *(int *)(*(int *)(*piVar4 + 100) + (int)param_1) = piVar10[1];
          uVar8 = (uVar1 >> 2) - 1;
          FUN_004fe980(*(int *)(*piVar4 + 100) + (int)param_1,uVar8);
          local_28 = 0;
          if (uVar8 != 0) {
            do {
              local_4 = 1;
              FUN_004ffb00(*piVar4);
              iVar2 = *(int *)(*piVar4 + 100);
              iVar3 = *(int *)(iVar2 + 4 + (int)param_1);
              iVar9 = iVar2 + (int)param_1;
              local_4 = 0xffffffff;
              if (*(int *)(iVar2 + 8 + (int)param_1) == iVar3) {
                FUN_004fe980(iVar9,iVar3 + 1);
              }
              *(undefined4 *)(*(int *)(iVar9 + 0xc) + *(int *)(iVar9 + 8) * 4) = 0;
              local_28 = local_28 + 1;
              *(int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1;
            } while (local_28 < uVar8);
          }
          param_1 = (int *)((int)param_1 + 0x10);
        }
        piVar5 = (int *)(uint)*(ushort *)((int)piVar10 + 2);
        piVar10 = (int *)((int)(piVar10 + 1) + (int)piVar5);
      } while (piVar10 < piVar6);
    }
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)piVar5 >> 8),1);
}
