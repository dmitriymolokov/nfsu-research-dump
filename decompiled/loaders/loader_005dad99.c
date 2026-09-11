/* spd-match: far pct=6.71 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_inventory */
/* Pass A — minimal Ghidra → MSVC6 typedefs (not from speed.exe) */
/* /TP thiscall rewrite — bool is keyword; DAT_ as extern void* or code* */
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
typedef void            code(...);
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

int __cdecl FUN_005d91c9(...);
int __cdecl FUN_005d9fa1(...);
int __cdecl FUN_005f74cf(...);
extern int _DAT_006a0d98;
extern int _DAT_006a0da0;
extern int _DAT_006a0da8;
extern int _DAT_006a0db0;
extern int _DAT_006a0db8;
extern int _DAT_006a0dc0;
extern int _DAT_006a0dc8;
extern void LAB_005dadfd(...);
extern void LAB_005dae13(...);

struct ThisCallBox {
  int FUN_005dad99(undefined4 param_2, int param_3, int param_4, int param_5, uint param_6);
};
int ThisCallBox::FUN_005dad99(undefined4 param_2, int param_3, int param_4, int param_5, uint param_6) {
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  void *pvVar8;
  uint *puVar9;
  undefined8 uVar10;
  int local_80 [20];
  uint *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  uint local_10;
  uint local_c;
  undefined4 local_8;
  
  local_14 = (void *)0x0;
  if ((*(byte *)(*(int *)(((int)this) + 8) + 0x91) & 1) == 0) {
    local_10 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0dc8);
    local_c = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0dc0);
    uVar3 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0db8);
    uVar4 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0db0);
    uVar5 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0da8);
    uVar6 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0da0);
    uVar7 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d98);
    local_14 = _malloc(param_6 * 0x6c);
    if (local_14 == (void *)0x0) {
      iVar1 = -0x7ff8fff2;
      goto LAB_005dae13;
    }
    uVar2 = 0;
    pvVar8 = local_14;
    do {
      local_80[uVar2] = (int)pvVar8;
      uVar2 = uVar2 + 1;
      pvVar8 = (void *)((int)pvVar8 + param_6 * 4);
    } while (uVar2 < 0x1b);
    uVar2 = 0;
    do {
      uVar10 = FUN_005d91c9(local_80[uVar2],param_6);
      iVar1 = (int)uVar10;
      if (iVar1 < 0) goto LAB_005dae13;
      uVar2 = (int)((ulonglong)uVar10 >> 0x20) + 1;
    } while (uVar2 < 0x13);
    if (param_6 != 0) {
      local_8 = param_6;
      puVar9 = local_30;
      do {
        *(undefined4 *)((local_80[0x13] - (int)local_30) + (int)puVar9) =
             *(undefined4 *)(((int)this) + 0x20);
        *puVar9 = local_10;
        *(uint *)((local_2c - (int)local_30) + (int)puVar9) = local_c;
        *(undefined4 *)((local_28 - (int)local_30) + (int)puVar9) = uVar3;
        *(undefined4 *)((local_24 - (int)local_30) + (int)puVar9) = uVar4;
        *(undefined4 *)((local_20 - (int)local_30) + (int)puVar9) = uVar5;
        *(undefined4 *)((local_1c - (int)local_30) + (int)puVar9) = uVar6;
        *(undefined4 *)((local_18 - (int)local_30) + (int)puVar9) = uVar7;
        puVar9 = puVar9 + 1;
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
    uVar2 = param_6 & 0xffffff;
    local_8 = CONCAT13(0x11,(int3)param_6);
    iVar1 = FUN_005d9fa1(param_2,local_8,local_80[0],param_3,0,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,uVar2 | 0x21000000,local_80[1],param_3,local_80[0],4);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_8,local_80[2],local_80[1],0,8);
    if (iVar1 < 0) goto LAB_005dae13;
    local_c = uVar2 | 0x24000000;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[3],local_80[2],local_80[0x13],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,uVar2 | 0x16000000,local_80[4],local_80[3],0,4);
    if (iVar1 < 0) goto LAB_005dae13;
    local_10 = uVar2 | 0x25000000;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[5],local_30,local_80[1],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[6],local_80[5],local_2c,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[7],local_80[6],local_80[1],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[8],local_80[7],local_28,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[9],local_80[8],local_80[1],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[10],local_80[9],local_24,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[0xb],local_80[10],local_80[4],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[0xc],local_80[0xb],local_20,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[0xd],local_80[0xc],local_1c,0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,uVar2 | 0x22000000,local_80[0xe],param_3,local_80[0],0x2000017);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_10,local_80[0xf],local_80[0xd],local_80[0xe],0);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[0x10],local_80[0xb],local_80[0xf],4);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_8,local_80[0x11],local_80[0x10],0,8);
    if (iVar1 < 0) goto LAB_005dae13;
    iVar1 = FUN_005d9fa1(param_2,local_c,local_80[0x12],local_80[0x11],local_18,0);
    if (iVar1 < 0) goto LAB_005dae13;
    if (param_4 != 0) {
      iVar1 = FUN_005d9fa1(param_2,uVar2 | 0x10000000,param_4,local_80[0x12],0,0);
      if (iVar1 < 0) goto LAB_005dae13;
    }
    if (param_5 != 0) {
      uVar2 = uVar2 | 0x10000000;
      param_3 = local_80[0x10];
      goto LAB_005dadfd;
    }
  }
  else {
    if (param_4 != 0) {
      iVar1 = FUN_005d9fa1(param_2,param_6 & 0xffffff | 0x19000000,param_4,param_3,0,0);
      if (iVar1 < 0) goto LAB_005dae13;
    }
    if (param_5 != 0) {
      uVar2 = param_6 & 0xffffff | 0x1a000000;
LAB_005dadfd:
      iVar1 = FUN_005d9fa1(param_2,uVar2,param_5,param_3,0x400000000);
      if (iVar1 < 0) goto LAB_005dae13;
    }
  }
  iVar1 = 0;
LAB_005dae13:
  _free(local_14);
  return iVar1;
}
