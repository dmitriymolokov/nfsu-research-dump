/* spd-match: far pct=5.83 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_7/buckets/eagl_p1/attempt3_c_focused */
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
typedef struct { int _dummy; } *pthreadlocinfo;
typedef struct { int _dummy; } *pthreadmbcinfo;
typedef struct { int _dummy; } *_cpinfo;
typedef struct { int _dummy; } *_locale_t;
typedef int INTRNCVT_STATUS;
void __cdecl __cfltcvt(void);
void __stdcall ___crtInitCritSecNoSpinCount_8(void);

int __cdecl FUN_005d65b0();
int __cdecl FUN_005d779c();
int __cdecl FUN_005fbec8();
int __cdecl FUN_00602b25();
int __cdecl FUN_00613d78();
int __cdecl FUN_0061663f();
int __cdecl FUN_006166af();
int __cdecl FUN_0061674c();
int __cdecl FUN_0061678a();
int __cdecl FUN_00618c39();
int __cdecl FUN_00618c64();
int __cdecl FUN_00619309();
extern void LAB_00619a99(void);
extern void LAB_00619d3d(void);
extern void LAB_00619e81(void);
extern void LAB_0061a09f(void);
extern void LAB_0061a1ce(void);
extern void LAB_0061a261(void);

int  FUN_00619954(int *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  HMODULE hModule;
  int (*pFVar5)(void);
  int *piVar6;
  void *pvVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char *pcVar16;
  undefined4 local_40 [3];
  void *local_34;
  int *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  param_1[0x27] = 0;
  local_8 = (int *)0x0;
  local_c = (int *)0x0;
  local_30 = (int *)0x0;
  local_1c = 0;
  local_28 = (undefined4 *)0x0;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_24 = (int *)0x0;
  local_34 = (void *)0x0;
  local_18 = (int *)0x0;
  local_20 = (undefined4 *)0x0;
  iVar4 = FUN_00602b25(param_2,param_3);
  if (iVar4 < 0) goto LAB_0061a1ce;
  uVar13 = 0;
  if (param_1[2] != 0) {
    do {
      piVar6 = *(int **)(param_1[5] + uVar13 * 4);
      uVar11 = *(uint *)(*(int *)(param_1[4] + *piVar6 * 4) + 4);
      if (((((uVar11 & 8) != 0) && ((uVar11 & 0x100) == 0)) || ((uVar11 & 0x10) != 0)) &&
         (iVar4 = (**(code **)(*param_1 + 8))(piVar6,0), iVar4 < 0)) goto LAB_0061a09f;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)param_1[2]);
  }
  piVar6 = (int *)param_1[0x42];
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
    param_1[0x42] = 0;
  }
  if ((((*(byte *)(param_1 + 0xd) & 4) == 0) &&
      ((hModule = GetModuleHandleA("d3d9.dll"), hModule != (HMODULE)0x0 ||
       (hModule = LoadLibraryA("d3d9.dll"), hModule != (HMODULE)0x0)))) &&
     (pFVar5 = GetProcAddress(hModule,"Direct3DShaderValidatorCreate9"), pFVar5 != (FARPROC)0x0)) {
    piVar6 = (int *)(*pFVar5)();
    param_1[0x42] = (int)piVar6;
    if ((piVar6 != (int *)0x0) &&
       (iVar4 = (**(code **)(*piVar6 + 0xc))(piVar6,FUN_006166af,param_1,1), iVar4 < 0))
    goto LAB_0061a1ce;
  }
  if ((*(byte *)(param_1 + 0xd) & 1) == 0) {
LAB_00619a99:
    param_1[0x33] = -1;
    uVar13 = 0;
    param_1[0x38] = 0;
    if (param_1[2] != 0) {
      do {
        *(undefined4 *)(*(int *)(param_1[5] + uVar13 * 4) + 0x1c) = 0;
        iVar4 = uVar13 * 4;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(*(int *)(param_1[5] + iVar4) + 0x20) = 0;
      } while (uVar13 < (uint)param_1[2]);
    }
    local_2c = (undefined4 *)0x0;
    param_3 = (int *)0x0;
    if (param_1[2] != 0) {
      do {
        piVar6 = *(int **)(param_1[5] + (int)param_3 * 4);
        iVar4 = *(int *)(param_1[4] + *piVar6 * 4);
        uVar13 = *(uint *)(iVar4 + 4);
        if ((((uVar13 & 8) != 0) && ((uVar13 & 0x100) == 0)) || ((uVar13 & 0x10) != 0)) {
          (**(code **)(*param_1 + 8))(piVar6,0);
        }
        if ((*(byte *)(iVar4 + 4) & 0x40) != 0) {
          local_2c = (undefined4 *)((int)local_2c + 1);
        }
        param_3 = (int *)((int)param_3 + 1);
      } while (param_3 < (int *)param_1[2]);
    }
    if ((undefined4 *)param_1[0x22] < local_2c) {
      iVar4 = FUN_005d779c(param_1[0xc],0,local_40);
      if (-1 < iVar4) {
        if (param_1[0x22] == 0) {
          FUN_005fbec8(param_1,0,0x11c1,"%s target does not support texture lookups",local_40[0]);
        }
        else {
          FUN_005fbec8(param_1,0,0x119e,
                       "maximum number of samplers exceeded. %s target can have a maximum of %i samplers"
                       ,local_40[0],param_1[0x22]);
        }
      }
LAB_0061a09f:
      iVar4 = -0x7fffbffb;
      goto LAB_0061a1ce;
    }
    if ((((param_1[0xc] & 0xffff0000U) == 0xfffe0000) &&
        (iVar4 = FUN_00613d78(param_1[0x16],param_1[0x1b],8,0x100,0x76), iVar4 < 0)) ||
       (((param_1[0xc] & 0xffff0000U) == 0xffff0000 &&
        (iVar4 = FUN_00613d78(0xffffffff,param_1[0x22],0x40,0,0x73), iVar4 < 0))))
    goto LAB_0061a1ce;
    if (param_1[2] != 0) {
      param_3 = (int *)param_1[2];
      piVar6 = (int *)param_1[5];
      do {
        piVar8 = (int *)*piVar6;
        iVar4 = *piVar8;
        piVar2 = local_c;
        if ((((param_1[0x18] != iVar4) ||
             (piVar1 = (int *)(piVar8[2] + 1), piVar3 = local_8, (int *)(piVar8[2] + 1) <= local_30)
             ) && (((piVar1 = local_30, param_1[0x16] != iVar4 ||
                    (piVar3 = (int *)(piVar8[2] + 1), (int *)(piVar8[2] + 1) <= local_8)) &&
                   (((param_1[0x17] != iVar4 ||
                     (piVar2 = (int *)(piVar8[2] + 1), piVar3 = local_8,
                     (int *)(piVar8[2] + 1) <= local_c)) &&
                    (piVar2 = local_c, piVar3 = local_8,
                    (*(byte *)(*(int *)(param_1[4] + iVar4 * 4) + 4) & 0x40) != 0)))))) &&
           (local_1c < piVar8[2] + 1U)) {
          local_1c = piVar8[2] + 1U;
        }
        local_8 = piVar3;
        local_c = piVar2;
        local_30 = piVar1;
        piVar6 = piVar6 + 1;
        param_3 = (int *)((int)param_3 - 1);
      } while (param_3 != (int *)0x0);
    }
    local_2c = (undefined4 *)((int)local_8 << 2);
    local_10 = _malloc((size_t)local_2c);
    if (local_10 != (int *)0x0) {
      piVar6 = (int *)((int)local_c << 2);
      param_3 = piVar6;
      local_14 = _malloc((size_t)piVar6);
      if (local_14 != (int *)0x0) {
        local_30 = (int *)(local_1c << 2);
        local_24 = _malloc((size_t)local_30);
        if (((local_24 != (int *)0x0) &&
            (local_34 = _malloc((size_t)local_2c), local_34 != (void *)0x0)) &&
           (local_18 = _malloc((size_t)piVar6), local_18 != (int *)0x0)) {
          piVar6 = local_10;
          for (uVar13 = (uint)local_2c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          for (uVar13 = (uint)local_2c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)piVar6 = 0;
            piVar6 = (int *)((int)piVar6 + 1);
          }
          piVar6 = local_14;
          for (uVar13 = (uint)param_3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          for (uVar13 = (uint)param_3 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)piVar6 = 0;
            piVar6 = (int *)((int)piVar6 + 1);
          }
          piVar6 = local_24;
          for (uVar13 = (uint)local_30 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          for (uVar13 = (uint)local_30 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)piVar6 = 0;
            piVar6 = (int *)((int)piVar6 + 1);
          }
          uVar13 = 0;
          if (param_1[2] != 0) {
            do {
              piVar6 = *(int **)(param_1[5] + uVar13 * 4);
              iVar4 = *piVar6;
              if (param_1[0x17] == iVar4) {
                piVar8 = local_14;
                if (piVar6[0x14] == -1) {
                  pcVar16 = "internal error: output register missing semantic";
LAB_00619e81:
                  uVar15 = 0;
                  uVar14 = 0;
                  goto LAB_0061a261;
                }
LAB_00619d3d:
                piVar8[piVar6[2]] = (int)piVar6;
              }
              else {
                if (param_1[0x16] == iVar4) {
                  piVar8 = local_10;
                  if (piVar6[0x14] == -1) {
                    pcVar16 = "internal error: input register missing semantic";
                    goto LAB_00619e81;
                  }
                  goto LAB_00619d3d;
                }
                piVar8 = local_24;
                if ((*(byte *)(*(int *)(param_1[4] + iVar4 * 4) + 4) & 0x40) != 0)
                goto LAB_00619d3d;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < (uint)param_1[2]);
          }
          param_3 = (int *)0x0;
          if (param_1[2] != 0) {
            do {
              piVar6 = *(int **)(param_1[5] + (int)param_3 * 4);
              if ((param_1[0x16] == *piVar6) && (piVar8 = (int *)0x0, local_8 != (int *)0x0)) {
                do {
                  if ((local_10[(int)piVar8] != 0) &&
                     (piVar6[0x14] == *(int *)(local_10[(int)piVar8] + 0x50))) {
                    piVar6[2] = (int)piVar8;
                  }
                  piVar8 = (int *)((int)piVar8 + 1);
                } while (piVar8 < local_8);
              }
              param_3 = (int *)((int)param_3 + 1);
            } while (param_3 < (int *)param_1[2]);
          }
          piVar6 = local_10;
          for (uVar13 = (uint)local_2c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
            *piVar6 = 0;
            piVar6 = piVar6 + 1;
          }
          uVar11 = 0;
          for (uVar13 = (uint)local_2c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)piVar6 = 0;
            piVar6 = (int *)((int)piVar6 + 1);
          }
          if (param_1[2] != 0) {
            do {
              piVar6 = *(int **)(param_1[5] + uVar11 * 4);
              uVar13 = *(uint *)(*(int *)(param_1[4] + *piVar6 * 4) + 4);
              if (((uVar13 & 8) != 0) && ((uVar13 & 0x100) == 0)) {
                local_10[piVar6[2]] = (int)piVar6;
              }
              uVar11 = uVar11 + 1;
            } while (uVar11 < (uint)param_1[2]);
          }
          piVar6 = (int *)0x0;
          local_30 = (int *)0x0;
          if (local_8 != (int *)0x0) {
            do {
              if (local_10[(int)piVar6] != 0) {
                local_30 = (int *)((int)local_30 + 1);
              }
              piVar6 = (int *)((int)piVar6 + 1);
            } while (piVar6 < local_8);
          }
          iVar4 = FUN_0061678a();
          uVar13 = 0;
          if (((iVar4 < 0) || (iVar4 = (**(code **)(*param_1 + 0x30))(), iVar4 < 0)) ||
             (((((*(byte *)(param_1 + 0xd) & 8) == 0 ||
                ((*(byte *)((int)param_1 + 0x92) & 0x10) != 0)) &&
               ((iVar4 = FUN_0061674c(), iVar4 < 0 ||
                (iVar4 = (**(code **)(*param_1 + 0x2c))(), iVar4 < 0)))) ||
              (iVar4 = FUN_00613d78(param_1[0x15],param_1[0x1e],0x100,0x40,99), iVar4 < 0))))
          goto LAB_0061a1ce;
          param_1[0x27] = 0;
          if (param_1[3] == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)param_1[6];
          }
          param_1[0x26] = iVar4;
          param_1[0x25] = 0;
          iVar4 = (**(code **)(*param_1 + 0x38))();
          if (iVar4 < 0) goto LAB_0061a1ce;
          param_3 = (int *)0x0;
          if (param_1[2] != 0) {
            local_2c = (undefined4 *)param_1[2];
            piVar6 = (int *)param_1[5];
            do {
              if (((*(byte *)(*(int *)(param_1[4] + *(int *)*piVar6 * 4) + 4) & 0x80) != 0) &&
                 (((int *)*piVar6)[1] == -1)) {
                uVar13 = uVar13 + 1;
              }
              piVar6 = piVar6 + 1;
              local_2c = (undefined4 *)((int)local_2c + -1);
            } while (local_2c != (undefined4 *)0x0);
          }
          local_20 = _malloc(uVar13 << 4);
          if (local_20 != (undefined4 *)0x0) {
            local_28 = _malloc(uVar13 << 2);
            if (local_28 != (undefined4 *)0x0) {
              puVar12 = local_20;
              for (iVar4 = (uVar13 & 0xfffffff) << 2; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined1 *)puVar12 = 0;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
              puVar12 = local_28;
              for (uVar13 = uVar13 & 0x3fffffff; uVar13 != 0; uVar13 = uVar13 - 1) {
                *puVar12 = 0;
                puVar12 = puVar12 + 1;
              }
              for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(undefined1 *)puVar12 = 0;
                puVar12 = (undefined4 *)((int)puVar12 + 1);
              }
              uVar13 = 0;
              if (param_1[2] != 0) {
                do {
                  piVar6 = *(int **)(param_1[5] + uVar13 * 4);
                  if ((((*(byte *)(*(int *)(param_1[4] + *piVar6 * 4) + 4) & 0x80) != 0) &&
                      (piVar6[1] == -1)) && (piVar6[9] == -1)) {
                    piVar8 = (int *)0x0;
                    if (param_3 != (int *)0x0) {
                      do {
                        if (local_28[(int)piVar8] == piVar6[2]) break;
                        piVar8 = (int *)((int)piVar8 + 1);
                      } while (piVar8 < param_3);
                    }
                    if (piVar8 == param_3) {
                      param_3 = (int *)((int)param_3 + 1);
                      local_28[(int)piVar8] = piVar6[2];
                    }
                    local_20[piVar6[3] + (int)piVar8 * 4] = (float)*(double *)(piVar6 + 4);
                  }
                  uVar13 = uVar13 + 1;
                } while (uVar13 < (uint)param_1[2]);
              }
              piVar6 = (int *)0x0;
              if (param_3 != (int *)0x0) {
                local_2c = local_20;
                do {
                  iVar4 = (**(code **)(*param_1 + 0x3c))(local_28[(int)piVar6],local_2c);
                  if (iVar4 < 0) goto LAB_0061a1ce;
                  local_2c = local_2c + 4;
                  piVar6 = (int *)((int)piVar6 + 1);
                } while (piVar6 < param_3);
              }
              if ((int *)param_1[0x20] < local_30) {
                pcVar16 = "maximum number of inputs exceeded";
                uVar15 = 0x119a;
                uVar14 = 0;
LAB_0061a261:
                FUN_005fbec8(param_1,uVar14,uVar15,pcVar16);
              }
              else {
                param_3 = (int *)0x0;
                if (local_8 != (int *)0x0) {
                  iVar4 = (int)local_34 - (int)local_10;
                  local_30 = local_8;
                  piVar6 = local_10;
                  do {
                    if ((*piVar6 != 0) &&
                       (iVar9 = (**(code **)(*param_1 + 0x40))
                                          (*piVar6,(undefined1 *)(iVar4 + (int)piVar6)), iVar9 < 0))
                    {
                      param_3 = (int *)0x1;
                    }
                    piVar6 = piVar6 + 1;
                    local_30 = (int *)((int)local_30 + -1);
                  } while (local_30 != (int *)0x0);
                }
                iVar4 = (**(code **)(*param_1 + 0x48))();
                uVar13 = 0;
                if (iVar4 < 0) goto LAB_0061a1ce;
                if (local_1c != 0) {
                  do {
                    if ((local_24[uVar13] != 0) &&
                       (iVar4 = (**(code **)(*param_1 + 0x44))(local_24[uVar13]), iVar4 < 0)) {
                      param_3 = (int *)0x1;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < local_1c);
                }
                if (local_c != (int *)0x0) {
                  iVar4 = (int)local_18 - (int)local_14;
                  local_30 = local_c;
                  piVar6 = local_14;
                  do {
                    if ((*piVar6 != 0) &&
                       (iVar9 = (**(code **)(*param_1 + 0x5c))
                                          (*piVar6,(undefined1 *)(iVar4 + (int)piVar6),0), iVar9 < 0
                       )) {
                      param_3 = (int *)0x1;
                    }
                    piVar6 = piVar6 + 1;
                    local_30 = (int *)((int)local_30 + -1);
                  } while (local_30 != (int *)0x0);
                }
                iVar4 = 0;
                if (param_3 == (int *)0x0) {
                  piVar6 = (int *)0x0;
                  if (local_c != (int *)0x0) {
                    do {
                      if ((*(int *)(iVar4 + (int)local_14) != 0) &&
                         (param_3 = (int *)0x0, iVar4 != 0)) {
                        piVar8 = local_18;
                        do {
                          if ((*(int *)(((int)local_14 - (int)local_18) + (int)piVar8) != 0) &&
                             (*(int *)(iVar4 + (int)local_18) == *piVar8)) {
                            pcVar16 = "overlapping output semantics";
                            uVar15 = 0x1198;
                            uVar14 = *(undefined4 *)(local_14[(int)piVar6] + 0x4c);
                            goto LAB_0061a261;
                          }
                          param_3 = (int *)((int)param_3 + 1);
                          piVar8 = piVar8 + 1;
                        } while (param_3 < piVar6);
                      }
                      piVar6 = (int *)((int)piVar6 + 1);
                      iVar4 = iVar4 + 4;
                    } while (piVar6 < local_c);
                  }
                  iVar4 = FUN_0061674c();
                  if ((((((-1 < iVar4) && (iVar4 = (**(code **)(*param_1 + 0x28))(), -1 < iVar4)) &&
                        (iVar4 = FUN_00618c64(), -1 < iVar4)) &&
                       (((*(byte *)(param_1 + 0xd) & 1) == 0 || (iVar4 = FUN_00619309(), -1 < iVar4)
                        ))) && ((iVar4 = FUN_00618c39(0xffff), -1 < iVar4 &&
                                (iVar4 = FUN_0061663f(), -1 < iVar4)))) &&
                     (((piVar6 = (int *)param_1[0x42], piVar6 == (int *)0x0 || (param_1[0xe] != 0))
                      || (iVar4 = (**(code **)(*piVar6 + 0x14))(piVar6), -1 < iVar4)))) {
                    if (param_2 != (uint *)0x0) {
                      iVar4 = FUN_005d65b0(param_1[0x29] << 2,&param_3);
                      if (iVar4 < 0) goto LAB_0061a1ce;
                      puVar12 = (undefined4 *)param_1[0x28];
                      local_30 = (int *)(param_1[0x29] << 2);
                      puVar10 = (undefined4 *)(**(code **)(*param_3 + 0xc))(param_3);
                      for (uVar13 = (uint)local_30 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *puVar10 = *puVar12;
                        puVar12 = puVar12 + 1;
                        puVar10 = puVar10 + 1;
                      }
                      for (uVar13 = (uint)local_30 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                        *(undefined1 *)puVar10 = *(undefined1 *)puVar12;
                        puVar12 = (undefined4 *)((int)puVar12 + 1);
                        puVar10 = (undefined4 *)((int)puVar10 + 1);
                      }
                      *param_2 = (uint)param_3;
                    }
                    iVar4 = 0;
                  }
                  goto LAB_0061a1ce;
                }
              }
            }
            goto LAB_0061a09f;
          }
        }
      }
    }
  }
  else {
    pvVar7 = _malloc(param_1[3] * 0x30);
    param_1[0x2e] = (int)pvVar7;
    if (pvVar7 != (void *)0x0) {
      param_1[0x2f] = 0;
      param_1[0x30] = param_1[3] << 1;
      goto LAB_00619a99;
    }
  }
  iVar4 = -0x7ff8fff2;
LAB_0061a1ce:
  _free(local_10);
  _free(local_14);
  _free(local_34);
  _free(local_18);
  _free((void *)0x0);
  _free(local_20);
  _free(local_28);
  _free(local_24);
  _free((void *)param_1[0x28]);
  param_1[0x28] = 0;
  _free((void *)param_1[0x2e]);
  param_1[0x2e] = 0;
  piVar6 = (int *)param_1[0x42];
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 8))(piVar6);
    param_1[0x42] = 0;
  }
  return iVar4;
}
