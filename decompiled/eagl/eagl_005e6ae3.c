/* spd-match: far pct=8.64 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_005b1f01();
int __cdecl FUN_005e552a();
int __cdecl FUN_005e621b();
int __cdecl FUN_005e8cd0();
int __cdecl FUN_0061314d();
int __cdecl FUN_00613165();
int __cdecl FUN_0061319b();
int __cdecl FUN_006132d2();
int __cdecl FUN_006132de();
int __cdecl FUN_00672b40();
extern unsigned char *PTR_s_D3DX9_Shader_Assembler_006def50;
extern void LAB_005e6a37(void);
extern void LAB_005e6ce3(void);

int __fastcall FUN_005e6ae3(undefined4 *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined1 local_24 [16];
  void *local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  
  iVar5 = 0;
  FUN_0061314d(0x464e4946);
  iVar1 = param_1[0x1e];
  local_14 = (void *)0x0;
  local_8 = (undefined4 *)0x0;
  iVar1 = *(int *)(iVar1 + 0x60) + *(int *)(iVar1 + 0x5c) + *(int *)(iVar1 + 0x58);
  if (iVar1 != 0) {
    pvVar2 = _malloc(iVar1 * 4);
    local_14 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      iVar5 = -0x7ff8fff2;
    }
    else {
      FUN_005e552a(pvVar2);
      iVar1 = *(int *)(param_1[0x1e] + 0x60);
      FUN_005e552a((void *)((int)pvVar2 + iVar1 * 4));
      iVar1 = iVar1 + *(int *)(param_1[0x1e] + 0x58);
      FUN_005e552a((void *)((int)pvVar2 + iVar1 * 4));
      uVar4 = iVar1 + *(int *)(param_1[0x1e] + 0x5c);
      FUN_00672b40(pvVar2,uVar4,4,&LAB_005e6a37);
      local_10 = (undefined4 *)(uVar4 * 0x14);
      local_8 = _malloc((size_t)local_10);
      if (local_8 == (undefined4 *)0x0) {
        iVar5 = -0x7ff8fff2;
      }
      else {
        local_34 = 0;
        local_28 = 0;
        local_30 = 0;
        local_38 = 0x14;
        local_2c = uVar4;
        iVar5 = FUN_0061319b(&local_38,0x14,1,0);
        if (-1 < iVar5) {
          puVar6 = local_8;
          for (uVar3 = (uint)local_10 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar3 = (uint)local_10 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
          iVar5 = FUN_0061319b(local_8,local_10,1,&local_28);
          if (-1 < iVar5) {
            local_c = 0;
            if (uVar4 != 0) {
              local_10 = local_8;
              do {
                puVar6 = *(undefined4 **)((int)local_14 + local_c * 4);
                iVar5 = FUN_005e8cd0(local_24,local_10,*puVar6,puVar6[1],
                                     *(undefined4 *)param_1[0x16]);
                if (iVar5 < 0) goto LAB_005e6ce3;
                local_c = local_c + 1;
                local_10 = local_10 + 5;
              } while (local_c < uVar4);
            }
            iVar5 = FUN_0061319b(PTR_s_D3DX9_Shader_Assembler_006def50,0xffffffff,5,&local_34);
            if (-1 < iVar5) {
              uVar4 = FUN_006132d2();
              if (uVar4 < 0x8001) {
                iVar5 = FUN_005e621b(uVar4);
                if (-1 < iVar5) {
                  _memmove((void *)(param_1[0x16] + 4 + uVar4 * 4),(void *)(param_1[0x16] + 4),
                           param_1[0x17] * 4 - 4);
                  iVar5 = FUN_006132de(param_1[0x16] + 4,uVar4);
                  if (-1 < iVar5) {
                    param_1[0x17] = param_1[0x17] + uVar4;
                    param_1[0x1a] = param_1[0x1a] + uVar4;
                    param_1[0x19] = param_1[0x17];
                    iVar5 = 0;
                  }
                }
              }
              else {
                FUN_005b1f01(*param_1,param_1 + 4,0x7ef,"fragment info exceeds maximum comment size"
                            );
                iVar5 = -0x7fffbffb;
              }
            }
          }
        }
      }
    }
  }
LAB_005e6ce3:
  _free(local_14);
  _free(local_8);
  FUN_00613165();
  return iVar5;
}
