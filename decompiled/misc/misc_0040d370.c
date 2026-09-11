/* spd-match: far pct=12.76 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0040D370 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
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

int __cdecl FUN_0040e6d0();
int __cdecl FUN_0040ed50();
extern unsigned char *DAT_0071b110;
extern int DAT_0071b188;
extern unsigned char *DAT_0071b190;
extern unsigned char *DAT_0073636c;
extern int DAT_007363e8;
extern unsigned char *DAT_0073640c;
extern int DAT_00736458;
extern int _DAT_006cc7bc;
extern int _DAT_006cc858;
extern int _DAT_007070c8;
extern int _DAT_007070cc;
extern int _DAT_007070d0;
void __fastcall FUN_0040d370(int * obj)

{
  float fVar1;
  float fVar2;
  float fVar3;

  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uStack_1bc;
  undefined1 *puStack_1b8;
  undefined4 uStack_1b4;
  int *piStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int *piStack_1a4;
  int *piStack_1a0;
  float *pfStack_19c;
  undefined4 uStack_198;
  int *piStack_194;
  undefined4 uStack_190;
  undefined1 *puStack_18c;
  int *piStack_188;
  float fStack_184;
  float fStack_180;
  undefined1 auStack_17c [4];
  undefined1 *puStack_178;
  float afStack_154 [48];
  undefined1 auStack_94 [12];
  int iStack_88;
  int iStack_84;
  float afStack_80 [24];
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  
  puStack_178 = local_20;
  fStack_180 = 5.953358e-39;
  (**(code **)(*obj + 0x30))();
  iVar7 = 0;
  fStack_184 = 0.0;
  piStack_188 = DAT_0073636c;
  puStack_18c = (undefined1 *)0x40d39c;
  (**(code **)(*DAT_0073636c + 0x94))();
  afStack_154[0] = -1.0;
  afStack_154[1] = 1.0;
  afStack_154[2] = 0.0;
  afStack_154[3] = -NAN;
  afStack_154[0xc] = 1.0;
  afStack_154[0xd] = 1.0;
  afStack_154[0xe] = 0.0;
  afStack_154[0xf] = -NAN;
  afStack_154[0x18] = 1.0;
  afStack_154[0x19] = -1.0;
  afStack_154[0x1a] = 0.0;
  afStack_154[0x1b] = -NAN;
  afStack_154[0x24] = -1.0;
  afStack_154[0x25] = -1.0;
  afStack_154[0x26] = 0.0;
  afStack_154[0x27] = -NAN;
  iVar4 = 0;
  do {
    afStack_154[iVar4 * 2 + 4] = 0.0;
    afStack_154[iVar4 * 2 + 5] = 0.0;
    afStack_154[iVar4 * 2 + 0x10] = 1.0;
    afStack_154[iVar4 * 2 + 0x11] = 0.0;
    afStack_154[iVar4 * 2 + 0x1c] = 1.0;
    afStack_154[iVar4 * 2 + 0x1d] = 1.0;
    afStack_154[iVar4 * 2 + 0x28] = 0.0;
    afStack_154[iVar4 * 2 + 0x29] = 1.0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  puStack_18c = (undefined1 *)0x40d466;
  FUN_0040e6d0();
  puStack_18c = auStack_94;
  uStack_190 = 0;
  piStack_194 = piStack_10;
  uStack_198 = 0x40d47c;
  (**(code **)(*piStack_10 + 0x44))();
  fStack_184 = (float)iStack_88;
  if (iStack_88 < 0) {
    fStack_184 = fStack_184 + _DAT_006cc858;
  }
  fStack_184 = _DAT_006cc7bc / fStack_184;
  fStack_180 = (float)iStack_84;
  if (iStack_84 < 0) {
    fStack_180 = fStack_180 + _DAT_006cc858;
  }
  fStack_180 = _DAT_006cc7bc / fStack_180;
  iVar4 = iStack_c;
  if (0 < iStack_c) {
    pfVar5 = afStack_80 + 1;
    pfVar8 = (float *)(iStack_14 + 8);
    puVar6 = &DAT_0071b190;
    do {
      uStack_198 = uStack_1c;
      pfStack_19c = (float *)*puVar6;
      piStack_1a0 = DAT_0071b110;
      piStack_1a4 = (int *)0x40d4fa;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      fVar3 = fStack_184 * pfVar8[-1];
      fVar2 = pfVar8[-2];
      *pfVar5 = fVar2;
      iVar4 = iStack_18;
      fVar1 = afStack_154[iVar7 * 2 + 1];
      pfVar5[-1] = fVar2;
      pfVar5[1] = fVar2;
      afStack_154[iVar7 * 2 + 1] = fVar3 + fVar1;
      pfVar5[2] = fVar2;
      iVar7 = iVar7 + 1;
      fVar1 = fStack_180 * *pfVar8;
      puVar6 = puVar6 + 1;
      pfVar5 = pfVar5 + 4;
      pfVar8 = pfVar8 + 3;
      afStack_154[iVar7 * 2] = fVar1 + afStack_154[iVar7 * 2];
      afStack_154[iVar7 * 2 + 0xb] = fVar3 + afStack_154[iVar7 * 2 + 0xb];
      afStack_154[iVar7 * 2 + 0xc] = fVar1 + afStack_154[iVar7 * 2 + 0xc];
      afStack_154[iVar7 * 2 + 0x17] = fVar3 + afStack_154[iVar7 * 2 + 0x17];
      afStack_154[iVar7 * 2 + 0x18] = fVar1 + afStack_154[iVar7 * 2 + 0x18];
      afStack_154[iVar7 * 2 + 0x23] = fVar3 + afStack_154[iVar7 * 2 + 0x23];
      afStack_154[iVar7 * 2 + 0x24] = fVar1 + afStack_154[iVar7 * 2 + 0x24];
    } while (iVar7 < iVar4);
  }
  if (iVar4 < 4) {
    pfVar5 = afStack_80 + iVar4 * 4 + 1;
    puVar6 = &DAT_0071b190 + iVar4;
    do {
      pfStack_19c = (float *)*puVar6;
      uStack_198 = 0;
      piStack_1a0 = DAT_0071b110;
      piStack_1a4 = (int *)0x40d5c9;
      (**(code **)(*DAT_0071b110 + 0xd0))();
      pfVar5[-1] = 0.0;
      *pfVar5 = 0.0;
      pfVar5[1] = 0.0;
      pfVar5[2] = 0.0;
      puVar6 = puVar6 + 1;
      pfVar5 = pfVar5 + 4;
    } while ((int)puVar6 < 0x71b1a0);
  }
  uStack_198 = 4;
  pfStack_19c = afStack_80;
  piStack_1a0 = (int *)DAT_0071b188;
  piStack_1a4 = DAT_0071b110;
  uStack_1a8 = 0x40d601;
  (**(code **)(*DAT_0071b110 + 0x90))();
  _DAT_007070cc = 0xffffffff;
  _DAT_007070c8 = 0xffffffff;
  uStack_1a8 = 0;
  if (DAT_0073640c == 0) {
    uStack_1ac = 0x1b;
    piStack_1b0 = DAT_0073636c;
    uStack_1b4 = 0x40d627;
    (**(code **)(*DAT_0073636c + 0xe4))();
  }
  else {
    piStack_1b0 = *(int **)(DAT_0073640c + 0x18);
    uStack_1ac = *(undefined4 *)(DAT_0073640c + 0xc4);
    uStack_1b4 = 0x40d639;
    (**(code **)(*piStack_1b0 + 0x68))();
  }
  uStack_1b4 = 0x30;
  puStack_1b8 = auStack_17c;
  uStack_1bc = 2;
  _DAT_007070d0 = 0;
  DAT_007363e8 = 0;
  (**(code **)(*DAT_0073636c + 0x14c))(DAT_0073636c,6);
  iVar4 = DAT_00736458;
  FUN_0040ed50();
  (**(code **)(*DAT_0073636c + 0x94))(DAT_0073636c,0,*(undefined4 *)(iVar4 + 8));
  (**(code **)(*DAT_0073636c + 0x9c))(DAT_0073636c,*(undefined4 *)(iVar4 + 0xc));
  piStack_1b0 = *(int **)(iVar4 + 0x18);
  uStack_1b4 = *(undefined4 *)(iVar4 + 0x14);
  uStack_1bc = 0;
  puStack_1b8 = (undefined1 *)0x0;
  uStack_1ac = 0;
  uStack_1a8 = 0x3f800000;
  (**(code **)(*DAT_0073636c + 0xbc))(DAT_0073636c,&uStack_1bc);
  DAT_00736458 = iVar4;
  DAT_0073640c = 0;
  return;
}
