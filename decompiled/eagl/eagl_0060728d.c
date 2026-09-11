/* spd-match: far pct=9.45 flags=/O1 /c /nologo /TC method=m4_13_callee_stdcall source=m4_13/4.1.3/va_0060728D */
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
/* M4.1.3: FUN_005fbec8 → __stdcall (callee_stdcall). */
typedef struct { int _dummy; } *pthreadlocinfo;
typedef struct { int _dummy; } *pthreadmbcinfo;
typedef struct { int _dummy; } *_cpinfo;
typedef struct { int _dummy; } *_locale_t;
typedef int INTRNCVT_STATUS;
void __cdecl __cfltcvt(void);
void __stdcall ___crtInitCritSecNoSpinCount_8(void);

int __cdecl FUN_005f7186();
int __stdcall FUN_005fbec8(int a1, int a2, int a3, int a4);
int __cdecl FUN_0060691c();
int __cdecl FUN_00606ae1();
extern void LAB_00607427(void);
extern void LAB_0060742f(void);
extern void LAB_0060768d(void);
extern void LAB_0060772c(void);
extern void LAB_00607794(void);

int __fastcall FUN_0060728d(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  undefined4 uVar13;
  char *pcVar14;
  int local_78 [6];
  int local_60 [6];
  uint local_48 [6];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int *local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  iVar9 = 6;
  piVar11 = local_60;
  for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  piVar11 = local_78;
  for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar11 = 0;
    piVar11 = piVar11 + 1;
  }
  puVar12 = local_48;
  for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x1c8);
  for (iVar8 = iVar9; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x1e0);
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  local_18 = 1;
  local_24 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    local_20 = *(int **)(param_1 + 0x18);
    do {
      puVar12 = (uint *)*local_20;
      uVar5 = *puVar12;
      uVar10 = uVar5 & 0xff000000;
      if ((((uVar10 == 0x40000000) || (uVar10 == 0x44000000)) || (uVar10 == 0x48000000)) ||
         (uVar10 == 0x4c000000)) {
LAB_00607427:
        if (uVar10 == 0x34000000) {
LAB_0060742f:
          iVar9 = *(int *)puVar12[2];
        }
        else {
          iVar9 = *(int *)(puVar12[2] + (uVar5 & 0xffffff) * 4);
        }
        piVar11 = *(int **)(*(int *)(param_1 + 0x14) + iVar9 * 4);
        if ((*piVar11 == *(int *)(param_1 + 0x58)) && (piVar11[8] == 0)) {
          if ((char)piVar11[0x14] != '\x03') {
            pcVar14 = "texture loads or clips cannot be from inputs not marked TEXCOORD";
            uVar13 = 0x11a1;
            iVar9 = piVar11[0x11];
            goto LAB_00607794;
          }
          if ((local_60[*(byte *)((int)piVar11 + 0x51)] != 0) &&
             ((*(uint *)(param_1 + 0x30) & 0xffff) != 0x104)) {
            local_18 = 0;
          }
          local_60[*(byte *)((int)piVar11 + 0x51)] = 1;
        }
        else {
          local_18 = 0;
        }
      }
      else {
        if (uVar10 == 0x34000000) goto LAB_0060742f;
        if ((uVar10 == 0xee000000) || (uVar10 == 0xef000000)) goto LAB_00607427;
        uVar10 = uVar5 & 0xffffff;
        local_2c = uVar10;
        if ((uVar10 != 0) && (uVar5 != 0)) {
          local_14 = 0;
          local_30 = puVar12[1];
          if (puVar12[1] != 0) {
            local_1c = (int *)puVar12[2];
            do {
              uVar5 = local_14;
              piVar11 = *(int **)(*(int *)(param_1 + 0x14) + *local_1c * 4);
              if ((*piVar11 == *(int *)(param_1 + 0x58)) &&
                 (bVar2 = *(byte *)((int)piVar11 + 0x51), (char)piVar11[0x14] == '\x03')) {
                if ((local_60[bVar2] != 0) &&
                   (((*(uint *)(param_1 + 0x30) & 0xffff) != 0x104 && (local_48[bVar2] == 0)))) {
                  local_18 = 0;
                }
                local_60[bVar2] = 1;
                uVar1 = uVar5 + uVar10;
                local_78[bVar2] = 1;
                uVar4 = local_2c;
                if (uVar5 < uVar1) {
                  local_28 = uVar1 - local_14;
                  uVar5 = local_48[bVar2];
                  piVar11 = local_1c;
                  do {
                    uVar10 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + *piVar11 * 4) + 0xc) + 1;
                    if (uVar5 < uVar10) {
                      uVar5 = uVar10;
                    }
                    piVar11 = piVar11 + 1;
                    local_28 = local_28 - 1;
                  } while (local_28 != 0);
                  local_48[bVar2] = uVar5;
                  uVar10 = uVar4;
                }
              }
              local_14 = local_14 + uVar10;
              local_1c = local_1c + uVar10;
            } while (local_14 < local_30);
          }
          local_24 = local_24 + 1;
        }
      }
      local_8 = local_8 + 1;
      local_20 = local_20 + 1;
    } while (local_8 < *(uint *)(param_1 + 0xc));
    if (0x10 < local_24) {
      local_18 = 0;
    }
  }
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar9 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar9) + 0x28) = 0;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
  if (local_18 == 0) {
    pvVar7 = _malloc(0x800);
    *(void **)(param_1 + 0x140) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      return -0x7ff8fff2;
    }
    pvVar7 = _malloc(0x800);
    *(void **)(param_1 + 0x144) = pvVar7;
    if (pvVar7 == (void *)0x0) {
      return -0x7ff8fff2;
    }
    local_c = _malloc(0x800);
    if (local_c == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    local_10 = _malloc(0x800);
    puVar6 = *(undefined4 **)(param_1 + 0x140);
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = *(undefined4 **)(param_1 + 0x144);
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_c;
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar6 = local_10;
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    local_1c = (int *)0x0;
    local_8 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      do {
        if (0x1ff < local_8) {
          pcVar14 = "program too big";
          uVar13 = 0x11a2;
          iVar9 = 0;
LAB_00607794:
          FUN_005fbec8(param_1,iVar9,uVar13,pcVar14);
          return -0x7fffbffb;
        }
        puVar12 = *(uint **)(*(int *)(param_1 + 0x18) + local_8 * 4);
        uVar5 = *puVar12 & 0xff000000;
        if ((((uVar5 == 0x40000000) || (uVar5 == 0x44000000)) || (uVar5 == 0x48000000)) ||
           (((uVar5 == 0x4c000000 || (uVar5 == 0x34000000)) ||
            ((uVar5 == 0xef000000 || (uVar5 == 0xee000000)))))) {
          local_28 = *puVar12 & 0xffffff;
          if (uVar5 == 0x34000000) {
            local_28 = 0;
          }
          piVar11 = (int *)(puVar12[2] + local_28 * 4);
          piVar3 = *(int **)(*(int *)(param_1 + 0x14) + *piVar11 * 4);
          if ((*piVar3 == *(int *)(param_1 + 0x60)) || (piVar3[8] != 0)) {
            iVar9 = FUN_0060691c(piVar11,puVar12[1] - local_28,local_c,&local_1c);
            if (iVar9 < 0) goto LAB_0060772c;
          }
          else if (*piVar3 == *(int *)(param_1 + 0x58)) {
            if ((char)piVar3[0x14] == '\x03') {
              if ((local_78[*(byte *)((int)piVar3 + 0x51)] == 0) ||
                 ((*(uint *)(param_1 + 0x30) & 0xffff) == 0x104)) goto LAB_0060768d;
              pcVar14 = "can read from texcoord and use it for texlookup only in ps_1_4 and higher";
              uVar13 = 0x11a8;
            }
            else {
              pcVar14 = 
              "cannot perform dependent texture read which in any way is based on color inputs";
              uVar13 = 0x11a1;
            }
            FUN_005fbec8(param_1,0,uVar13,pcVar14);
            iVar9 = -0x7fffbffb;
            goto LAB_0060772c;
          }
        }
LAB_0060768d:
        local_8 = local_8 + 1;
      } while (local_8 < *(uint *)(param_1 + 0xc));
    }
    piVar11 = (int *)0x0;
    if (local_1c != (int *)0x0) {
      puVar6 = local_c;
      do {
        *(undefined4 *)(((int)local_10 - (int)local_c) + (int)puVar6) = *puVar6;
        *puVar6 = 0;
        piVar11 = (int *)((int)piVar11 + 1);
        puVar6 = puVar6 + 1;
      } while (piVar11 < local_1c);
    }
    iVar9 = FUN_00606ae1(*(undefined4 *)(param_1 + 0x144),param_1 + 0x138,
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),0,0);
    if ((iVar9 < 0) ||
       (iVar9 = FUN_00606ae1(*(undefined4 *)(param_1 + 0x140),param_1 + 0x134,local_10,local_1c,
                             *(undefined4 *)(param_1 + 0x144),*(undefined4 *)(param_1 + 0x88)),
       iVar9 < 0)) goto LAB_0060772c;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
    puVar6 = _malloc(0x800);
    *(undefined4 **)(param_1 + 0x144) = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      return -0x7ff8fff2;
    }
    for (iVar9 = 0x200; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    iVar9 = FUN_00606ae1(*(undefined4 *)(param_1 + 0x144),param_1 + 0x138,
                         *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0xc),0,0);
    if (iVar9 < 0) {
      return iVar9;
    }
  }
  iVar9 = 0;
  uVar5 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      puVar6 = *(undefined4 **)(*(int *)(param_1 + 0x14) + uVar5 * 4);
      if (puVar6[10] == 1) {
        *puVar6 = *(undefined4 *)(param_1 + 0x4c);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 8));
  }
LAB_0060772c:
  uVar5 = 0;
  if (local_c != (undefined4 *)0x0) {
    if (iVar9 < 0) {
      do {
        if (local_c[uVar5] != 0) {
          FUN_005f7186(1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x200);
    }
    _free(local_c);
  }
  if (local_10 != (undefined4 *)0x0) {
    if (iVar9 < 0) {
      uVar5 = 0;
      do {
        if (local_10[uVar5] != 0) {
          FUN_005f7186(1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x200);
    }
    _free(local_10);
    return iVar9;
  }
  return iVar9;
}
