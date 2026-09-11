/* spd-match: far pct=3.69 flags=/O1 /c /nologo /TP method=m39 build_strip source=m39/3.9.26.51-member42/va_00630D8C */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
/* Pass A — minimal Ghidra → MSVC6 typedefs (not from speed.exe) */
/* /TP thiscall rewrite — bool is keyword; DAT_ as extern void* or code* */
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
typedef void            code(...);
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

int __cdecl FUN_00629350(...);
int __cdecl FUN_0062ff40(...);
int __cdecl FUN_00630150(...);
int __cdecl FUN_00630200(...);
int __cdecl FUN_006302c0(...);
int __cdecl FUN_006308f0(...);
extern int DAT_006cc7a4;
extern int DAT_006e58d8;
int unaff_EBX;
extern void LAB_0063103d(...);
extern void LAB_00631120(...);

struct ThisCallBox {
  undefined4 FUN_00630d8c(undefined4 val);
};
undefined4 ThisCallBox::FUN_00630d8c(undefined4 val)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  float fVar4;
  bool bVar5;

  int iVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  float *pfVar13;
  undefined3 uVar14;
  undefined3 extraout_var;
  float *pfVar15;
  undefined4 *puVar16;
  ushort *puVar17;
  int iVar18;
  float *pfVar19;
  ushort *unaff_EBX;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  bool in_ZF;
  int iStack0000000c;
  float in_stack_00000024;
  int in_stack_00000028;
  
  if (!in_ZF) {
    uVar12 = FUN_006308f0(in_stack_00000024,in_stack_00000028,val);
    return uVar12;
  }
  if (*(ushort **)(((int)this) + 0x3c) != unaff_EBX) {
    *(undefined4 *)(((int)this) + 0x1c) = 0xffffffff;
    *(undefined4 *)(((int)this) + 0x28) = 0xffffffff;
    *(ushort **)(((int)this) + 0x3c) = unaff_EBX;
  }
  iVar6 = in_stack_00000028 + 0x10;
  iVar2 = *(int *)(((int)this) + 0xc);
  iVar21 = *(int *)(iVar2 + 0xc);
  pfVar13 = (float *)CONCAT31((int3)((uint)iVar6 >> 8),*(char *)(iVar2 + 6));
  if (*(char *)(iVar2 + 6) == '\0') goto LAB_00631120;
  puVar7 = (ushort *)FUN_00629350(in_stack_00000024);
  puVar3 = *(ushort **)(iVar2 + 8);
  if (puVar3 == unaff_EBX) {
    if (((int)unaff_EBX <= (int)puVar7) &&
       (unaff_EBX = puVar7, (int)(uint)*(ushort *)(iVar2 + 4) <= (int)puVar7)) {
      unaff_EBX = (ushort *)(*(ushort *)(iVar2 + 4) - 1);
    }
  }
  else if ((int)(uint)*puVar3 <= (int)puVar7) {
    if (*(int *)(((int)this) + 0x1c) < 1) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(((int)this) + 0x1c) + -1;
    }
    puVar17 = puVar3 + iVar8;
    if ((int)puVar7 < (int)(uint)puVar3[iVar8]) {
      for (; ((int)unaff_EBX < iVar8 && ((int)puVar7 < (int)(uint)*puVar17)); puVar17 = puVar17 + -1
          ) {
        iVar8 = iVar8 + -1;
      }
    }
    else {
      while ((iVar8 < (int)(*(ushort *)(iVar2 + 4) - 2) &&
             (puVar17 = puVar17 + 1, (int)(uint)*puVar17 <= (int)puVar7))) {
        iVar8 = iVar8 + 1;
      }
    }
    unaff_EBX = (ushort *)(iVar8 + 1);
  }
  bVar1 = *(byte *)(iVar2 + 0x10);
  uVar22 = 0x7fffffff >> (0x1f - bVar1 & 0x1f);
  iVar8 = (int)unaff_EBX >> (bVar1 & 0x1f);
  uVar9 = uVar22 & (uint)unaff_EBX;
  uVar11 = *(uint *)(((int)this) + 0x1c);
  iVar18 = (int)uVar11 >> (bVar1 & 0x1f);
  if (*(ushort **)(((int)this) + 0x28) == unaff_EBX) {
    uVar12 = *(undefined4 *)(((int)this) + 0x30);
    *(undefined4 *)(((int)this) + 0x30) = *(undefined4 *)(((int)this) + 0x24);
    *(undefined4 *)(((int)this) + 0x24) = uVar12;
    *(uint *)(((int)this) + 0x28) = uVar11;
  }
  else {
    if (uVar11 == (int)unaff_EBX + 1U) {
      iVar10 = 0;
      in_stack_00000028 = 0;
      if (*(char *)(iVar2 + 6) != '\0') {
        do {
          puVar16 = (undefined4 *)(*(int *)(((int)this) + 0x24) + iVar10);
          puVar20 = (undefined4 *)(*(int *)(((int)this) + 0x30) + iVar10);
          *puVar20 = *puVar16;
          puVar20[1] = puVar16[1];
          puVar20[2] = puVar16[2];
          puVar20[3] = puVar16[3];
          in_stack_00000028 = in_stack_00000028 + 1;
          iVar10 = iVar10 + 0x10;
        } while (in_stack_00000028 < (int)(uint)*(byte *)(iVar2 + 6));
      }
      uVar11 = *(uint *)(((int)this) + 0x1c);
      *(uint *)(((int)this) + 0x28) = uVar11;
    }
    iVar10 = *(int *)(((int)this) + 0x18) * iVar8 + *(int *)(((int)this) + 0x14);
    if (((int)uVar11 <= (int)unaff_EBX) || (bVar5 = true, DAT_006e58d8 != '\0')) {
      bVar5 = false;
    }
    if ((((uVar11 == 0xffffffff) || (iVar8 != iVar18)) || (uVar9 == 0)) || (bVar5)) {
      iVar18 = 0;
      iStack0000000c = 0;
      if (*(char *)(iVar2 + 6) != '\0') {
        do {
          FUN_0062ff40(*(int *)(((int)this) + 0x24) + iVar18);
          iStack0000000c = iStack0000000c + 1;
          iVar18 = iVar18 + 0x10;
        } while (iStack0000000c < (int)(uint)*(byte *)(iVar2 + 6));
      }
      uVar11 = 0;
    }
    else {
      uVar11 = uVar11 & uVar22;
    }
    if ((int)uVar11 < (int)uVar9) {
      FUN_00630150(iVar10,iVar2,uVar11,uVar9,*(undefined4 *)(((int)this) + 0x24));
    }
    else if ((int)uVar9 < (int)uVar11) {
      FUN_00630200(iVar10,iVar2,uVar11,uVar9,*(undefined4 *)(((int)this) + 0x24));
    }
  }
  *(ushort **)(((int)this) + 0x1c) = unaff_EBX;
  puVar3 = *(ushort **)(iVar2 + 8);
  if (puVar3 == (ushort *)0x0) {
    if (in_stack_00000024 != (float)(int)puVar7) {
      in_stack_00000024 = in_stack_00000024 - (float)(int)puVar7;
      goto LAB_0063103d;
    }
  }
  else if (unaff_EBX == (ushort *)0x0) {
    if (in_stack_00000024 != DAT_006cc7a4) {
      in_stack_00000024 = in_stack_00000024 / (float)*puVar3;
LAB_0063103d:
      if ((int)unaff_EBX < (int)(*(ushort *)(iVar2 + 4) - 1)) {
        uVar12 = FUN_006302c0(iVar2,(int)unaff_EBX + 1U,iVar8,uVar9);
        pfVar13 = (float *)CONCAT31((int3)((uint)uVar12 >> 8),*(char *)(iVar2 + 6));
        iVar8 = 0;
        if (*(char *)(iVar2 + 6) != '\0') {
          iVar18 = 0;
          do {
            pfVar15 = (float *)((uint)*(byte *)(iVar8 + iVar21) * 0x30 + iVar6);
            pfVar13 = (float *)(*(int *)(((int)this) + 0x24) + iVar18);
            pfVar19 = (float *)(*(int *)(((int)this) + 0x30) + iVar18);
            iVar8 = iVar8 + 1;
            iVar18 = iVar18 + 0x10;
            *pfVar15 = (*pfVar19 - *pfVar13) * in_stack_00000024 + *pfVar13;
            pfVar15[1] = (pfVar19[1] - pfVar13[1]) * in_stack_00000024 + pfVar13[1];
            pfVar15[2] = (pfVar19[2] - pfVar13[2]) * in_stack_00000024 + pfVar13[2];
            pfVar15[3] = (pfVar19[3] - pfVar13[3]) * in_stack_00000024 + pfVar13[3];
          } while (iVar8 < (int)(uint)*(byte *)(iVar2 + 6));
        }
        goto LAB_00631120;
      }
    }
  }
  else {
    fVar4 = (float)puVar3[(int)unaff_EBX + -1];
    if (in_stack_00000024 != fVar4) {
      in_stack_00000024 = (in_stack_00000024 - fVar4) / ((float)puVar3[(int)unaff_EBX] - fVar4);
      goto LAB_0063103d;
    }
  }
  pfVar13 = (float *)0x0;
  if (*(char *)(iVar2 + 6) != '\0') {
    iVar8 = 0;
    do {
      puVar16 = (undefined4 *)((uint)*(byte *)((int)pfVar13 + iVar21) * 0x30 + iVar6);
      puVar20 = (undefined4 *)(*(int *)(((int)this) + 0x24) + iVar8);
      *puVar16 = *puVar20;
      puVar16[1] = puVar20[1];
      puVar16[2] = puVar20[2];
      puVar16[3] = puVar20[3];
      pfVar13 = (float *)((int)pfVar13 + 1);
      iVar8 = iVar8 + 0x10;
    } while ((int)pfVar13 < (int)(uint)*(byte *)(iVar2 + 6));
  }
LAB_00631120:
  uVar14 = (undefined3)((uint)pfVar13 >> 8);
  if ((*(char *)(iVar2 + 7) != '\0') && (iVar21 = 0, *(char *)(iVar2 + 7) != '\0')) {
    do {
      FUN_0062ff40((uint)*(byte *)(*(int *)(((int)this) + 0x34) + iVar21) * 0x30 + iVar6);
      iVar21 = iVar21 + 1;
      uVar14 = extraout_var;
    } while (iVar21 < (int)(uint)*(byte *)(iVar2 + 7));
  }
  return CONCAT31(uVar14,1);
}
