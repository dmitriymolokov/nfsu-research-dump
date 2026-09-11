/* spd-match: far pct=3.90 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

extern int _DAT_0069f210;

int FUN_005c887d(int *param_1,int *param_2,int *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar6 = param_4;
  piVar5 = param_3;
  piVar1 = (int *)*param_1;
  iVar7 = piVar1[1];
  local_c = piVar1[4];
  local_14 = 0;
  if (local_c == 0) {
    local_c = 1;
  }
  if (-1 < iVar7) {
    if (iVar7 < 4) {
      uVar2 = piVar1[5];
      uVar3 = piVar1[6];
      iVar7 = *piVar1;
      uVar8 = (uint)((uVar2 & 3) != 0) + (uVar2 >> 2);
      local_10 = uVar8;
      local_8 = uVar2;
      if (iVar7 == 1) {
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar7 = (int)param_3 << 2;
                  do {
                    *(double *)(*piVar5 + uVar9 * 8) = (double)*(int *)(iVar7 + *param_2);
                    uVar9 = uVar9 + 1;
                    iVar7 = iVar7 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x20;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      else if (iVar7 == 2) {
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar7 = (int)param_3 << 2;
                  do {
                    dVar4 = (double)*(int *)(iVar7 + *param_2);
                    if (*(int *)(iVar7 + *param_2) < 0) {
                      dVar4 = dVar4 + _DAT_0069f210;
                    }
                    *(double *)(*piVar5 + uVar9 * 8) = dVar4;
                    uVar9 = uVar9 + 1;
                    iVar7 = iVar7 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x20;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      else {
        if (iVar7 != 3) {
          return -0x7fffbffb;
        }
        local_18 = 0;
        if (local_c != 0) {
          do {
            if (*param_4 == 0) break;
            param_3 = (int *)0x0;
            if (uVar3 != 0) {
              do {
                uVar9 = *param_4;
                if (uVar9 == 0) break;
                if (uVar9 < uVar8) {
                  local_8 = uVar9 << 2;
                  local_10 = uVar9;
                }
                uVar9 = 0;
                if (local_8 != 0) {
                  iVar7 = (int)param_3 << 2;
                  do {
                    *(double *)(*piVar5 + uVar9 * 8) = (double)*(float *)(iVar7 + *param_2);
                    uVar9 = uVar9 + 1;
                    iVar7 = iVar7 + uVar3 * 4;
                  } while (uVar9 < local_8);
                }
                *piVar5 = *piVar5 + local_10 * 0x20;
                *param_4 = *param_4 - local_10;
                param_3 = (int *)((int)param_3 + 1);
              } while (param_3 < uVar3);
            }
            *param_2 = *param_2 + uVar3 * uVar2 * 4;
            local_18 = local_18 + 1;
          } while (local_18 < local_c);
        }
      }
      *param_1 = *param_1 + 0x1c;
      return 0;
    }
    if (iVar7 == 5) {
      uVar2 = piVar1[5];
      *param_1 = (int)(piVar1 + 6);
      local_10 = 0;
      if (local_c == 0) {
        return 0;
      }
      do {
        if (*puVar6 == 0) {
          return local_14;
        }
        param_4 = (uint *)0x0;
        *param_1 = (int)(piVar1 + 6);
        if (uVar2 != 0) {
          do {
            if (*puVar6 == 0) break;
            local_14 = FUN_005c887d(param_1,param_2,param_3,puVar6);
            if (local_14 < 0) {
              return local_14;
            }
            param_4 = (uint *)((int)param_4 + 1);
          } while (param_4 < uVar2);
        }
        local_10 = local_10 + 1;
        if (local_c <= local_10) {
          return local_14;
        }
      } while( true );
    }
  }
  return -0x7fffbffb;
}
