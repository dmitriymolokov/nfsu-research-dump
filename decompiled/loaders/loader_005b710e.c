/* spd-match: far pct=4.31 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_005b1f01();
int __cdecl FUN_005b2aff();
int __cdecl FUN_005b2b58();
int __cdecl FUN_005b2b74();
int __cdecl FUN_005b2c79();
int __cdecl FUN_005b2d02();
int __cdecl FUN_005b2d7a();
int __cdecl FUN_005b3588();
int __cdecl FUN_005b3675();
int __cdecl FUN_005b5fc3();
extern void LAB_005b71d2(void);
extern void LAB_005b721a(void);
extern void LAB_005b7229(void);

int FUN_005b710e(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 local_3c [4];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  int local_2c;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  size_t local_18;
  int *local_14;
  undefined4 *local_10;
  int local_c;
  int local_8;
  
  iVar5 = 0;
  local_10 = (undefined4 *)0x0;
  pvVar2 = _malloc(0x1c);
  if (pvVar2 == (void *)0x0) {
    local_c = 0;
  }
  else {
    local_c = FUN_005b2aff();
  }
  if (local_c == 0) {
    return -0x7ff8fff2;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((((iVar1 == 0) || (*(int *)(iVar1 + 4) != 10)) ||
      (iVar3 = *(int *)(param_1 + 0x14), iVar3 == 0)) || (*(int *)(iVar3 + 4) != 2)) {
LAB_005b721a:
    iVar5 = -0x7fffbffb;
  }
  else if ((*(uint *)(iVar1 + 0x1c) & 2) == 0) {
    local_14 = (int *)(iVar3 + 0x10);
    if (((*local_14 != 9) || (local_2c = *(int *)(iVar3 + 0x18), local_2c == 0)) ||
       (*(int *)(iVar1 + 0x20) == 0)) goto LAB_005b721a;
    iVar5 = FUN_005b2d7a(*(int *)(iVar1 + 0x20),&local_24,local_3c,local_38,local_34,local_30,
                         &local_18);
    if (iVar5 < 0) {
      pcVar7 = "ID3DXEffectCompiler: There was a problem getting variable type";
LAB_005b71d2:
      FUN_005b1f01(local_8 + 0xc,local_14,0,pcVar7);
    }
    else {
      if (((local_24 != 0) && (local_24 != 4)) &&
         ((local_24 != 3 && ((local_24 != 1 && (local_24 != 2)))))) {
        FUN_005b1f01(local_8 + 0xc,local_14,0,
                     "ID3DXEffectCompiler: Only numeric types and strings are allowed as annotations"
                    );
        goto LAB_005b721a;
      }
      local_10 = _malloc(local_18);
      if (local_10 == (undefined4 *)0x0) {
        iVar5 = -0x7ff8fff2;
      }
      else {
        puVar6 = local_10;
        for (uVar4 = local_18 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        for (uVar4 = local_18 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined1 *)puVar6 = 0;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        local_28 = local_10;
        iVar5 = FUN_005b3588(*(undefined4 *)(iVar1 + 0x20),&local_28);
        if ((-1 < iVar5) && (iVar5 = FUN_005b2b74(local_10,local_18,&local_20), -1 < iVar5)) {
          iVar5 = FUN_005b3675(*(undefined4 *)(iVar1 + 0x20),local_14,0,0,param_3,local_c,&local_1c,
                               0);
          if (iVar5 < 0) {
            pcVar7 = "ID3DXEffectCompiler: Error initializing annotation type";
            goto LAB_005b71d2;
          }
          iVar5 = FUN_005b2d02(local_c);
          if (-1 < iVar5) {
            iVar5 = FUN_005b2c79(local_1c,0);
            if ((-1 < iVar5) && (iVar5 = FUN_005b2c79(local_20,0), -1 < iVar5)) {
              pvVar2 = _malloc(0x48);
              if (pvVar2 == (void *)0x0) {
                iVar3 = 0;
              }
              else {
                iVar3 = FUN_005b5fc3();
              }
              if (iVar3 == 0) {
                iVar5 = -0x7ff8fff2;
              }
              else {
                *(int *)(iVar3 + 0x20) = local_2c;
                *(undefined4 *)(iVar3 + 0x24) = 0;
                *(undefined4 *)(iVar3 + 0x28) = 0;
                *(undefined4 *)(iVar3 + 0x40) = local_1c;
                *(undefined4 *)(iVar3 + 0x3c) = local_20;
                *(undefined4 *)(iVar3 + 0x44) = 0;
                *(int *)(iVar3 + 0x2c) = iVar1;
                *(int *)(iVar3 + 0x34) = *param_4;
                *(int *)(iVar3 + 0x38) = *(int *)(param_1 + 0x14) + 0x10;
                *param_4 = iVar3;
              }
            }
            goto LAB_005b7229;
          }
        }
      }
    }
  }
  FUN_005b2b58(1);
LAB_005b7229:
  if (local_10 != (undefined4 *)0x0) {
    _free(local_10);
  }
  return iVar5;
}
