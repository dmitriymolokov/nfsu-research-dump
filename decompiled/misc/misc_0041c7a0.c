/* spd-match: far pct=11.60 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_inventory */
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

int __cdecl FUN_00404ab0();
int __cdecl FUN_00405570();
int __cdecl FUN_0041c9e0();
int __cdecl FUN_0041e200();
int __cdecl FUN_0067101f();
int __cdecl FUN_00671541();
extern int DAT_006cb14c;
extern int DAT_006cb150;
extern int DAT_006cb152;
extern int DAT_006cc464;
extern int DAT_00736230;
extern int DAT_0078daa8;
extern unsigned char *PTR_DAT_00700ec4;
extern char stack0xfffffef7;

void FUN_0041c7a0(void)

{
  undefined **ppuVar1;
  int iVar2;
  char cVar3;
  FILE *_File;
  char *pcVar4;
  size_t sVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  char local_108 [260];
  
  if (DAT_00736230 != '\0') {
    FUN_0041e200();
    _File = (FILE *)FUN_00671541(&DAT_00736230);
    if (_File != (FILE *)0x0) {
      if (PTR_DAT_00700ec4 != (undefined *)0x0) {
        ppuVar6 = &PTR_DAT_00700ec4;
        do {
          pcVar4 = ppuVar6[-1];
          iVar2 = -(int)pcVar4;
          do {
            cVar3 = *pcVar4;
            pcVar4[(int)(local_108 + iVar2)] = cVar3;
            pcVar4 = pcVar4 + 1;
          } while (cVar3 != '\0');
          puVar9 = (undefined2 *)&stack0xfffffef7;
          do {
            puVar8 = puVar9;
            puVar9 = (undefined2 *)((int)puVar8 + 1);
          } while (*(char *)((int)puVar8 + 1) != '\0');
          *(undefined2 *)((int)puVar8 + 1) = DAT_006cb150;
          pcVar4 = local_108;
          *(undefined1 *)((int)puVar8 + 3) = DAT_006cb152;
          do {
            cVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar3 != '\0');
          sVar5 = _fwrite(local_108,1,(int)pcVar4 - (int)(local_108 + 1),_File);
          if (sVar5 != (int)pcVar4 - (int)(local_108 + 1)) {
            FUN_00404ab0("FWriteSafe failed.  Only wrote %d of %d bytes",sVar5);
          }
          puVar7 = ppuVar6[1];
          if (puVar7 == (undefined *)0x0) {
            __itoa(*(int *)*ppuVar6,local_108,10);
          }
          else if (puVar7 == (undefined *)0x1) {
            FUN_0067101f(local_108,&DAT_006cc464,(double)*(float *)*ppuVar6);
          }
          else if (puVar7 == (undefined *)0x2) {
            pcVar4 = *ppuVar6;
            iVar2 = -(int)pcVar4;
            do {
              cVar3 = *pcVar4;
              pcVar4[(int)(local_108 + iVar2)] = cVar3;
              pcVar4 = pcVar4 + 1;
            } while (cVar3 != '\0');
          }
          puVar9 = (undefined2 *)&stack0xfffffef7;
          do {
            pcVar4 = (char *)((int)puVar9 + 1);
            puVar9 = (undefined2 *)((int)puVar9 + 1);
          } while (*pcVar4 != '\0');
          pcVar4 = local_108;
          *puVar9 = DAT_006cb14c;
          do {
            cVar3 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar3 != '\0');
          sVar5 = _fwrite(local_108,1,(int)pcVar4 - (int)(local_108 + 1),_File);
          if (sVar5 != (int)pcVar4 - (int)(local_108 + 1)) {
            FUN_00404ab0("FWriteSafe failed.  Only wrote %d of %d bytes",sVar5);
          }
          ppuVar1 = ppuVar6 + 3;
          ppuVar6 = ppuVar6 + 3;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      pcVar4 = local_108;
      local_108[0] = '\n';
      local_108[1] = '\0';
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      sVar5 = _fwrite(local_108,1,(int)pcVar4 - (int)(local_108 + 1),_File);
      if (sVar5 != (int)pcVar4 - (int)(local_108 + 1)) {
        FUN_00404ab0("FWriteSafe failed.  Only wrote %d of %d bytes",sVar5);
      }
      pcVar4 = local_108;
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      sVar5 = _fwrite(local_108,1,(int)pcVar4 - (int)(local_108 + 1),_File);
      if (sVar5 != (int)pcVar4 - (int)(local_108 + 1)) {
        FUN_00404ab0("FWriteSafe failed.  Only wrote %d of %d bytes",sVar5);
      }
      puVar7 = &DAT_0078daa8;
      do {
        if ((*(int *)(puVar7 + 0x130) != -1) && (cVar3 = FUN_00405570(), cVar3 == '\0')) {
          FUN_0041c9e0(_File);
        }
        puVar7 = puVar7 + 0x270;
      } while ((int)puVar7 < 0x78e948);
      _fclose(_File);
    }
  }
  return;
}
