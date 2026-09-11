/* spd-match: far pct=12.80 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_00401bd0();
int __cdecl FUN_00401be0();
int __cdecl FUN_00401c80();
int __cdecl FUN_00417490();
int __cdecl FUN_00417600();
int __cdecl FUN_00421a70();
int __cdecl FUN_00421a80();
int __cdecl FUN_00424c70();
int __cdecl FUN_00424c80();
int __cdecl FUN_0042ae40();
int __cdecl FUN_004327c0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0043b850();
int __cdecl FUN_0043dbb0();
int __cdecl FUN_0043dbf0();
int __cdecl FUN_0043dc10();
int __cdecl FUN_004b3a20();
int __cdecl FUN_004b3c60();
int __cdecl FUN_004b4010();
int __cdecl FUN_004b4590();
int __cdecl FUN_00549130();
int __cdecl FUN_00564a80();
int __cdecl FUN_0057f150();
int __cdecl FUN_0057f260();
int __cdecl FUN_00580af0();
extern int DAT_006b7904;
extern int DAT_00700a18;
extern unsigned char *DAT_0077b1a0;
extern unsigned char *DAT_0077b1c0;
extern unsigned char *DAT_0077b1c4;
extern unsigned char *DAT_0078a320;
extern int DAT_0078a328;
extern int DAT_0078a33c;
extern int DAT_0078a3fc;
extern int _DAT_006b7900;
extern int _DAT_006cc7bc;

void FUN_0043de90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined1 local_7dc [40];
  undefined4 local_7b4;
  int local_7b0;
  int local_7ac;
  int local_7a8;
  int local_7a4;
  int local_7a0 [456];
  int local_80;
  int local_7c;
  int local_78 [4];
  byte local_65;
  int local_64;
  undefined4 *local_60;
  undefined1 local_5c [40];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_29;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  int *local_14;
  
  while (iVar2 = FUN_00401bd0(), iVar2 == 0) {
    FUN_00401be0();
  }
  local_14 = (int *)0x0;
  local_18 = 99.9;
  local_1c = 999;
  local_20 = 0;
  for (local_24 = 0; local_24 < DAT_0078a320 + DAT_0078a328; local_24 = local_24 + 1) {
    local_28 = FUN_004327c0();
    local_29 = 0;
    local_30 = 0;
    cVar1 = FUN_00424c70();
    if ((cVar1 == '\0') || (cVar1 = FUN_00421a80(), cVar1 != '\0')) {
      cVar1 = FUN_00421a80();
      if ((cVar1 != '\0') && (cVar1 = FUN_00424c80(), cVar1 == '\0')) {
        local_34 = FUN_0043b850((int)*(char *)(local_28 + 1));
        local_30 = FUN_0042ae40();
      }
    }
    else {
      local_14 = (int *)FUN_00421a70();
      local_29 = 1;
      cVar1 = FUN_0043a2e0();
      if (cVar1 == '\0') {
        local_30 = FUN_00580af0();
      }
      else {
        FUN_00417490();
        local_30 = FUN_0042ae40();
      }
    }
    FUN_00421a70();
    cVar1 = FUN_0057f150();
    iVar2 = (int)cVar1;
    puVar3 = (undefined4 *)FUN_00421a70(iVar2);
    local_60 = (undefined4 *)
               FUN_0043dbb0(0,(int)*(char *)(local_28 + 1),local_29,local_30,*puVar3,iVar2);
    puVar3 = local_60;
    puVar4 = (undefined4 *)(&DAT_0077b1a0 + local_24 * 0x28);
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00549130(local_5c);
    local_20 = local_20 + 1;
    FUN_00421a70();
    cVar1 = FUN_0057f150();
    if (cVar1 < local_1c) {
      FUN_00421a70();
      cVar1 = FUN_0057f150();
      local_1c = (int)cVar1;
    }
    uVar6 = 1;
    FUN_00421a70(1);
    fVar5 = (float10)FUN_0057f260(uVar6);
    if (fVar5 < (float10)local_18) {
      uVar6 = 1;
      FUN_00421a70(1,0,0x41200000);
      fVar5 = (float10)FUN_0057f260(uVar6);
      fVar5 = (float10)FUN_00401c80((float)fVar5);
      local_18 = (float)fVar5;
    }
  }
  DAT_00700a18 = (_DAT_006cc7bc - DAT_006b7904) * (local_18 / _DAT_006b7900) + DAT_006b7904;
  fVar5 = (float10)FUN_00401c80(DAT_00700a18,DAT_006b7904,0x3f800000);
  DAT_00700a18 = (float)fVar5;
  cVar1 = FUN_0043a2e0();
  if (cVar1 == '\0') {
    local_64 = 4 - local_20;
    local_65 = 0;
    FUN_004b3a20(local_78);
    for (local_7c = 0; local_7c < local_64; local_7c = local_7c + 1) {
      local_80 = local_7c + 100;
      FUN_00417600();
      local_7a4 = local_78[local_7c];
      local_7a8 = -1;
      if ((param_1 == 0) || (DAT_0078a33c == '\0')) {
        FUN_004b3c60(local_7a0,0,CONCAT31((int3)(-(uint)local_65 >> 8),'\x01' - (local_65 != 0)),
                     local_14);
        if ((local_65 == 0) && (local_7a0[0] != *local_14)) {
          local_7b4 = 0;
        }
        else {
          local_7b4 = 1;
        }
        local_65 = (byte)local_7b4;
      }
      else {
        FUN_0043dc10(local_80,local_7c + 2);
        FUN_0043dbf0();
        FUN_004b4010();
        FUN_0043dc10();
        local_7ac = FUN_0043dbf0();
        local_7b0 = DAT_0078a3fc;
        local_7a8 = (int)*(short *)(local_7ac + 0x10 + DAT_0078a3fc * 2);
        local_7a4 = local_7ac;
        if ((local_7a8 < 0) || (9 < local_7a8)) {
          local_7a8 = -1;
        }
      }
      if (local_7a8 == -1) {
        local_7a8 = FUN_004b4590();
      }
      puVar3 = (undefined4 *)FUN_0043dbb0(0,local_80,0,local_7a4,local_7a0[0],local_1c);
      puVar4 = (undefined4 *)(&DAT_0077b1a0 + (local_7c + local_20) * 0x28);
      for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_00549130(local_7dc);
      *(int *)(&DAT_0077b1c0 + (local_7c + local_20) * 0x28) = local_7a8;
      fVar5 = (float10)FUN_00564a80(0x3f800000);
      *(float *)(&DAT_0077b1c4 + (local_7c + local_20) * 0x28) = (float)fVar5;
    }
  }
  return;
}
