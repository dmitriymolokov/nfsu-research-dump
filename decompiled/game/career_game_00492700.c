/* spd-match: far pct=9.67 flags=/Og /c /nologo /TC method=m4_13_callee_stdcall_v2 source=m4_13/4.1.3/va_00492700 */
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
/* M4.1.3-R3: FUN_00593fc0 → unified __stdcall (callee_stdcall_v2). */
typedef struct { int _dummy; } *pthreadlocinfo;
typedef struct { int _dummy; } *pthreadmbcinfo;
typedef struct { int _dummy; } *_cpinfo;
typedef struct { int _dummy; } *_locale_t;
typedef int INTRNCVT_STATUS;
void __cdecl __cfltcvt(void);
void __stdcall ___crtInitCritSecNoSpinCount_8(void);

int __cdecl FUN_0040b780();
int __cdecl FUN_0042acf0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_0048edc0();
int __cdecl FUN_0048eed0();
int __cdecl FUN_00564db0();
int __cdecl FUN_005829e0();
int __cdecl FUN_00593ec0();
int __stdcall FUN_00593fc0(undefined4 a1);
extern int DAT_006b6be4;
extern int DAT_006b6bec;
extern int DAT_006b6bf8;
extern int DAT_006cc7a4;
extern int DAT_00735f5c;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad38;
extern int _DAT_006cc7bc;
extern int _DAT_0073654c;
extern void LAB_00492b2d(void);
int __cdecl FUN_0040b780();
int __cdecl FUN_0042acf0();
int __cdecl FUN_0043a2e0();
int __cdecl FUN_0047d070();
int __cdecl FUN_0048edc0();
int __cdecl FUN_0048eed0();
int __cdecl FUN_00564db0();
int __cdecl FUN_005829e0();
int __cdecl FUN_00593ec0();
int __stdcall FUN_00593fc0(undefined4 a1);
extern int DAT_006b6be4;
extern int DAT_006b6bec;
extern int DAT_006b6bf8;
extern int DAT_006cc7a4;
extern int DAT_00735f5c;
extern unsigned char *DAT_007361f0;
extern int DAT_0073ad38;
extern int _DAT_006cc7bc;
extern int _DAT_0073654c;
extern void LAB_00492b2d(void);

void __fastcall FUN_00492700(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float local_a0;
  float local_9c;
  float local_98;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [76];
  
  cVar6 = FUN_0043a2e0();
  if (((cVar6 != '\0') || (DAT_007361f0 == (int *)0x0)) ||
     ((*DAT_007361f0 != 7 && (*DAT_007361f0 != 0xb)))) {
    fVar4 = *(float *)(param_1 + 0x48);
    local_60 = 0;
    local_5c = 0;
    local_58 = 0x3f800000;
    if (*(float *)(param_1 + 0x58) <= DAT_006cc7a4) {
      *(float *)(param_1 + 0x48) = ((int)(DAT_0073ad38)) + *(float *)(param_1 + 0x48);
    }
    else {
      *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - DAT_0073ad38;
    }
    fVar10 = DAT_0073ad38;
    if (DAT_006b6be4 <= *(float *)(param_1 + 0x48)) {
      fVar1 = ((int)(DAT_006b6be4)) + *(float *)(param_1 + 0x50);
      if (fVar1 <= *(float *)(param_1 + 0x48)) {
        fVar2 = ((int)(DAT_006b6bec)) + *(float *)(param_1 + 0x50) + DAT_006b6be4;
        if (fVar2 <= *(float *)(param_1 + 0x48)) {
          if (*(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x54) + ((int)(DAT_006b6bec)) + DAT_006b6be4
              <= *(float *)(param_1 + 0x48)) {
            FUN_00593fc0(DAT_0073ad38);
            FUN_00593fc0(fVar10);
            pfVar9 = *(float **)(param_1 + 0x3c);
            local_80 = *pfVar9;
            local_7c = pfVar9[0xc];
            local_78 = pfVar9[0x18];
            pfVar9 = *(float **)(param_1 + 0x40);
            local_a0 = *pfVar9;
            local_9c = pfVar9[0xc];
            local_98 = pfVar9[0x18];
            FUN_0048eed0(param_1 + 0x170,param_1 + 0x430,&local_80,param_1 + 0x440);
          }
          else {
            if (fVar4 < fVar2) {
              _DAT_0073654c = 0;
            }
            fVar4 = _DAT_006cc7bc -
                    (((*(float *)(param_1 + 0x48) - DAT_006b6be4) - *(float *)(param_1 + 0x50)) -
                    DAT_006b6bec) / *(float *)(param_1 + 0x54);
            fVar11 = (float10)FUN_0048edc0();
            FUN_005829e0((float)(((float10)fVar4 * (float10)*(float *)(param_1 + 300) +
                                 (float10)*(float *)(param_1 + 0x130)) * fVar11));
            fVar11 = (float10)FUN_0048edc0();
            FUN_005829e0((float)(((float10)fVar4 * (float10)*(float *)(param_1 + 0x134) +
                                 (float10)*(float *)(param_1 + 0x138)) * fVar11));
            fVar10 = DAT_0073ad38;
          }
        }
        else {
          if (fVar4 < fVar1) {
            *(float *)(*(int *)(param_1 + 0x44) + 0x24) = DAT_006b6bec;
            FUN_0042acf0(0x3f800000);
          }
          fVar10 = DAT_0073ad38;
          FUN_00593fc0(DAT_0073ad38);
          FUN_00593fc0(fVar10);
          pfVar9 = *(float **)(param_1 + 0x34);
          local_80 = *pfVar9;
          local_7c = pfVar9[0xc];
          local_78 = pfVar9[0x18];
          pfVar9 = *(float **)(param_1 + 0x38);
          local_a0 = *pfVar9;
          local_9c = pfVar9[0xc];
          local_98 = pfVar9[0x18];
        }
      }
      else {
        fVar5 = _DAT_006cc7bc / *(float *)(param_1 + 0x50);
        fVar10 = (*(float *)(param_1 + 0x48) - DAT_006b6be4) * fVar5;
        fVar11 = (float10)FUN_0048edc0();
        fVar1 = (float)(((float10)fVar10 * (float10)*(float *)(param_1 + 0x134) +
                        (float10)*(float *)(param_1 + 0x138)) * fVar11);
        fVar12 = (float10)FUN_0048edc0();
        fVar11 = (float10)DAT_006b6be4;
        fVar2 = *(float *)(param_1 + 0x134);
        fVar3 = *(float *)(param_1 + 0x138);
        fVar13 = (float10)FUN_0048edc0();
        FUN_005829e0((float)(((float10)fVar10 * (float10)*(float *)(param_1 + 300) +
                             (float10)*(float *)(param_1 + 0x130)) * fVar13));
        FUN_005829e0(fVar1);
        fVar10 = DAT_0073ad38;
        iVar8 = 0;
        pfVar9 = (float *)(param_1 + 0x5c);
        do {
          if (((float)((((float10)fVar4 - fVar11) * (float10)fVar5 * (float10)fVar2 + (float10)fVar3
                       ) * fVar12) < *pfVar9) && (*pfVar9 <= fVar1)) {
            *(undefined4 *)(param_1 + 0x58) = DAT_006b6bf8;
            _DAT_0073654c = 0;
            goto LAB_00492b2d;
          }
          iVar8 = iVar8 + 1;
          pfVar9 = pfVar9 + 1;
        } while (iVar8 < 4);
        _DAT_0073654c = 1;
      }
    }
    else {
      FUN_00593ec0(DAT_0073ad38,0,0);
      FUN_00593ec0(fVar10,0,0);
      FUN_00593ec0(fVar10,0,0);
      FUN_00593ec0(fVar10,0,0);
      FUN_00593ec0(fVar10,0,0);
      FUN_00593ec0(fVar10,0,0);
      pfVar9 = *(float **)(param_1 + 0x2c);
      local_80 = *pfVar9;
      local_7c = pfVar9[0xc];
      local_78 = pfVar9[0x18];
      pfVar9 = *(float **)(param_1 + 0x30);
      local_a0 = *pfVar9;
      local_9c = pfVar9[0xc];
      local_98 = pfVar9[0x18];
      FUN_0048eed0(param_1 + 0x170,param_1 + 0x430,&local_80,param_1 + 0x440);
    }
LAB_00492b2d:
    FUN_00593ec0(fVar10,0,0);
    fVar4 = **(float **)(param_1 + 0x44);
    local_70 = (local_80 - local_a0) * fVar4;
    local_6c = (local_7c - local_9c) * fVar4;
    local_80 = local_70 + local_a0;
    local_7c = local_6c + local_9c;
    local_78 = (local_78 - local_98) * fVar4 + local_98;
    local_68 = local_78;
    uVar7 = FUN_00564db0(**(float **)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x4c));
    if (DAT_00735f5c == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x1c) + 0xc4) = uVar7;
    }
    FUN_0040b780(&local_60);
    FUN_0047d070(*(undefined4 *)(param_1 + 0x1c),local_50,DAT_0073ad38);
  }
  return;
}
