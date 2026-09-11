/* spd-match: far pct=4.54 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_00503410();
int __cdecl FUN_005036e0();
int __cdecl FUN_00503ed0();
extern int DAT_006c16cc;
extern unsigned char *PTR_s_Bottom_Left_006f89e4;
extern unsigned char *PTR_s_Bottom_Right_006f89e0;
extern unsigned char *PTR_s_Frame_Number_006f89e8;
extern unsigned char *PTR_s_Top_Left_006f89d8;
extern unsigned char *PTR_s_Top_Right_006f89dc;

undefined4 FUN_005037e0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_14 [5];
  
  iVar3 = FUN_005036e0();
  *(undefined4 *)(iVar3 + 0x24) = 1;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_005036e0();
  FUN_00503ed0(iVar3);
  FUN_00503ed0(iVar3);
  FUN_00503ed0(iVar3);
  FUN_00503ed0(iVar3);
  puVar2 = PTR_s_Top_Left_006f89d8;
  iVar1 = *(int *)(iVar3 + 0x1c);
  local_14[4] = 0xff;
  local_14[3] = 0xff;
  local_14[2] = 0xff;
  local_14[1] = 0xff;
  while ((iVar1 != 0 && (iVar4 = __stricmp(*(char **)(iVar1 + 0xc),puVar2), iVar4 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  _free(*(void **)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar5 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar7 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar5;
    puVar8 = local_14;
    for (uVar6 = uVar7 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar2 = PTR_s_Top_Right_006f89dc;
  iVar1 = *(int *)(iVar3 + 0x1c);
  while ((iVar1 != 0 && (iVar4 = __stricmp(*(char **)(iVar1 + 0xc),puVar2), iVar4 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  _free(*(void **)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar5 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar7 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar5;
    puVar8 = local_14;
    for (uVar6 = uVar7 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar2 = PTR_s_Bottom_Right_006f89e0;
  iVar1 = *(int *)(iVar3 + 0x1c);
  while ((iVar1 != 0 && (iVar4 = __stricmp(*(char **)(iVar1 + 0xc),puVar2), iVar4 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  _free(*(void **)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar5 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar7 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar5;
    puVar8 = local_14;
    for (uVar6 = uVar7 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  puVar2 = PTR_s_Bottom_Left_006f89e4;
  iVar1 = *(int *)(iVar3 + 0x1c);
  while ((iVar1 != 0 && (iVar4 = __stricmp(*(char **)(iVar1 + 0xc),puVar2), iVar4 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  _free(*(void **)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar5 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar7 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar5;
    puVar8 = local_14;
    for (uVar6 = uVar7 >> 2; puVar8 = puVar8 + 1, uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  *(undefined4 *)(iVar3 + 0x24) = 9;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_005036e0();
  FUN_00503ed0(iVar3);
  puVar2 = PTR_s_Frame_Number_006f89e8;
  iVar1 = *(int *)(iVar3 + 0x1c);
  local_14[0] = 0;
  while ((iVar1 != 0 && (iVar4 = __stricmp(*(char **)(iVar1 + 0xc),puVar2), iVar4 != 0))) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  _free(*(void **)(iVar1 + 0x20));
  *(undefined4 *)(iVar1 + 0x20) = 0;
  if (*(size_t *)(iVar1 + 0x18) != 0) {
    puVar5 = _malloc(*(size_t *)(iVar1 + 0x18));
    uVar7 = *(uint *)(iVar1 + 0x18);
    *(undefined4 **)(iVar1 + 0x20) = puVar5;
    puVar8 = local_14;
    for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar8;
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  *(undefined4 *)(iVar3 + 0x24) = 10;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Simple Image");
  *(undefined4 *)(iVar3 + 0x24) = 0xb;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"String");
  *(undefined4 *)(iVar3 + 0x24) = 2;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Model");
  *(undefined4 *)(iVar3 + 0x24) = 3;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Movie");
  *(undefined4 *)(iVar3 + 0x24) = 7;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Effect");
  *(undefined4 *)(iVar3 + 0x24) = 8;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,&DAT_006c16cc);
  *(undefined4 *)(iVar3 + 0x24) = 4;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Group");
  *(undefined4 *)(iVar3 + 0x24) = 5;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = FUN_00503410(param_1,"Code List");
  *(undefined4 *)(iVar3 + 0x24) = 6;
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(undefined4 *)(iVar3 + 8) = 0;
    *(int *)(param_1 + 8) = iVar3;
  }
  else {
    iVar4 = *(int *)(iVar1 + 4);
    *(int *)(iVar3 + 4) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = iVar3;
    }
    *(int *)(iVar3 + 8) = iVar1;
    *(int *)(iVar1 + 4) = iVar3;
  }
  if (*(int *)(param_1 + 0xc) == iVar1) {
    *(int *)(param_1 + 0xc) = iVar3;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return 1;
}
