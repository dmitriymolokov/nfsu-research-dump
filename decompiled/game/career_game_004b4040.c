/* spd-match: far pct=4.52 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_00417600();
int __cdecl FUN_004322a0();
int __cdecl FUN_004b26f0();
int __cdecl FUN_004b3a20();
int __cdecl FUN_004b3c60();
int __cdecl FUN_004b4380();
int __cdecl FUN_004b4590();
int __cdecl FUN_00565da0();
int __cdecl FUN_0057f2b0();
int __cdecl FUN_0057f700();
int __cdecl FUN_0057f970();
int __cdecl FUN_005809c0();
extern int DAT_0078a2f0;
extern int DAT_0078a33c;
extern int DAT_0078a347;
extern int DAT_0078a3fc;
extern unsigned char *DAT_0078a418;
extern void LAB_004b4183(void);

void FUN_004b4040(int param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  uint uVar8;
  undefined3 uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  undefined4 uVar14;
  int *piVar15;
  int local_ee4;
  int *local_ee0;
  int local_ed8;
  int local_ed0 [4];
  byte local_ec0;
  byte local_ebf [63];
  int local_e80 [273];
  int local_a3c;
  int local_a38;
  
  if (DAT_0078a347 == '\0') {
    FUN_004b3a20(local_ed0);
    iVar5 = DAT_0078a418;
    piVar7 = (int *)(DAT_0078a418 + 0x10);
    bVar4 = false;
    if (0 < param_1) {
      local_ee0 = local_ed0;
      local_ee4 = 0;
      iVar11 = 2;
      do {
        FUN_00417600();
        FUN_00565da0("DUMMY_SKIN%d",iVar11);
        local_a3c = -1;
        pbVar12 = &local_ec0;
        bVar2 = local_ec0;
        while (bVar2 != 0) {
          local_a3c = local_a3c * 0x21 + (uint)bVar2;
          pbVar1 = pbVar12 + 1;
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar1;
        }
        FUN_00565da0("DUMMY_WHEEL%d",iVar11);
        uVar8 = CONCAT31((int3)((uint)extraout_ECX >> 8),local_ec0);
        local_a38 = -1;
        pbVar12 = &local_ec0;
        bVar2 = local_ec0;
        while (uVar9 = (undefined3)(uVar8 >> 8), bVar2 != 0) {
          uVar10 = uVar8 & 0xff;
          bVar2 = pbVar12[1];
          uVar8 = CONCAT31(uVar9,bVar2);
          local_a38 = local_a38 * 0x21 + uVar10;
          pbVar12 = pbVar12 + 1;
        }
        if ((param_2 == 0) || (DAT_0078a33c == '\0')) {
          uVar14 = CONCAT31(uVar9,!bVar4);
          piVar15 = piVar7;
LAB_004b4183:
          FUN_004b3c60(local_e80,iVar11,uVar14,piVar15);
        }
        else {
          if ((((iVar11 + -2 < 0) || (*(int *)(param_2 + 0x59c8) <= iVar11 + -2)) ||
              (iVar13 = local_ee4 + 0x5974 + param_2, iVar13 == 0)) || (*(int *)(iVar13 + 0xc) == 0)
             ) {
            uVar14 = 1;
            piVar15 = (int *)0x0;
            goto LAB_004b4183;
          }
          FUN_004b26f0(local_e80);
        }
        if ((bVar4) || (bVar4 = false, local_e80[0] == *piVar7)) {
          bVar4 = true;
        }
        if ((DAT_0078a33c == '\0') || (param_2 == 0)) {
          local_ed8 = FUN_004b4590();
          iVar13 = *local_ee0;
          cVar3 = '\x01';
        }
        else {
          if ((iVar11 + -2 < 0) || (*(int *)(param_2 + 0x59c8) <= iVar11 + -2)) {
            iVar13 = 0;
          }
          else {
            iVar13 = local_ee4 + 0x5974 + param_2;
          }
          local_ed8 = (int)*(short *)(iVar13 + 0x10 + DAT_0078a3fc * 2);
          if ((local_ed8 < 0) || (9 < local_ed8)) {
            local_ed8 = -1;
          }
          cVar3 = *(char *)(iVar13 + 0x18);
          if ((cVar3 < '\0') || ('\x02' < cVar3)) {
            cVar3 = '\x01';
          }
          if (*(short *)(iVar13 + 0x16) == -1) {
            if (*(char *)(iVar5 + 0x434) == -1) {
              FUN_0057f2b0(1);
            }
            FUN_0057f700(local_e80,piVar7,*(undefined4 *)(iVar5 + 0x28),
                         (int)*(char *)(iVar5 + 0x434),1,0x40a00000);
          }
          else {
            FUN_0057f970((float)(int)*(short *)(iVar13 + 0x16),*(undefined4 *)(iVar5 + 0x28),1,
                         0x40a00000);
          }
        }
        if ((param_2 != 0) && (iVar6 = *(int *)(param_2 + 0x589c), iVar6 < 4)) {
          *(int *)(param_2 + 0x589c) = iVar6 + 1;
          if ((iVar6 < 0) || (iVar6 + 1 <= iVar6)) {
            iVar6 = 0;
          }
          else {
            iVar6 = param_2 + 0x586c + iVar6 * 0xc;
          }
          *(int *)(iVar6 + 4) = iVar11 + 0x62;
          *(undefined4 *)(iVar6 + 8) = 1;
        }
        FUN_005809c0(iVar11 + 0x62,2,local_e80,iVar13,local_ed8,(int)cVar3,iVar11 + -1);
        FUN_004322a0(&DAT_0078a2f0);
        local_ee4 = local_ee4 + 0x1c;
        local_ee0 = local_ee0 + 1;
        iVar13 = iVar11 + -1;
        iVar11 = iVar11 + 1;
      } while (iVar13 < param_1);
    }
    if (DAT_0078a33c == '\0') {
      FUN_004b4380();
    }
  }
  return;
}
