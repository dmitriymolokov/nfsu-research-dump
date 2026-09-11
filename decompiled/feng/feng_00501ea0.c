/* spd-match: far pct=5.92 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

typedef void _func_void_void_ptr(void);
int __cdecl FUN_004fbaf0();
int __cdecl FUN_004fcb20();
int __cdecl FUN_004fccf0();
int __cdecl FUN_004ff010();
int __cdecl FUN_005006a0();
int __cdecl FUN_00502450();
int __cdecl FUN_00502b90();
int __cdecl FUN_00502bf0();
int __cdecl FUN_00502c90();
int __cdecl FUN_00502cd0();
int __cdecl FUN_00503df0();
extern unsigned char *PTR_FUN_006c17f0;
extern unsigned char *PTR_FUN_006c1830;
extern void LAB_005006f0(void);
extern void LAB_00684f18(void);
void *ExceptionList;

undefined4 FUN_00501ea0(int param_1,ushort *param_2,undefined4 *param_3)

{
  ushort uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  void **ppvVar5;
  char cVar6;
  ushort *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  ushort *puVar16;
  undefined1 *puVar17;
  uint local_2c;
  uint local_28;
  int *local_24;
  int local_20;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00684f18;
  puVar7 = (ushort *)((int)param_3 + (int)param_2);
  puVar14 = (undefined1 *)0x0;
  param_3 = (undefined4 *)0x0;
  local_20 = -1;
  cVar6 = '\0';
  ppvVar5 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar5, param_2 < puVar7;
      param_2 = (ushort *)((int)param_2 + param_2[1] + 4)) {
    uVar1 = *param_2;
    if (uVar1 < 0x6654) {
      if (uVar1 == 0x6653) {
        if (param_3 != (undefined4 *)0x0) {
          param_3[5] = *(undefined4 *)(param_2 + 2);
        }
      }
      else if (uVar1 < 0x6155) {
        if (uVar1 == 0x6154) {
          if (param_3 != (undefined4 *)0x0) {
            puVar14[3] = (char)param_2[2];
          }
        }
        else if (uVar1 == 0x4946) {
          local_20 = local_20 + 1;
          puVar14 = (undefined1 *)(local_20 * 0x38 + param_3[8]);
          *puVar14 = (char)param_2[2];
          puVar14[1] = *(undefined1 *)((int)param_2 + 5);
          puVar14[2] = (char)param_2[3];
          puVar14[3] = *(undefined1 *)((int)param_2 + 7);
          *(uint *)(puVar14 + 4) =
               *(uint *)(puVar14 + 4) ^ (*(uint *)(param_2 + 4) ^ *(uint *)(puVar14 + 4)) & 0xffffff
          ;
          puVar14[7] = cVar6;
          cVar6 = cVar6 + ((byte)puVar14[1] >> 2);
        }
        else if (uVar1 == 0x4953) {
          param_3 = (undefined4 *)FUN_004ff010();
          puVar14 = (undefined1 *)0x0;
        }
        else if (uVar1 == 0x5645) {
          uVar15 = param_2[1] / 0xc;
          FUN_004fbaf0(param_3 + 9,uVar15);
          puVar8 = (undefined4 *)param_3[10];
          puVar16 = param_2 + 2;
          do {
            *puVar8 = *(undefined4 *)puVar16;
            puVar8[1] = *(undefined4 *)(puVar16 + 2);
            puVar8[2] = *(undefined4 *)(puVar16 + 4);
            puVar8 = puVar8 + 3;
            puVar16 = puVar16 + 6;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      else if (uVar1 == 0x6254) {
        uVar15 = (uint)((byte)puVar14[1] >> 2);
        *(undefined4 *)(puVar14 + 0x14) = *(undefined4 *)(param_2 + 2);
        if (uVar15 != 0) {
          puVar8 = (undefined4 *)(puVar14 + 0x18);
          puVar16 = param_2 + 4;
          do {
            *puVar8 = *(undefined4 *)puVar16;
            puVar16 = puVar16 + 2;
            puVar8 = puVar8 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      else if (uVar1 == 0x6353) {
        param_3[6] = *(undefined4 *)(param_2 + 2);
      }
      else if (uVar1 == 0x644b) {
        uVar1 = param_2[1];
        uVar15 = (byte)puVar14[1] + 4;
        puVar16 = param_2 + 2;
        local_2c = 0;
        if (puVar14[0x2c] != '\0') {
          *(undefined4 *)(puVar14 + 0x30) = 0;
          *(undefined4 *)(puVar14 + 0x34) = 0;
          puVar14[0x2c] = 0;
        }
        do {
          if (local_2c == 0) {
            puVar8 = (undefined4 *)(puVar14 + 8);
          }
          else {
            puVar8 = (undefined4 *)FUN_004fccf0();
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8[1] = 0xabadcafe;
              puVar8[2] = 0xabadcafe;
              *puVar8 = &PTR_FUN_006c1830;
            }
          }
          puVar8[3] = *(undefined4 *)puVar16;
          uVar9 = 0;
          if (uVar15 >> 2 != 1) {
            puVar13 = puVar8 + 4;
            do {
              *puVar13 = *(undefined4 *)(puVar16 + uVar9 * 2 + 2);
              uVar9 = uVar9 + 1;
              puVar13 = puVar13 + 1;
            } while (uVar9 < (uVar15 >> 2) - 1);
          }
          if (local_2c != 0) {
            iVar12 = *(int *)(puVar14 + 0x34);
            if (iVar12 == 0) {
              iVar11 = *(int *)(puVar14 + 0x30);
              puVar8[1] = iVar11;
              if (iVar11 != 0) {
                *(undefined4 **)(iVar11 + 8) = puVar8;
              }
              puVar8[2] = 0;
              *(undefined4 **)(puVar14 + 0x30) = puVar8;
            }
            else {
              iVar11 = *(int *)(iVar12 + 4);
              puVar8[1] = iVar11;
              if (iVar11 != 0) {
                *(undefined4 **)(iVar11 + 8) = puVar8;
              }
              puVar8[2] = iVar12;
              *(undefined4 **)(iVar12 + 4) = puVar8;
            }
            if (*(int *)(puVar14 + 0x34) == iVar12) {
              *(undefined4 **)(puVar14 + 0x34) = puVar8;
            }
          }
          puVar16 = (ushort *)((int)puVar16 + uVar15);
          local_2c = local_2c + 1;
        } while (local_2c < uVar1 / uVar15);
      }
    }
    else if (uVar1 < 0x6e54) {
      if (uVar1 == 0x6e53) {
        param_3 = (undefined4 *)FUN_00502cd0();
        param_3[1] = 0xabadcafe;
        param_3[2] = 0xabadcafe;
        *param_3 = &PTR_FUN_006c17f0;
        param_3[9] = 0;
        param_3[10] = 0;
        param_3[0xb] = 0;
        param_3[0xc] = 0;
        param_3[3] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
        param_3[8] = 0;
        param_3[4] = 0;
        if (*(char *)(param_1 + 10) != '\0') {
          FUN_00502b90();
        }
        local_20 = -1;
        cVar6 = '\0';
      }
      else if (uVar1 == 0x6853) {
        param_3[0xc] = *(undefined4 *)(param_2 + 2);
        param_3[3] = *(undefined4 *)(param_2 + 4);
        param_3[5] = *(undefined4 *)(param_2 + 6);
        FUN_00502bf0(param_3);
      }
      else if (uVar1 == 0x6954) {
        if ((param_3 != (undefined4 *)0x0) &&
           (puVar14 = (undefined1 *)FUN_00502c90(), puVar14 == (undefined1 *)0x0)) {
          iVar12 = param_3[7] + 1;
          piVar10 = _malloc(iVar12 * 0x38 + 4);
          local_4 = 0;
          if (piVar10 == (int *)0x0) {
            local_24 = (int *)0x0;
          }
          else {
            local_24 = piVar10 + 1;
            *piVar10 = iVar12;
            _eh_vector_constructor_iterator_
                      (local_24,0x38,iVar12,(_func_void_void_ptr *)&LAB_005006f0,FUN_00502450);
          }
          local_4 = 0xffffffff;
          FUN_00503df0();
          iVar11 = FUN_005006a0();
          iVar12 = param_3[8];
          local_28 = 0;
          local_18 = 0;
          puVar17 = (undefined1 *)((int)local_24 + 1);
          local_2c = iVar12;
          do {
            if (((iVar12 == 0) || ((uint)param_3[7] <= local_28)) ||
               ((iVar11 != 0 &&
                ((int)(*(int *)(iVar11 + 0x1c) + (*(int *)(iVar11 + 0x1c) >> 0x1f & 3U)) >> 2 <=
                 (int)*(char *)(local_2c + 7))))) {
              puVar17[-1] = *(undefined1 *)(iVar11 + 0x14);
              puVar14 = puVar17 + -1;
              *puVar17 = *(undefined1 *)(iVar11 + 0x18);
              puVar17[1] = 1;
              puVar17[2] = 0;
              *(uint *)(puVar17 + 3) =
                   *(uint *)(puVar17 + 3) ^ (param_3[3] ^ *(uint *)(puVar17 + 3)) & 0xffffff;
              puVar17[6] = (char)(*(uint *)(iVar11 + 0x1c) >> 2);
              iVar11 = 0;
            }
            else {
              FUN_004fcb20(puVar17 + -1);
              local_28 = local_28 + 1;
              local_2c = local_2c + 0x38;
            }
            local_18 = local_18 + 1;
            puVar17 = puVar17 + 0x38;
          } while (local_18 <= (uint)param_3[7]);
          pvVar2 = (void *)param_3[8];
          if (pvVar2 != (void *)0x0) {
            _eh_vector_destructor_iterator_(pvVar2,0x38,*(int *)((int)pvVar2 + -4),FUN_00502450);
            _free((void *)((int)pvVar2 + -4));
          }
          param_3[8] = local_24;
          param_3[7] = param_3[7] + 1;
        }
      }
      else if (uVar1 == 0x6c53) {
        param_3[3] = *(undefined4 *)(param_2 + 2);
      }
    }
    else if (uVar1 == 0x6f54) {
      puVar14[7] = (char)param_2[2];
    }
    else if ((uVar1 == 0x7454) && (param_3 != (undefined4 *)0x0)) {
      puVar14[2] = (char)param_2[2];
    }
    ppvVar5 = ExceptionList;
  }
  iVar12 = CONCAT31((int3)((uint)puVar7 >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar11 = *(int *)(param_1 + 0xc);
    iVar3 = *(int *)(iVar11 + 0x50);
    iVar12 = iVar11 + 0x44;
    if (param_3 != (undefined4 *)0x0) {
      if (iVar3 == 0) {
        iVar4 = *(int *)(iVar11 + 0x4c);
        param_3[1] = iVar4;
        if (iVar4 != 0) {
          *(undefined4 **)(iVar4 + 8) = param_3;
        }
        param_3[2] = 0;
        *(undefined4 **)(iVar11 + 0x4c) = param_3;
      }
      else {
        iVar4 = *(int *)(iVar3 + 4);
        param_3[1] = iVar4;
        if (iVar4 != 0) {
          *(undefined4 **)(iVar4 + 8) = param_3;
        }
        param_3[2] = iVar3;
        *(undefined4 **)(iVar3 + 4) = param_3;
      }
      if (*(int *)(iVar11 + 0x50) == iVar3) {
        *(undefined4 **)(iVar11 + 0x50) = param_3;
      }
      *(int *)(iVar11 + 0x48) = *(int *)(iVar11 + 0x48) + 1;
    }
  }
  if (param_3[0xc] == 0x1744b3) {
    *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x54) = param_3;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar12 >> 8),1);
}
