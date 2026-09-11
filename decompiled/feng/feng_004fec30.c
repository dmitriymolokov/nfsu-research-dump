/* spd-match: far pct=3.47 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_004fe260();
int __cdecl FUN_004fe3d0();
int __cdecl FUN_004fe570();
int __cdecl FUN_004fefb0();
int __cdecl FUN_004ff030();
int __cdecl FUN_00502970();
int __cdecl FUN_00502cd0();
int __cdecl FUN_00503330();
int __cdecl FUN_005033d0();
extern unsigned char *DAT_006f9fdc;
extern int DAT_007460c8;
extern unsigned char *PTR_FUN_006c1810;
extern unsigned char *PTR_FUN_006c181c;
extern unsigned char *PTR_LAB_006c2c4c;
extern void LAB_00685ab6(void);
void *ExceptionList;

undefined4 * FUN_004fec30(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_00685ab6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0xabadcafe;
  param_1[2] = 0xabadcafe;
  *param_1 = &PTR_FUN_006c1810;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = &PTR_LAB_006c2c4c;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = &PTR_LAB_006c2c4c;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  iVar5 = DAT_006f9fdc + 1;
  param_1[3] = DAT_006f9fdc;
  DAT_006f9fdc = iVar5;
  uVar7 = *(uint *)(param_2 + 0x30);
  local_4 = 2;
  uStack_3 = 0;
  FUN_005033d0(&DAT_007460c8);
  param_1[0xb] = 0;
  puVar2 = (undefined4 *)FUN_00503330(&DAT_007460c8);
  param_1[0xc] = uVar7;
  param_1[0xb] = puVar2;
  for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 0x20);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)(param_2 + 0x22);
  param_1[9] = *(undefined4 *)(param_2 + 0x24);
  FUN_004fefb0();
  for (iVar5 = *(int *)(param_2 + 0x3c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    puVar2 = (undefined4 *)FUN_004fe570();
    puVar2[1] = 0xabadcafe;
    puVar2[2] = 0xabadcafe;
    *puVar2 = &PTR_FUN_006c181c;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    local_10 = *(int *)(iVar5 + 0x10);
    FUN_004fe3d0(puVar2,local_10);
    puVar2[3] = *(undefined4 *)(iVar5 + 0xc);
    if (local_10 != 0) {
      local_14 = 0;
      do {
        FUN_004fe260(*(int *)(iVar5 + 0x14) + local_14);
        local_14 = local_14 + 0xc;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
    iVar3 = param_1[0x10];
    if (iVar3 == 0) {
      iVar4 = param_1[0xf];
      puVar2[1] = iVar4;
      if (iVar4 != 0) {
        *(undefined4 **)(iVar4 + 8) = puVar2;
      }
      puVar2[2] = 0;
      param_1[0xf] = puVar2;
    }
    else {
      iVar4 = *(int *)(iVar3 + 4);
      puVar2[1] = iVar4;
      if (iVar4 != 0) {
        *(undefined4 **)(iVar4 + 8) = puVar2;
      }
      puVar2[2] = iVar3;
      *(undefined4 **)(iVar3 + 4) = puVar2;
    }
    if (param_1[0x10] == iVar3) {
      param_1[0x10] = puVar2;
    }
    param_1[0xe] = param_1[0xe] + 1;
  }
  for (iVar5 = *(int *)(param_2 + 0x4c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
    iVar3 = FUN_00502cd0();
    *(undefined4 *)(iVar3 + 0x2c) = 0;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    local_4 = 3;
    iVar4 = FUN_00502970(iVar3,iVar5,param_3);
    iVar3 = param_1[0x14];
    local_4 = 2;
    if (iVar4 != 0) {
      if (iVar3 == 0) {
        iVar1 = param_1[0x13];
        *(int *)(iVar4 + 4) = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar4;
        }
        *(undefined4 *)(iVar4 + 8) = 0;
        param_1[0x13] = iVar4;
      }
      else {
        iVar1 = *(int *)(iVar3 + 4);
        *(int *)(iVar4 + 4) = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 8) = iVar4;
        }
        *(int *)(iVar4 + 8) = iVar3;
        *(int *)(iVar3 + 4) = iVar4;
      }
      if (param_1[0x14] == iVar3) {
        param_1[0x14] = iVar4;
      }
      param_1[0x12] = param_1[0x12] + 1;
    }
  }
  iVar5 = param_1[0x13];
  if (iVar5 != 0) {
    do {
      if (*(int *)(iVar5 + 0x30) == *(int *)(*(int *)(param_2 + 0x54) + 0x30)) break;
      iVar5 = *(int *)(iVar5 + 4);
    } while (iVar5 != 0);
  }
  param_1[0x15] = iVar5;
  if (iVar5 != 0) {
    FUN_004ff030(param_1);
  }
  iVar5 = *(int *)(param_2 + 0x4c);
  iVar3 = param_1[0x13];
  do {
    if (iVar5 == 0) {
      ExceptionList = local_c;
      return param_1;
    }
    if (*(int *)(iVar5 + 0x18) != 0) {
      iVar4 = param_1[0x13];
      if (iVar4 != 0) {
        do {
          if (*(int *)(iVar4 + 0x30) == *(int *)(*(int *)(iVar5 + 0x18) + 0x30)) break;
          iVar4 = *(int *)(iVar4 + 4);
        } while (iVar4 != 0);
      }
      *(int *)(iVar3 + 0x18) = iVar4;
    }
    iVar5 = *(int *)(iVar5 + 4);
    iVar3 = *(int *)(iVar3 + 4);
  } while( true );
}
