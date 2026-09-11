/* spd-match: far pct=9.45 flags=/O1 method=thiscall_tp source=m375_sync_decomp:m375_inventory */
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
extern int _DAT_006a0d78;
extern int _DAT_006a0d98;
extern int _DAT_006a0da8;
extern int _DAT_006a0dd0;
extern int _DAT_006a0dd8;
extern int _DAT_006a0de0;
extern int _DAT_006a0de8;
extern int _DAT_006a0df0;
extern void LAB_005dbad6(...);

struct ThisCallBox {
  int FUN_005db2b5(undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, uint param_6);
};
int ThisCallBox::FUN_005db2b5(undefined4 param_2, undefined4 param_3, int param_4, undefined4 param_5, uint param_6) {
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  void *pvVar9;
  undefined8 uVar10;
  int local_e0 [40];
  uint *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  void *local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_20 = (void *)0x0;
  if ((*(byte *)(*(int *)(((int)this) + 8) + 0x91) & 1) == 0) {
    local_10 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0df0);
    local_c = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0de8);
    local_8 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0de0);
    uVar2 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0dd8);
    uVar3 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0dd0);
    uVar4 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0da8);
    uVar5 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d98);
    uVar6 = FUN_005f74cf(*(undefined4 *)(*(int *)(((int)this) + 8) + 0x50),0,0,_DAT_006a0d78);
    local_20 = _malloc(param_6 * 0xc0);
    if (local_20 == (void *)0x0) {
      iVar8 = -0x7ff8fff2;
      goto LAB_005dbad6;
    }
    uVar1 = 0;
    pvVar9 = local_20;
    do {
      local_e0[uVar1] = (int)pvVar9;
      uVar1 = uVar1 + 1;
      pvVar9 = (void *)((int)pvVar9 + param_6 * 4);
    } while (uVar1 < 0x30);
    uVar1 = 0;
    do {
      uVar10 = FUN_005d91c9(local_e0[uVar1],param_6);
      iVar8 = (int)uVar10;
      if (iVar8 < 0) goto LAB_005dbad6;
      uVar1 = (int)((ulonglong)uVar10 >> 0x20) + 1;
    } while (uVar1 < 0x27);
    if (param_6 != 0) {
      local_18 = local_3c - (int)local_40;
      local_1c = local_24 - (int)local_40;
      local_14 = param_6;
      puVar7 = local_40;
      do {
        *(undefined4 *)((local_e0[0x27] - (int)local_40) + (int)puVar7) = local_10;
        *puVar7 = local_c;
        *(uint *)(local_18 + (int)puVar7) = local_8;
        *(undefined4 *)((local_38 - (int)local_40) + (int)puVar7) = uVar2;
        *(undefined4 *)((local_34 - (int)local_40) + (int)puVar7) = uVar3;
        *(undefined4 *)((local_30 - (int)local_40) + (int)puVar7) = uVar4;
        *(undefined4 *)((local_2c - (int)local_40) + (int)puVar7) = uVar5;
        *(undefined4 *)((local_28 - (int)local_40) + (int)puVar7) = uVar6;
        *(undefined4 *)(local_1c + (int)puVar7) = *(undefined4 *)(((int)this) + 0x20);
        puVar7 = puVar7 + 1;
        local_14 = local_14 - 1;
      } while (local_14 != 0);
    }
    if (param_4 == 0) {
      param_4 = local_24;
    }
    local_c = param_6 & 0xffffff;
    local_10 = CONCAT13(0x11,(int3)param_6);
    iVar8 = FUN_005d9fa1(param_2,local_10,local_e0[0],param_3,0,0);
    if (iVar8 < 0) goto LAB_005dbad6;
    local_14 = local_c | 0x21000000;
    iVar8 = FUN_005d9fa1(param_2,local_14,local_e0[1],param_3,local_e0[0],4);
    if (((iVar8 < 0) || (iVar8 = FUN_005d9fa1(param_2,local_10,local_e0[2],param_4,0,0), iVar8 < 0))
       || (iVar8 = FUN_005d9fa1(param_2,local_14,local_e0[3],param_4,local_e0[2],4), iVar8 < 0))
    goto LAB_005dbad6;
    local_1c = local_c | 0x20000000;
    iVar8 = FUN_005d9fa1(param_2,local_1c,local_e0[4],local_e0[1],local_e0[3],4);
    if (((iVar8 < 0) ||
        (iVar8 = FUN_005d9fa1(param_2,local_14,local_e0[5],local_e0[1],local_e0[3],4), iVar8 < 0))
       || (iVar8 = FUN_005d9fa1(param_2,local_c | 0x12000000,local_e0[6],local_e0[5],0,4), iVar8 < 0
          )) goto LAB_005dbad6;
    uVar1 = local_c | 0x25000000;
    iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[7],local_e0[4],local_e0[6],0x14);
    if (((iVar8 < 0) ||
        (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[8],local_e0[7],local_e0[7],0x14), iVar8 < 0))
       || (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[9],local_e0[8],local_e0[0x27],0), iVar8 < 0))
    goto LAB_005dbad6;
    local_8 = local_c | 0x24000000;
    iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[10],local_e0[9],local_40,0);
    if ((((((iVar8 < 0) ||
           (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0xb],local_e0[8],local_e0[10],0), iVar8 < 0)
           ) || (iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0xc],local_e0[0xb],local_3c,0),
                iVar8 < 0)) ||
         ((iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0xd],local_e0[8],local_e0[0xc],0), iVar8 < 0
          || (iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0xe],local_e0[0xd],local_38,0),
             iVar8 < 0)))) ||
        (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0xf],local_e0[8],local_e0[0xe],0), iVar8 < 0))
       || ((iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0x10],local_e0[0xf],local_34,0), iVar8 < 0
           || (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x11],local_e0[7],local_e0[0x10],0),
              iVar8 < 0)))) goto LAB_005dbad6;
    local_18 = local_c | 0x22000000;
    iVar8 = FUN_005d9fa1(param_2,local_18,local_e0[0x12],local_e0[3],local_e0[1],0x2000017);
    if (((((iVar8 < 0) ||
          (((iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x13],local_e0[0x11],local_30,0), iVar8 < 0
            || (iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0x14],local_e0[0x13],local_2c,0),
               iVar8 < 0)) ||
           (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x15],local_e0[0x14],local_e0[0x12],0),
           iVar8 < 0)))) ||
         ((((iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0x16],local_e0[0x15],local_e0[0x11],0),
            iVar8 < 0 ||
            (iVar8 = FUN_005d9fa1(param_2,local_18,local_e0[0x1a],param_4,local_e0[2],0x2000017),
            iVar8 < 0)) ||
           (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x1b],local_e0[0x1a],local_28,0), iVar8 < 0)
           ) || ((iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0x1c],local_e0[0x16],local_e0[0x1b],
                                       0), iVar8 < 0 ||
                 (iVar8 = FUN_005d9fa1(param_2,local_1c,local_e0[0x1d],param_3,param_4,0), iVar8 < 0
                 )))))) ||
        ((iVar8 = FUN_005d9fa1(param_2,local_14,local_e0[0x1e],param_3,param_4,0), iVar8 < 0 ||
         (((iVar8 = FUN_005d9fa1(param_2,local_10,local_e0[0x1f],local_e0[0x1d],0,0), iVar8 < 0 ||
           (iVar8 = FUN_005d9fa1(param_2,local_18,local_e0[0x20],local_e0[0x1d],local_e0[0x1f],
                                 0x2000017), iVar8 < 0)) ||
          (iVar8 = FUN_005d9fa1(param_2,local_10,local_e0[0x21],local_e0[0x1e],0,0), iVar8 < 0))))))
       || (((iVar8 = FUN_005d9fa1(param_2,local_c | 0x23000000,local_e0[0x22],local_e0[0x1e],
                                  local_e0[0x21],0x2000017), iVar8 < 0 ||
            (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x23],local_e0[0x20],local_e0[0x22],
                                  0x2000017), iVar8 < 0)) ||
           ((iVar8 = FUN_005d9fa1(param_2,local_8,local_e0[0x24],local_e0[0x1c],local_e0[0x1c],0),
            iVar8 < 0 ||
            ((iVar8 = FUN_005d9fa1(param_2,local_10,local_e0[0x25],local_e0[0x24],0,0), iVar8 < 0 ||
             (iVar8 = FUN_005d9fa1(param_2,uVar1,local_e0[0x26],local_e0[0x23],local_e0[0x25],0),
             uVar1 = local_8, iVar8 < 0)))))))) goto LAB_005dbad6;
  }
  else {
    local_e0[0x1c] = param_3;
    if (param_4 == 0) {
      local_e0[0x26] = 0;
      uVar1 = param_6 & 0xffffff | 0x1b000000;
    }
    else {
      uVar1 = param_6 & 0xffffff | 0x26000000;
      local_e0[0x26] = param_4;
    }
  }
  iVar8 = FUN_005d9fa1(param_2,uVar1,param_5,local_e0[0x1c],local_e0[0x26]);
  if (-1 < iVar8) {
    iVar8 = 0;
  }
LAB_005dbad6:
  _free(local_20);
  return iVar8;
}
