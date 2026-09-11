/* spd-match: far pct=8.06 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_004d1790();
int __cdecl FUN_004d1f30();
int __cdecl FUN_004d2700();
int __cdecl FUN_004d2820();
int __cdecl FUN_004d2f60();
int __cdecl FUN_004d32e0();
int __cdecl FUN_004d3b60();
int __cdecl FUN_004d3f30();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004f6910();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
extern unsigned char *DAT_0073578c;
extern int DAT_00735e20;
extern int DAT_00746104;
extern void LAB_004d0c1c(void);
extern void LAB_004d0c33(void);
extern void LAB_004d0c44(void);
extern void LAB_004d0cec(void);
extern void LAB_004d0d0b(void);
extern void LAB_004d0d22(void);
extern void LAB_004d0e40(void);
extern void LAB_004d0e57(void);
extern void LAB_004d0e68(void);
extern void LAB_004d0f0c(void);
extern void LAB_004d0f23(void);
extern void LAB_004d0f34(void);
extern void LAB_004d0fdc(void);
extern void LAB_004d0ff3(void);
extern void LAB_004d1004(void);
extern void LAB_004d10ac(void);
extern void LAB_004d10c3(void);
extern void LAB_004d10d4(void);
extern void LAB_004d117c(void);
extern void LAB_004d1193(void);
extern void LAB_004d11a4(void);
extern void LAB_004d124c(void);
extern void LAB_004d1263(void);
extern void LAB_004d1274(void);
extern void LAB_004d131c(void);
extern void LAB_004d1333(void);
extern void LAB_004d1344(void);
extern void LAB_004d13ef(void);
extern void LAB_004d1406(void);
extern void LAB_004d1417(void);

void FUN_004d0b70(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int local_24;
  byte local_20;
  byte local_1f [31];
  
  local_24 = 1;
  do {
    FUN_004f68c0(0x20,"OptionData_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d0c33:
      if (iVar5 == 0) {
LAB_004d0c44:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d0c33;
          goto LAB_004d0c1c;
        }
        goto LAB_004d0c44;
      }
LAB_004d0c1c:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d0c33;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"OptionName_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d0d0b:
      iVar3 = 0;
      if (iVar5 == 0) {
LAB_004d0d22:
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004ef050(iVar8);
        iVar3 = DAT_0073578c;
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        iVar3 = DAT_0073578c;
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d0d0b;
          goto LAB_004d0cec;
        }
        goto LAB_004d0d22;
      }
LAB_004d0cec:
      if ((iVar3 == 0) ||
         (iVar4 = FUN_004ffb70(), iVar3 = DAT_0073578c, iVar5 = DAT_0073578c, iVar4 == 0))
      goto LAB_004d0d0b;
    }
    FUN_004f6910(iVar4);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar1 = pbVar6 + 1;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    if (((iVar3 != 0) && (iVar5 = FUN_004f3f90(&DAT_00746104), iVar5 != 0)) &&
       (iVar5 = *(int *)(iVar5 + 0x18), iVar5 != 0)) {
      iVar3 = *(int *)(iVar5 + 0x88);
      iVar4 = 0;
      if (iVar3 != 0) {
        piVar7 = *(int **)(iVar5 + 0x84);
        do {
          if (*(int *)(*piVar7 + 0x10) == iVar8) {
            iVar4 = *piVar7;
          }
          piVar7 = piVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (iVar4 != 0) {
          *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 0x4000000;
        }
      }
    }
    FUN_004f68c0(0x20,"SelectButton_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d0e57:
      if (iVar5 == 0) {
LAB_004d0e68:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d0e57;
          goto LAB_004d0e40;
        }
        goto LAB_004d0e68;
      }
LAB_004d0e40:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d0e57;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"LeftArrow_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d0f23:
      if (iVar5 == 0) {
LAB_004d0f34:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d0f23;
          goto LAB_004d0f0c;
        }
        goto LAB_004d0f34;
      }
LAB_004d0f0c:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d0f23;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"RightArrow_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d0ff3:
      if (iVar5 == 0) {
LAB_004d1004:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d0ff3;
          goto LAB_004d0fdc;
        }
        goto LAB_004d1004;
      }
LAB_004d0fdc:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d0ff3;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"OptionNametext_%d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d10c3:
      if (iVar5 == 0) {
LAB_004d10d4:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d10c3;
          goto LAB_004d10ac;
        }
        goto LAB_004d10d4;
      }
LAB_004d10ac:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d10c3;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"option_buttonR_%02d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d1193:
      if (iVar5 == 0) {
LAB_004d11a4:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d1193;
          goto LAB_004d117c;
        }
        goto LAB_004d11a4;
      }
LAB_004d117c:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d1193;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"option_buttonL_%02d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d1263:
      if (iVar5 == 0) {
LAB_004d1274:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d1263;
          goto LAB_004d124c;
        }
        goto LAB_004d1274;
      }
LAB_004d124c:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d1263;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"minus_%02d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d1333:
      if (iVar5 == 0) {
LAB_004d1344:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d1333;
          goto LAB_004d131c;
        }
        goto LAB_004d1344;
      }
LAB_004d131c:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d1333;
    }
    FUN_004f6910(iVar3);
    FUN_004f68c0(0x20,"plus_%02d",local_24);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < '{')) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar5 = DAT_0073578c;
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_004d1406:
      if (iVar5 == 0) {
LAB_004d1417:
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(iVar8);
      }
    }
    else {
      iVar3 = FUN_004f3f90(&DAT_00746104);
      iVar5 = DAT_0073578c;
      if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
        if (DAT_0073578c != 0) {
          iVar4 = *(int *)(DAT_0073578c + 8);
          if ((iVar4 == 0) ||
             ((iVar3 = FUN_004fd1e0(iVar4 + 0xdc), iVar3 == 0 &&
              (iVar3 = FUN_004fd1e0(iVar4 + 0xec), iVar3 == 0)))) goto LAB_004d1406;
          goto LAB_004d13ef;
        }
        goto LAB_004d1417;
      }
LAB_004d13ef:
      if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar5 = DAT_0073578c, iVar3 == 0))
      goto LAB_004d1406;
    }
    FUN_004f6910(iVar3);
    local_24 = local_24 + 1;
    if (10 < local_24) {
      (**(code **)(*(int *)(param_1 + 0x6c) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x9c) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x15c) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x198) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x1d4) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x210) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x24c) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x288) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x2c4) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x300) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0x33c) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0xcc) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 0xfc) + 0xc))(0);
      (**(code **)(*(int *)(param_1 + 300) + 0xc))(0);
      switch(DAT_00735e20) {
      case 0:
        FUN_004d1f30(param_1);
        FUN_004d1790();
        return;
      case 1:
        FUN_004d2700(param_1);
        FUN_004d1790();
        return;
      case 2:
        FUN_004d2820(param_1);
        FUN_004d1790();
        return;
      case 3:
        FUN_004d2f60(param_1);
        FUN_004d1790();
        return;
      case 4:
        FUN_004d32e0(param_1);
        FUN_004d1790();
        return;
      case 8:
        FUN_004d3b60(param_1);
        FUN_004d1790();
        return;
      case 10:
        FUN_004d3f30(param_1);
      }
      FUN_004d1790();
      return;
    }
  } while( true );
}
