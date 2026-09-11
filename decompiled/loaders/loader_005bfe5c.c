/* spd-match: far pct=9.95 flags=/Ob2 /c /nologo /TC method=m4_13_callee_stdcall_v2 source=m4_13/4.1.3/va_005BFE5C */
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
typedef int             code(); /* M3.75.5 P0: was void(void) — assign/call → C2120 */
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
/* Odd-width / soft Ghidra types (M3.75.3 cheap). */
typedef unsigned int    undefined6;
typedef signed char     sbyte;
typedef unsigned char   unkbyte10;
typedef unsigned int    unkuint10;
typedef unsigned int    uintptr_t;
typedef int             intptr_t;
#ifndef _WCHAR_T_DEFINED
typedef unsigned short  wchar_t;
#define _WCHAR_T_DEFINED
#endif
/* Ghidra math macros (M3.75.3 C2065 ABS/SQRT/ROUND). */
double __cdecl sqrt(double);
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define SQRT(x) ((float)sqrt((double)(x)))
#define ROUND(x) ((int)(((x) >= 0.0) ? ((x) + 0.5) : ((x) - 0.5)))
void *__cdecl swi(int);
unsigned int MXCSR; /* SSE MXCSR soft register */
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
typedef struct tagRECT { long left, top, right, bottom; } RECT, tagRECT, *LPRECT;
typedef struct _FILETIME { DWORD dwLowDateTime; DWORD dwHighDateTime; } FILETIME, _FILETIME;
typedef LONG *PLONG;
typedef WORD *LPWORD;
typedef CHAR *LPCH;
typedef BOOL *LPBOOL;
typedef void *PVOID;
typedef const WCHAR *LPCWSTR;
typedef ULONG_PTR DWORD_PTR;
typedef LONG LSTATUS;
typedef void *HCURSOR;
/* Ghidra often types 64-bit locals as LARGE_INTEGER for __all* helpers. */
typedef union _LARGE_INTEGER {
  struct { DWORD LowPart; LONG HighPart; } s;
  struct { DWORD LowPart; LONG HighPart; } u;
  __int64 QuadPart;
} LARGE_INTEGER, *PLARGE_INTEGER;
typedef DWORD FARPROC; /* soft; real FARPROC is FARPROC callback — compile-only */
typedef struct _RTL_CRITICAL_SECTION {
  void *DebugInfo; long LockCount; long RecursionCount;
  HANDLE OwningThread; HANDLE LockSemaphore; DWORD SpinCount;
} CRITICAL_SECTION, *LPCRITICAL_SECTION;
typedef struct _SECURITY_ATTRIBUTES {
  DWORD nLength; LPVOID lpSecurityDescriptor; BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES, _SECURITY_ATTRIBUTES;
typedef struct _OSVERSIONINFOA {
  DWORD dwOSVersionInfoSize; DWORD dwMajorVersion; DWORD dwMinorVersion;
  DWORD dwBuildNumber; DWORD dwPlatformId; CHAR szCSDVersion[128];
} OSVERSIONINFOA, *LPOSVERSIONINFOA, _OSVERSIONINFOA;
typedef struct tagWNDCLASSEXA {
  UINT cbSize; UINT style; void *lpfnWndProc; int cbClsExtra; int cbWndExtra;
  HINSTANCE hInstance; HICON hIcon; HCURSOR hCursor; HBRUSH hbrBackground;
  LPCSTR lpszMenuName; LPCSTR lpszClassName; HICON hIconSm;
} WNDCLASSEXA;
typedef struct _COMMTIMEOUTS {
  DWORD ReadIntervalTimeout; DWORD ReadTotalTimeoutMultiplier;
  DWORD ReadTotalTimeoutConstant; DWORD WriteTotalTimeoutMultiplier;
  DWORD WriteTotalTimeoutConstant;
} COMMTIMEOUTS, _COMMTIMEOUTS;
typedef struct _TIME_ZONE_INFORMATION {
  LONG Bias; WCHAR StandardName[32]; /* soft truncated layout */
  DWORD StandardDate; LONG StandardBias; WCHAR DaylightName[32];
  DWORD DaylightDate; LONG DaylightBias;
} TIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION, _TIME_ZONE_INFORMATION;
typedef struct _STARTUPINFOA {
  DWORD cb; LPSTR lpReserved; LPSTR lpDesktop; LPSTR lpTitle;
  DWORD dwX, dwY, dwXSize, dwYSize, dwXCountChars, dwYCountChars;
  DWORD dwFillAttribute; DWORD dwFlags; WORD wShowWindow; WORD cbReserved2;
  BYTE *lpReserved2; HANDLE hStdInput; HANDLE hStdOutput; HANDLE hStdError;
} STARTUPINFOA, _STARTUPINFOA;
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
void __stdcall InitializeCriticalSection(LPCRITICAL_SECTION);
BOOL __stdcall QueryPerformanceCounter(LARGE_INTEGER *);
DWORD __stdcall WaitForSingleObject(HANDLE, DWORD);
HINSTANCE __stdcall ShellExecuteA(HWND, LPCSTR, LPCSTR, LPCSTR, LPCSTR, int);
typedef struct { int _dummy; } *LPLC_STRINGS; /* obscure Ghidra typedef */
typedef struct { int _dummy; } FrameInfo;

/* CRT / common externs seen in cleanish — compile-only stubs */
void __cdecl _free(void *);
void *__cdecl _malloc(unsigned int);
void *__cdecl _realloc(void *, unsigned int);
void __cdecl _memcpy(void *, const void *, unsigned int);
void *__cdecl _memset(void *, int, unsigned int);
int __cdecl _sprintf(char *, const char *, ...);
int __cdecl _strlen(const char *);
long __cdecl _atol(const char *);
int __cdecl _tolower(int);
int __cdecl _isalpha(int);
int __cdecl _isdigit(int);
int __cdecl _isxdigit(int);
unsigned int __cdecl _fread(void *, unsigned int, unsigned int, FILE *);
typedef struct { int _dummy; } *_ptiddata; /* CRT TLS placeholder */
/* M4.1.3-R3: FUN_005c7bd2 → unified __stdcall (callee_stdcall_v2). */
typedef struct { int _dummy; } *pthreadlocinfo;
typedef struct { int _dummy; } *pthreadmbcinfo;
typedef struct { int _dummy; } *_cpinfo;
typedef struct { int _dummy; } *_locale_t;
typedef int INTRNCVT_STATUS;
void __cdecl __cfltcvt(void);
void __stdcall ___crtInitCritSecNoSpinCount_8(void);

int __cdecl FUN_005be628();
int __stdcall FUN_005c7bd2(undefined4 a1);
extern int DAT_0069f7ac;
extern int DAT_0069f7cc;
extern unsigned char *PTR_DAT_0069f660;
extern unsigned char *PTR_DAT_0069f794;
extern void LAB_005bfe9a(void);
extern void LAB_005c002f(void);
extern void LAB_005c0031(void);
extern void LAB_005c03a4(void);
#ifndef SUB84
#define SUB84(x,n) ((unsigned int)((unsigned __int64)(x) >> (n)))
#endif
int __cdecl lstrcmpiA(const char *, const char *);
long __cdecl __ftol(void);
int __cdecl __isnan(double);
double __cdecl fpatan(double, double);
double __cdecl fcos(double);
double __cdecl fsin(double);
double __cdecl log2(double);

int __cdecl FUN_005be628();
int __stdcall FUN_005c7bd2(undefined4 a1);
extern int DAT_0069f7ac;
extern int DAT_0069f7cc;
extern unsigned char *PTR_DAT_0069f660;
extern unsigned char *PTR_DAT_0069f794;
extern void LAB_005bfe9a(void);
extern void LAB_005c002f(void);
extern void LAB_005c0031(void);
extern void LAB_005c03a4(void);

int __fastcall FUN_005bfe5c(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  puVar1 = (undefined4 *)(param_1 + 0x20);
  iVar5 = FUN_005c7bd2(puVar1);
  if (-1 < iVar5) {
    iVar5 = 0xd;
    do {
      switch(*puVar1) {
      case 0:
        goto LAB_005bfe9a;
      case 1:
        cVar2 = *(char *)(param_1 + 0x29);
        if (cVar2 == '\0') {
          return (int)*(char *)(param_1 + 0x28);
        }
        if (*(char *)(param_1 + 0x2a) != '\0') {
          return 0x14e;
        }
        if (cVar2 != '=') {
          cVar3 = *(char *)(param_1 + 0x28);
          if (cVar3 != cVar2) {
            return 0x14e;
          }
          if (cVar3 == '&') {
            return 0x13d;
          }
          if (cVar3 == '+') {
            return 0x137;
          }
          if (cVar3 != '-') {
            if (cVar3 != '|') {
              return 0x14e;
            }
            return 0x13e;
          }
          return 0x138;
        }
        cVar2 = *(char *)(param_1 + 0x28);
        if (cVar2 < '.') {
          if (cVar2 == '-') {
            return 0x143;
          }
          if (cVar2 == '!') {
            return 0x13c;
          }
          if (cVar2 == '%') {
            return 0x141;
          }
          if (cVar2 != '*') {
            if (cVar2 != '+') {
              return 0x14e;
            }
            return 0x142;
          }
          return 0x13f;
        }
        if (cVar2 == '/') {
          return 0x140;
        }
        if (cVar2 == '<') {
          return 0x139;
        }
        if (cVar2 == '=') {
          return 0x13b;
        }
        if (cVar2 != '>') {
          return 0x14e;
        }
        return 0x13a;
      case 2:
        return 0x144;
      case 3:
        return 0x145;
      case 4:
        return 0x146;
      case 5:
        return 0x147;
      case 6:
        return 0x148;
      case 7:
        return 0x149;
      case 8:
        return 0x14a;
      case 9:
        pcVar4 = *(char **)(param_1 + 0x28);
        switch((int)*pcVar4) {
        case 0x61:
          iVar6 = 5;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "auto";
          goto code_r0x005bffef;
        case 0x62:
          iVar5 = 5;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "bool";
          goto code_r0x005c001c;
        case 99:
          iVar6 = 5;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "case";
          goto code_r0x005c0099;
        case 100:
          iVar5 = 8;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "default";
          goto code_r0x005c016e;
        case 0x65:
          iVar5 = 5;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "else";
          goto code_r0x005c01d7;
        case 0x66:
          iVar5 = 6;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "false";
          goto code_r0x005c0237;
        case 0x67:
          pcVar8 = &DAT_0069f7cc;
          break;
        case 0x68:
          iVar5 = 5;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "half";
          goto code_r0x005c029b;
        case 0x69:
          iVar5 = 3;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "if";
          goto code_r0x005c02b9;
        default:
          goto switchD_005bffdc_caseD_6a;
        case 0x6c:
          pcVar8 = &DAT_0069f7ac;
          break;
        case 0x6d:
          iVar5 = 7;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "matrix";
          goto code_r0x005c034b;
        case 0x6e:
          iVar5 = 10;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "namespace";
          goto code_r0x005c0371;
        case 0x6f:
          iVar5 = 4;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "out";
          goto code_r0x005c0391;
        case 0x70:
          iVar5 = 0xe;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "pixelfragment";
          goto code_r0x005c03b7;
        case 0x72:
          iVar5 = 9;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "register";
          goto code_r0x005c0434;
        case 0x73:
          iVar5 = 10;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "sampler1D";
          goto code_r0x005c049a;
        case 0x74:
          iVar5 = 9;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "template";
          goto code_r0x005c060b;
        case 0x75:
          iVar5 = 8;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "uniform";
          goto code_r0x005c0732;
        case 0x76:
          iVar6 = 7;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "vector";
          goto code_r0x005c0776;
        case 0x77:
          iVar5 = 6;
          bVar9 = true;
          pcVar8 = pcVar4;
          pcVar7 = "while";
          goto code_r0x005c081f;
        }
        iVar5 = 5;
        goto LAB_005c0031;
      case 10:
        return 0x14b;
      case 0xd:
        goto LAB_005bfe9a;
      }
      iVar6 = FUN_005c7bd2(puVar1);
    } while (-1 < iVar6);
  }
  *(undefined4 *)(param_1 + 0x40) = 1;
LAB_005bfe9a:
  return -1;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c081f:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x136;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0776:
    if (iVar6 == 0) break;
  }
  if (bVar9) {
    return 0x131;
  }
  iVar6 = 0xf;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "vertexfragment";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x132;
  }
  iVar6 = 8;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "virtual";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar6 = 5;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "void";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x134;
  }
  iVar6 = 9;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "volatile";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x135;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    bVar9 = true;
    pcVar8 = pcVar4;
    pcVar7 = "vertexshader";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      return 0x133;
    }
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0732:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x130;
  }
  iVar5 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "union";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 9;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "unsigned";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  pcVar8 = "using";
  goto LAB_005c002f;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c060b:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "texture1D";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x12a;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "texture2D";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 299;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "texture3D";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 300;
  }
  iVar5 = 0xc;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "textureCUBE";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x12d;
  }
  iVar5 = 5;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "this";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "throw";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 5;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "true";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x12e;
  }
  iVar5 = 4;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "try";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 8;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "typedef";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x12f;
  }
  iVar5 = 9;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "typename";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar5 = 8;
    bVar9 = true;
    pcVar8 = pcVar4;
    pcVar7 = "texture";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      return 0x129;
    }
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c049a:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x11f;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "sampler2D";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x120;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "sampler3D";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x121;
  }
  iVar5 = 0xc;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "samplerCUBE";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x122;
  }
  iVar5 = 0xe;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "sampler_state";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x123;
  }
  iVar5 = 7;
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "shared";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x124;
  }
  iVar6 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "short";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "signed";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "sizeof";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "static";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x125;
  }
  iVar6 = 0xc;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "static_cast";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "string";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x126;
  }
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "struct";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x127;
  }
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "switch";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar5 = 8;
    bVar9 = true;
    pcVar8 = pcVar4;
    pcVar7 = "sampler";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      return 0x11e;
    }
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0434:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x11b;
  }
  iVar5 = 0x11;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "reinterpret_cast";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "row_major";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x11d;
  }
  iVar5 = 7;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "return";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x11c;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c03b7:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x119;
  }
  iVar5 = 8;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "private";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 10;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "protected";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 7;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "public";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar5 = 0xc;
    bVar9 = true;
    pcVar8 = pcVar4;
    pcVar7 = "pixelshader";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar8 == *pcVar7;
      pcVar8 = pcVar8 + 1;
      pcVar7 = pcVar7 + 1;
    } while (bVar9);
    if (bVar9) {
      return 0x11a;
    }
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0391:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x117;
  }
  pcVar8 = "operator";
  goto LAB_005c03a4;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0371:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 4;
  pcVar8 = (char *)&PTR_DAT_0069f794;
  goto LAB_005c0031;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c034b:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x116;
  }
  pcVar8 = "mutable";
  iVar5 = 8;
  goto LAB_005c0031;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c02b9:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x111;
  }
  iVar5 = 3;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "in";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x112;
  }
  iVar5 = 7;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "inline";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x113;
  }
  iVar5 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "inout";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x114;
  }
  iVar5 = 4;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "int";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x115;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c029b:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x110;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0237:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x10d;
  }
  iVar5 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "float";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x10e;
  }
  iVar5 = 4;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "for";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x10f;
  }
  pcVar8 = "friend";
  iVar5 = 7;
  goto LAB_005c0031;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c01d7:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x10b;
  }
  iVar5 = 5;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "enum";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 9;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "explicit";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 7;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "extern";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x10c;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c016e:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x14e;
  }
  iVar5 = 7;
  bVar9 = true;
  iVar6 = iVar5;
  pcVar8 = pcVar4;
  pcVar7 = "delete";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar6 = 3;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "do";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x10a;
  }
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "double";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x109;
  }
  pcVar8 = "dynamic_cast";
  iVar5 = 0xd;
  goto LAB_005c0031;
  while( true ) {
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c0099:
    if (iVar6 == 0) break;
  }
  if (bVar9) {
    return 0x14e;
  }
  iVar6 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "catch";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar6 = 5;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "char";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  iVar6 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "class";
  do {
    if (iVar6 == 0) break;
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "column_major";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x104;
  }
  iVar5 = 8;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "compile";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x105;
  }
  iVar5 = 0x11;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "compile_fragment";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x106;
  }
  iVar5 = 6;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "const";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x107;
  }
  iVar5 = 0xb;
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "const_cast";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  pcVar8 = "continue";
LAB_005c03a4:
  iVar5 = 9;
  goto LAB_005c0031;
  while( true ) {
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005c001c:
    if (iVar5 == 0) break;
  }
  if (bVar9) {
    return 0x103;
  }
  pcVar8 = "break";
LAB_005c002f:
  iVar5 = 6;
LAB_005c0031:
  bVar9 = true;
  pcVar7 = pcVar4;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar7 == *pcVar8;
    pcVar7 = pcVar7 + 1;
    pcVar8 = (char *)((int)pcVar8 + 1);
  } while (bVar9);
  if (bVar9) {
    return 0x14e;
  }
  goto switchD_005bffdc_caseD_6a;
  while( true ) {
    iVar6 = iVar6 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    if (!bVar9) break;
code_r0x005bffef:
    if (iVar6 == 0) break;
  }
  if (bVar9) {

    return 0x14e;
  }
  bVar9 = true;
  pcVar8 = pcVar4;
  pcVar7 = "asm_fragment";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar9 = *pcVar8 == *pcVar7;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    return 0x102;
  }
switchD_005bffdc_caseD_6a:
  iVar5 = _tolower((int)*pcVar4);
  if (iVar5 == 0x61) {
    iVar5 = __stricmp(*(char **)(param_1 + 0x28),(char *)&PTR_DAT_0069f660);
    if (iVar5 == 0) {
      return 0x101;
    }
  }
  else if (iVar5 == 100) {
    iVar5 = __stricmp(*(char **)(param_1 + 0x28),"decl");
    if (iVar5 == 0) {
      return 0x108;
    }
  }
  else if (iVar5 == 0x70) {
    iVar5 = __stricmp(*(char **)(param_1 + 0x28),"pass");
    if (iVar5 == 0) {
      return 0x118;
    }
  }
  else if ((iVar5 == 0x74) &&
          (iVar5 = __stricmp(*(char **)(param_1 + 0x28),"technique"), iVar5 == 0)) {
    return 0x128;
  }
  iVar5 = FUN_005be628(0,param_1 + 0x20,0,0,*(undefined4 *)(param_1 + 0xc),0,0,0);
  return (iVar5 != 0) + 0x14c;
}
