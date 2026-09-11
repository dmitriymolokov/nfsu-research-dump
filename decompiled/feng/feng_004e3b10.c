/* spd-match: far pct=5.02 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_0040a880();
int __cdecl FUN_004aa9d0();
int __cdecl FUN_004e2520();
int __cdecl FUN_004e3af0();
int __cdecl FUN_004e3d80();
int __cdecl FUN_00567c70();
int __cdecl FUN_0057ce10();
int __cdecl FUN_005a3570();
extern int DAT_00735ec1;
extern int DAT_0073ad40;
extern int DAT_007588c4;
extern int DAT_0075f344;
extern void LAB_004e3c0a(void);
extern void LAB_004e3c4a(void);
extern void LAB_004e3d07(void);
extern void LAB_004e3d64(void);
int unaff_EDI;

uint FUN_004e3b10(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char extraout_AL;
  char extraout_AL_00;
  char extraout_AL_01;
  undefined4 *puVar3;
  int iVar4;
  undefined3 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 uVar5;
  undefined3 extraout_var_01;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint unaff_EDI;
  
  puVar1 = DAT_0073ad40;
  if (0xe < (int)unaff_EDI) {
    if ((int)unaff_EDI < 0x11) {
      puVar3 = (undefined4 *)FUN_0040a880();
      cVar2 = DAT_00735ec1;
      for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
        uVar10 = puVar1[3];
        uVar8 = puVar1[4] * 0x30 + uVar10;
        for (; uVar10 < uVar8; uVar10 = uVar10 + 0x30) {
          if (*(char *)(uVar10 + 0x10) == '\x1f') goto LAB_004e3c4a;
        }
      }
      uVar10 = 0;
LAB_004e3c4a:
      if (uVar10 == 0) goto LAB_004e3c0a;
      while (((*(byte *)(uVar10 + 0x12) != unaff_EDI ||
              (((uVar5 = FUN_004aa9d0(&DAT_007588c4,2,*(undefined4 *)(uVar10 + 8)),
                (char)uVar5 == '\0' && (cVar2 == '\0')) &&
               (uVar5 = FUN_005a3570(&DAT_0075f344), (char)uVar5 == '\0')))) ||
             (((uVar6 = (undefined3)((uint)uVar5 >> 8), param_1 != '\0' && (cVar2 == '\0')) &&
              (FUN_005a3570(&DAT_0075f344), uVar6 = extraout_var_00, extraout_AL_00 == '\0'))))) {
        uVar10 = FUN_0057ce10(0,0x1f,0,uVar10,0xffffffff);
        if (uVar10 == 0) {
          return 0;
        }
      }
      goto LAB_004e3d64;
    }
    if (unaff_EDI == 0x11) {
      puVar3 = (undefined4 *)FUN_0040a880();
      for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
        puVar9 = (undefined4 *)puVar1[3];
        puVar7 = puVar9 + puVar1[4] * 0xc;
        for (; puVar9 < puVar7; puVar9 = puVar9 + 0xc) {
          if (*(char *)(puVar9 + 4) == '\x1f') goto joined_r0x004e3b70;
        }
      }
      puVar9 = (undefined4 *)0x0;
joined_r0x004e3b70:
      do {
        if (puVar9 == (undefined4 *)0x0) goto LAB_004e3c0a;
        if ((*(char *)((int)puVar9 + 0x12) == '\x11') && (iVar4 = FUN_004e2520(puVar9), iVar4 != 0))
        {
          switch(iVar4) {
          case 1:
            break;
          case 2:
            break;
          case 3:
            break;
          case 4:
            break;
          case 5:
            break;
          default:
            goto switchD_004e3b8e_default;
          }
          uVar5 = FUN_00567c70();
          uVar5 = FUN_004aa9d0(&DAT_007588c4,2,uVar5);
          uVar6 = (undefined3)((uint)uVar5 >> 8);
          if (((char)uVar5 != '\0') &&
             ((param_1 == '\0' || (FUN_004e3af0(), uVar6 = extraout_var, extraout_AL != '\0'))))
          goto LAB_004e3d64;
        }
switchD_004e3b8e_default:
        puVar3 = (undefined4 *)FUN_0057ce10(0,0x1f,0,puVar9,0xffffffff);
        puVar9 = puVar3;
      } while( true );
    }
  }
  puVar3 = (undefined4 *)FUN_0040a880();
  for (; puVar1 != puVar3; puVar1 = (undefined4 *)*puVar1) {
    uVar10 = puVar1[3];
    uVar8 = puVar1[4] * 0x30 + uVar10;
    for (; uVar10 < uVar8; uVar10 = uVar10 + 0x30) {
      if (*(char *)(uVar10 + 0x10) == '\x1f') goto LAB_004e3d07;
    }
  }
  uVar10 = 0;
LAB_004e3d07:
  if (uVar10 == 0) {
LAB_004e3c0a:
    return (uint)puVar3 & 0xffffff00;
  }
  while ((uVar5 = FUN_004e3d80(), (char)uVar5 == '\0' ||
         (((uVar6 = (undefined3)((uint)uVar5 >> 8), param_1 != '\0' && (DAT_00735ec1 == '\0')) &&
          (FUN_005a3570(&DAT_0075f344), uVar6 = extraout_var_01, extraout_AL_01 == '\0'))))) {
    uVar10 = FUN_0057ce10(0,0x1f,0,uVar10,0xffffffff);
    if (uVar10 == 0) {
      return 0;
    }
  }
LAB_004e3d64:
  return CONCAT31(uVar6,1);
}
