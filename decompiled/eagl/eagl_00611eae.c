/* spd-match: far pct=6.40 flags=/Og /c /nologo /TC method=m4_13_callee_stdcall source=m4_13/4.1.3/va_00611EAE */
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
int __cdecl FUN_005f7709();
int __cdecl FUN_005f7760();
int __cdecl FUN_005f7a42();
int __stdcall FUN_005fbec8(int a1, int a2, int a3, int a4);
extern int _DAT_006ccb10;
extern void LAB_00612046(void);
extern void LAB_0061204d(void);
extern void LAB_00612050(void);
extern void LAB_006120ca(void);
extern void LAB_006121a8(void);
extern void LAB_006121ce(void);
extern void LAB_0061225a(void);
extern void LAB_0061229b(void);
extern void LAB_006122b1(void);
extern void LAB_006122b7(void);
extern void LAB_006122c6(void);
extern void LAB_00612412(void);
extern void LAB_00612485(void);

int __fastcall FUN_00611eae(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint local_50 [5];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int *local_2c;
  uint *local_28;
  uint *local_24;
  uint local_20;
  int *local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  local_10 = **(uint **)(param_1 + 0x98) & 0xffffff;
  local_18 = param_1;
  if (local_10 == 0) {
    return 1;
  }
  local_50[4] = (*(uint **)(param_1 + 0x98))[1] / local_10;
  local_38 = 0;
  if (local_50[4] != 0) {
    local_34 = 0;
    do {
      iVar10 = -1;
      local_50[0] = 0xffffffff;
      local_50[1] = 0xffffffff;
      local_50[2] = 0xffffffff;
      local_8 = 0;
      local_2c = (int *)0x0;
      local_1c = (int *)0x0;
      local_24 = (uint *)0x0;
      local_28 = (uint *)0x0;
      local_50[3] = 0xffffffff;
      local_14 = -1;
      local_c = -1;
      if (local_10 != 0) {
        piVar11 = (int *)(*(int *)(*(int *)(param_1 + 0x98) + 8) + local_34);
        local_30 = local_10;
        do {
          iVar9 = *piVar11;
          iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
          iVar2 = *(int *)(iVar1 + 0xc);
          if (iVar2 == 0) {
            uVar4 = *(uint *)(iVar1 + 0x2c);
            if (uVar4 != 0xffffffff) {
              local_2c = *(int **)(*(int *)(param_1 + 0x18) + uVar4 * 4);
LAB_00612046:
              local_50[local_8] = uVar4;
              goto LAB_0061204d;
            }
          }
          else if (iVar2 == 1) {
            uVar4 = *(uint *)(iVar1 + 0x2c);
            if (uVar4 != 0xffffffff) {
              local_1c = *(int **)(*(int *)(param_1 + 0x18) + uVar4 * 4);
              goto LAB_00612046;
            }
          }
          else {
            if (iVar2 == 2) {
              iVar1 = *(int *)(iVar1 + 0x2c);
              local_50[local_8] = 0xffffffff;
              local_14 = iVar9;
              iVar10 = iVar9;
              if (iVar1 != -1) {
                local_24 = *(uint **)(*(int *)(param_1 + 0x18) + iVar1 * 4);
                if ((*local_24 & 0xff000000) == 0x10000000) {
                  uVar6 = 0;
                  uVar4 = *local_24 & 0xffffff;
                  if (uVar4 != 0) {
                    piVar8 = (int *)local_24[4];
                    do {
                      if (*piVar8 == iVar9) {
                        local_14 = *(int *)(local_24[2] + uVar6 * 4);
                        iVar10 = local_14;
                        break;
                      }
                      uVar6 = uVar6 + 1;
                      piVar8 = piVar8 + 1;
                    } while (uVar6 < uVar4);
                  }
                }
                else {
                  local_24 = (uint *)0x0;
                }
              }
            }
            else {
              if (iVar2 != 3) goto LAB_00612050;
              iVar1 = *(int *)(iVar1 + 0x2c);
              local_c = iVar9;
              local_50[local_8] = 0xffffffff;
              if (iVar1 != -1) {
                local_28 = *(uint **)(*(int *)(param_1 + 0x18) + iVar1 * 4);
                if ((*local_28 & 0xff000000) == 0x10000000) {
                  uVar6 = 0;
                  uVar4 = *local_28 & 0xffffff;
                  if (uVar4 != 0) {
                    piVar8 = (int *)local_28[4];
                    do {
                      iVar10 = local_14;
                      if (*piVar8 == local_c) {
                        local_c = *(int *)(local_28[2] + uVar6 * 4);
                        break;
                      }
                      uVar6 = uVar6 + 1;
                      piVar8 = piVar8 + 1;
                    } while (uVar6 < uVar4);
                  }
                }
                else {
                  local_28 = (uint *)0x0;
                }
              }
            }
LAB_0061204d:
            local_8 = local_8 + 1;
          }
LAB_00612050:
          piVar11 = piVar11 + 1;
          local_30 = local_30 - 1;
        } while (local_30 != 0);
      }
      if ((local_8 == local_10) && (1 < local_8)) {
        bVar3 = false;
        if (local_1c != (int *)0x0) {
          if (*local_1c != 0x25000001) goto LAB_006120ca;
          if (((iVar10 != -1) && (iVar10 != *(int *)local_1c[2])) &&
             (iVar10 != ((int *)local_1c[2])[1])) {
            bVar3 = true;
          }
          if (local_c != -1) {
            piVar11 = (int *)local_1c[2];
            iVar9 = *piVar11;
            if ((local_c != iVar9) && (local_c != piVar11[1])) {
              bVar3 = true;
            }
            if (iVar10 != -1) {
              if (local_c == iVar10) {
                if (iVar9 != piVar11[1]) goto LAB_006120ca;
              }
              else if (iVar9 == piVar11[1]) {
LAB_006120ca:
                bVar3 = true;
              }
            }
          }
        }
        if (local_2c != (int *)0x0) {
          if (*local_2c != 0x10000001) goto LAB_006121ce;
          piVar11 = *(int **)(*(int *)(param_1 + 0x14) + *(int *)local_2c[2] * 4);
          if (((*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + *piVar11 * 4) + 4) & 0x80) == 0) ||
             (*(double *)(piVar11 + 4) != _DAT_006ccb10)) {
            bVar3 = true;
          }
        }
        if (!bVar3) {
          local_2c = (int *)0x0;
          local_20 = local_10;
          if (local_8 != 0) {
            do {
              uVar4 = local_50[(int)local_2c];
              if (uVar4 != 0xffffffff) {
                local_30 = 1;
                if (local_10 != 0) {
                  piVar11 = (int *)(*(int *)(*(int *)(param_1 + 0x98) + 8) + local_34);
                  local_3c = local_10;
                  do {
                    iVar10 = *(int *)(*(int *)(param_1 + 0x14) + *piVar11 * 4);
                    if (*(uint *)(iVar10 + 0x34) < *(uint *)(param_1 + 0x94)) {
                      local_30 = 0;
                    }
                    if (uVar4 < *(uint *)(iVar10 + 0x30)) {
                      local_30 = 0;
                    }
                    if (((local_24 == (uint *)0x0) && (*(int *)(iVar10 + 0xc) == 2)) ||
                       ((local_28 == (uint *)0x0 && (*(int *)(iVar10 + 0xc) == 3)))) {
                      local_20 = local_20 - 1;
                    }
                    else if (*(uint *)(iVar10 + 0x38) < uVar4) {
                      local_30 = 0;
                    }
                    piVar11 = piVar11 + 1;
                    local_3c = local_3c - 1;
                  } while (local_3c != 0);
                  param_1 = local_18;
                  if (local_30 == 0) goto LAB_006121a8;
                }
                local_3c = local_50[(int)local_2c];
                if ((local_50[(int)local_2c] != 0xffffffff) && (1 < local_20)) {
                  pvVar5 = _malloc(0x38);
                  if (pvVar5 == (void *)0x0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = FUN_005f7709();
                  }
                  uVar6 = local_20;
                  if (uVar4 == 0) {
                    return -0x7ff8fff2;
                  }
                  local_30 = uVar4;
                  iVar10 = FUN_005f7760(local_20 & 0xffffff | 0xfb000000,local_20 * 2,local_20,0);
                  if ((iVar10 < 0) ||
                     (iVar10 = FUN_005f7a42(*(undefined4 *)(param_1 + 0x98)), iVar10 < 0))
                  goto LAB_00612412;
                  uVar7 = 0;
                  if (uVar6 == 0) goto LAB_006122c6;
                  iVar10 = uVar6 << 2;
                  goto LAB_0061225a;
                }
                break;
              }
LAB_006121a8:
              local_2c = (int *)((int)local_2c + 1);
            } while (local_2c < local_8);
          }
        }
      }
LAB_006121ce:
      local_38 = local_38 + 1;
      local_34 = local_34 + local_10 * 4;
    } while (local_38 < local_50[4]);
  }
  return 1;
LAB_0061225a:
  do {
    if (local_1c == (int *)0x0) {
      if (local_c == -1) {
        iVar9 = local_14;
        if (local_14 != -1) {
LAB_006122b1:
          *(int *)(*(int *)(uVar4 + 8) + uVar7 * 4) = iVar9;
          goto LAB_006122b7;
        }
      }
      else {
        iVar9 = local_c;
        if (local_14 == -1) goto LAB_006122b1;
      }
      uVar13 = 0x12d9;
      uVar12 = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x34);
      goto LAB_0061229b;
    }
    *(undefined4 *)(*(int *)(uVar4 + 8) + uVar7 * 4) = *(undefined4 *)local_1c[2];
    iVar9 = *(int *)(local_1c[2] + 4);
LAB_006122b7:
    *(int *)(iVar10 + *(int *)(uVar4 + 8)) = iVar9;
    uVar7 = uVar7 + 1;
    iVar10 = iVar10 + 4;
  } while (uVar7 < local_20);
LAB_006122c6:
  uVar6 = 0;
  local_34 = 0;
  if (local_10 != 0) {
    iVar10 = local_38 * local_50[4] * 4;
    do {
      iVar9 = *(int *)(iVar10 + *(int *)(*(int *)(param_1 + 0x98) + 8));
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar9 * 4);
      if (((local_24 != (uint *)0x0) || (*(int *)(iVar1 + 0xc) != 2)) &&
         ((local_28 != (uint *)0x0 || (*(int *)(iVar1 + 0xc) != 3)))) {
        *(int *)(*(int *)(uVar4 + 0x10) + uVar6 * 4) = iVar9;
        uVar6 = uVar6 + 1;
      }
      if (local_20 < uVar6) {
        uVar13 = 0x12da;
        uVar12 = *(undefined4 *)(*(int *)(local_18 + 0x98) + 0x34);
        param_1 = local_18;
LAB_0061229b:
        FUN_005fbec8(param_1,uVar12,uVar13,"internal error: DST test failure");
        iVar10 = 1;
LAB_00612412:
        FUN_005f7186(1);
        return iVar10;
      }
      local_34 = local_34 + 1;
      iVar10 = iVar10 + 4;
      param_1 = local_18;
    } while (local_34 < local_10);
  }
  uVar6 = *(uint *)(uVar4 + 0xc);
  local_2c = (int *)0x0;
  if (uVar6 != 0) {
    local_34 = 1;
    do {
      local_38 = local_34;
      if (local_34 < uVar6) {
        do {
          iVar10 = *(int *)(*(int *)(uVar4 + 0x10) + (int)local_2c * 4);
          iVar9 = *(int *)(*(int *)(param_1 + 0x14) + iVar10 * 4);
          piVar11 = (int *)(*(int *)(uVar4 + 0x10) + local_38 * 4);
          iVar1 = *piVar11;
          iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar1 * 4);
          if (*(uint *)(iVar2 + 0xc) < *(uint *)(iVar9 + 0xc)) {
            *piVar11 = iVar10;
            *(int *)(*(int *)(local_30 + 0x10) + (int)local_2c * 4) = iVar1;
          }
          if (*(int *)(iVar9 + 0xc) == *(int *)(iVar2 + 0xc)) {
            FUN_005fbec8(local_18,*(undefined4 *)(*(int *)(local_18 + 0x98) + 0x34),0x12db,
                         "internal error: multiple write to same output");
            iVar10 = -0x7fffbffb;
            goto LAB_00612412;
          }
          local_38 = local_38 + 1;
          uVar4 = local_30;
          param_1 = local_18;
        } while (local_38 < *(uint *)(local_30 + 0xc));
      }
      local_2c = (int *)((int)local_2c + 1);
      uVar6 = *(uint *)(uVar4 + 0xc);
      local_34 = local_34 + 1;
    } while (local_2c < uVar6);
  }
  uVar6 = 0;
  if (local_8 != 0) {
    do {
      if (local_50[uVar6] != 0xffffffff) {
        **(undefined4 **)(*(int *)(param_1 + 0x18) + local_50[uVar6] * 4) = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_8);
  }
  if (local_24 != (uint *)0x0) {
    if (*local_24 == 0x10000001) {
      *local_24 = 0;
    }
    else if (*local_24 == 0x10000002) {
      piVar11 = (int *)local_24[2];
      if ((*piVar11 == local_14) && (piVar11[1] == local_c)) {
        *local_24 = 0;
      }
      if ((piVar11[1] == local_14) && (*piVar11 == local_c)) {
        *local_24 = 0;
      }
    }
  }
  if (local_28 == (uint *)0x0) goto LAB_00612485;
  if (*local_28 != 0x10000001) {
    if (*local_28 != 0x10000002) goto LAB_00612485;
    piVar11 = (int *)local_28[2];
    if ((*piVar11 == local_14) && (piVar11[1] == local_c)) {
      *local_28 = 0;
    }
    if ((piVar11[1] != local_14) || (*piVar11 != local_c)) goto LAB_00612485;
  }
  *local_28 = 0;
LAB_00612485:
  iVar10 = local_3c * 4;
  if (*(int *)(iVar10 + *(int *)(param_1 + 0x18)) != 0) {
    FUN_005f7186(1);
  }
  *(uint *)(iVar10 + *(int *)(param_1 + 0x18)) = uVar4;
  return 0;
}
