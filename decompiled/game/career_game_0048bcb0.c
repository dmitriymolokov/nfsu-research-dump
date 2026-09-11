/* spd-match: far pct=8.30 flags=/O2 /c /nologo /TC method=m4_13_callee_stdcall_v2 source=m4_13/4.1.3/va_0048BCB0 */
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
/* M4.1.3-R3: FUN_00593d40 → unified __stdcall (callee_stdcall_v2). */
typedef struct { int _dummy; } *pthreadlocinfo;
typedef struct { int _dummy; } *pthreadmbcinfo;
typedef struct { int _dummy; } *_cpinfo;
typedef struct { int _dummy; } *_locale_t;
typedef int INTRNCVT_STATUS;
void __cdecl __cfltcvt(void);
void __stdcall ___crtInitCritSecNoSpinCount_8(void);

int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b780();
int __cdecl FUN_0041ffe0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_0047d680();
int __cdecl FUN_00483640();
int __cdecl FUN_00483b90();
int __cdecl FUN_0048b8c0();
int __cdecl FUN_0048ead0();
int __cdecl FUN_0048ec00();
int __cdecl FUN_00575040();
int __stdcall FUN_00593d40(undefined4 a1, undefined4 a2, undefined4 a3);
int __cdecl FUN_00674898();
extern int DAT_006b6e04;
extern int DAT_006b6e08;
extern int DAT_006b6e28;
extern int DAT_006b6eb8;
extern int DAT_006b6f08;
extern int DAT_006fbf14;
extern unsigned char *DAT_006fbf18;
extern int DAT_006fbf1c;
extern int DAT_0073457c;
extern int DAT_00735f5c;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern unsigned char *DAT_007361bc;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_007361f8;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int _DAT_006b6eb0;
extern int _DAT_006cc7dc;
extern void LAB_0048bd5a(void);
extern void LAB_0048bd85(void);
int unaff_EDI;
int __cdecl FUN_00401cd0();
int __cdecl FUN_0040b780();
int __cdecl FUN_0041ffe0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_0047d680();
int __cdecl FUN_00483640();
int __cdecl FUN_00483b90();
int __cdecl FUN_0048b8c0();
int __cdecl FUN_0048ead0();
int __cdecl FUN_0048ec00();
int __cdecl FUN_00575040();
int __stdcall FUN_00593d40(undefined4 a1, undefined4 a2, undefined4 a3);
int __cdecl FUN_00674898();
extern int DAT_006b6e04;
extern int DAT_006b6e08;
extern int DAT_006b6e28;
extern int DAT_006b6eb8;
extern int DAT_006b6f08;
extern int DAT_006fbf14;
extern unsigned char *DAT_006fbf18;
extern int DAT_006fbf1c;
extern int DAT_0073457c;
extern int DAT_00735f5c;
extern int DAT_007361a0;
extern int DAT_007361a4;
extern int DAT_007361a8;
extern unsigned char *DAT_007361bc;
extern unsigned char *DAT_007361f0;
extern unsigned char *DAT_007361f8;
extern int DAT_0078a344;
extern int DAT_0078a345;
extern int DAT_0078a346;
extern int _DAT_006b6eb0;
extern int _DAT_006cc7dc;
extern void LAB_0048bd5a(void);
extern void LAB_0048bd85(void);
int unaff_EDI;

void __fastcall FUN_0048bcb0(int *param_1)

{
  short sVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  undefined *puVar13;
  int *piVar14;
  undefined4 unaff_EDI;
  bool bVar15;
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [3];
  char cStack_145;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  undefined1 local_110 [4];
  float local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  cVar8 = FUN_0043a2e0();
  if ((((cVar8 == '\0') && (DAT_007361f0 != (int *)0x0)) &&
      ((*DAT_007361f0 == 7 || (*DAT_007361f0 == 0xb)))) && ((char)param_1[0x12] == '\0')) {
    return;
  }
  bVar15 = DAT_006fbf14 == 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (bVar15) {
    iVar10 = FUN_0041ffe0();
    param_1[0xb] = iVar10;
    while ((iVar10 == 0 && (-1 < DAT_006fbf18))) {
      DAT_006fbf18 = DAT_006fbf18 + -1;
      iVar12 = 0;
      if (0 < *(int *)(DAT_007361f8 + 0x18)) {
        piVar14 = (int *)(DAT_007361f8 + 0x28);
        do {
          iVar10 = *piVar14;
          if (*(short *)(iVar10 + 10) == DAT_006fbf18) goto LAB_0048bd5a;
          iVar12 = iVar12 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar12 < *(int *)(DAT_007361f8 + 0x18));
      }
      iVar10 = 0;
LAB_0048bd5a:
      param_1[0xb] = iVar10;
    }
    if (param_1[0xb] != 0) goto LAB_0048bd85;
    if (param_1[8] != 0) {
      param_1[0xb] = *(int *)(param_1[8] + 4);
      goto LAB_0048bd85;
    }
    iVar10 = *(int *)(DAT_007361bc + 4);
  }
  else {
    if (param_1[8] == 0) goto LAB_0048bd85;
    iVar10 = *(int *)(param_1[8] + 4);
  }
  param_1[0xb] = iVar10;
LAB_0048bd85:
  FUN_0048ead0(DAT_006b6e28);
  if ((((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) || (DAT_0078a346 != '\0')) ||
     (DAT_007361a0 != 0)) {
    local_100 = 0;
    local_fc = 0;
    local_f8 = 0;
  }
  FUN_0048ec00();
  *(undefined4 *)(param_1[0xc] + 0x24) = local_104;
  iVar10 = param_1[0xe];
  *(undefined4 *)(iVar10 + 0x24) = local_108;
  *(undefined4 *)(iVar10 + 0x84) = local_108;
  *(undefined4 *)(iVar10 + 0x54) = local_108;
  iVar10 = param_1[0xf];
  *(undefined4 *)(iVar10 + 0x24) = local_a0;
  *(undefined4 *)(iVar10 + 0x54) = local_9c;
  *(undefined4 *)(iVar10 + 0x84) = local_98;
  if (((*(int *)(param_1[0xb] + 0x38) == 0) || (2 < *(int *)(param_1[0xb] + 0x3cc))) ||
     (cVar8 = (**(code **)(*param_1 + 0x24))(), cVar8 == '\0')) {
    iVar10 = param_1[0xd];
    *(float *)(iVar10 + 0x24) = local_10c;
    *(float *)(iVar10 + 0x54) = local_10c;
    *(float *)(iVar10 + 0x84) = local_10c;
  }
  else {
    iVar10 = param_1[0xd];
    local_10c = local_10c / _DAT_006b6eb0;
    *(float *)(iVar10 + 0x24) = local_10c;
    *(float *)(iVar10 + 0x54) = local_10c;
    *(float *)(iVar10 + 0x84) = local_10c;
  }
  FUN_00593d40(DAT_0073457c,0,0);
  fStack_144 = (float)DAT_0073457c;
  FUN_00593d40(DAT_0073457c,0,0);
  fVar4 = fStack_144;
  FUN_00593d40(fStack_144,0,0);
  FUN_00593d40(fVar4,0,0);
  fStack_144 = (float)DAT_0073457c;
  FUN_00593d40(DAT_0073457c,0,0);
  fVar4 = fStack_144;
  FUN_00593d40(fStack_144,0,0);
  FUN_00593d40(fVar4,0,0);
  fStack_144 = (float)DAT_0073457c;
  FUN_00593d40(DAT_0073457c,0,0);
  fVar4 = fStack_144;
  FUN_00593d40(fStack_144,0,0);
  FUN_00593d40(fVar4,0,0);
  psVar11 = (short *)FUN_0047d680();
  if (psVar11 == (short *)0x0) {
    psVar11 = (short *)FUN_0047d680();
  }
  iVar10 = DAT_00735f5c;
  sVar1 = *psVar11;
  if (((sVar1 == 1) || (sVar1 == 0)) || (sVar1 == 4)) {
    cStack_145 = '\x01';
    iVar12 = 0;
  }
  else {
    iVar12 = param_1[0xb];
    cStack_145 = '\0';
  }
  if (DAT_00735f5c == 0) {
    *(int *)(param_1[7] + 0x280) = iVar12;
    uVar9 = FUN_00674898();
    *(undefined2 *)(param_1[7] + 0xc4) = uVar9;
  }
  uVar7 = _DAT_006cc7dc;
  if (*psVar11 == 3) {
    uVar7 = DAT_006fbf1c;
  }
  *(undefined4 *)(param_1[7] + 0xbc) = uVar7;
  iVar12 = param_1[7];
  iVar2 = param_1[0xb];
  fVar4 = *(float *)(iVar12 + 0x40) - *(float *)(iVar2 + 0x60);
  fVar6 = *(float *)(iVar12 + 0x44) - *(float *)(iVar2 + 100);
  fVar5 = *(float *)(iVar12 + 0x48) - *(float *)(iVar2 + 0x68);
  if (iVar10 == 0) {
    *(float *)(iVar12 + 0xb0) = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5);
  }
  if ((*(char *)((int)param_1 + 0x47) == '\0') && (iVar10 == 0)) {
    *(undefined4 *)(param_1[7] + 0xb4) = DAT_006b6e08;
    *(undefined4 *)(param_1[7] + 0xb8) = DAT_006b6e04;
  }
  FUN_0048b8c0(psVar11,local_110);
  *(undefined1 *)((int)param_1 + 0x46) = 0;
  if ((*(char *)((int)param_1 + 0x45) == '\0') ||
     ((param_1[8] != 0 && (*(char *)(param_1[8] + 0x29) == '\0')))) {
    fStack_144 = 1.0;
  }
  else {
    fStack_144 = -1.0;
  }
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0x3f800000;
  if (cStack_145 == '\0') {
    FUN_00401cd0();
    uStack_e0 = 0;
    uStack_dc = 0;
    uStack_d8 = 0;
    uStack_d4 = 0x3f800000;
    FUN_0048bcb0(&uStack_130,&uStack_130,local_110);
  }
  pfVar3 = (float *)param_1[0xd];
  fStack_118 = pfVar3[0x18];
  fStack_11c = fStack_144 * pfVar3[0xc];
  fStack_120 = fStack_144 * *pfVar3;
  pfVar3 = (float *)param_1[0xe];
  fStack_138 = pfVar3[0x18];
  fStack_13c = fStack_144 * pfVar3[0xc];
  fStack_140 = fStack_144 * *pfVar3;
  FUN_0048bcb0(&fStack_120,&fStack_120,auStack_50);
  FUN_0048bcb0(auStack_14c,auStack_14c,auStack_5c);
  FUN_0040b780(auStack_148);
  FUN_00575040(param_1[4]);
  if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
    puVar13 = &DAT_006b6eb8;
  }
  else {
    puVar13 = &DAT_006b6f08;
  }
  FUN_00483640(param_1,auStack_a8,puVar13,param_1[0xb]);
  if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
    FUN_00483b90(param_1,auStack_a8,param_1[0xb]);
  }
  FUN_0047d070(param_1[7],auStack_a8,DAT_0073457c);
  return;
}
