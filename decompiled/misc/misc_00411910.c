/* spd-match: far pct=11.30 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T142054Z_w0_tc0 */
#include "ghidra_compat.h"

#ifndef _VA_LIST_DEFINED
typedef char *va_list;
#define _VA_LIST_DEFINED
#endif
typedef unsigned int errno_t;
typedef unsigned int (*LPTHREAD_START_ROUTINE)(void *);
typedef HANDLE *LPHANDLE;
typedef BYTE *LPBYTE;
typedef UINT MMRESULT;
typedef __int64 LONGLONG;
typedef long __time32_t;
typedef void *HLINEAPP;
typedef void __cdecl _StartAddress(void *);
typedef WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;
int __cdecl _fclose(FILE *);
int __cdecl _isalnum(int);
int __cdecl WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int, LPCSTR, BOOL *);
int __cdecl lstrcmpiA(const char *, const char *);
char *__cdecl _strncpy(char *, const char *, unsigned int);
int __cdecl __stricmp(const char *, const char *);
long __cdecl __ftol(void);
unsigned int __cdecl __control87(unsigned int, unsigned int);
void *__cdecl CreateObject(void);
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
typedef struct tagPOINT { long x, y; } POINT, tagPOINT, *LPPOINT;
typedef struct tagPAINTSTRUCT { unsigned char _[64]; } PAINTSTRUCT, tagPAINTSTRUCT;
typedef struct varstring_tag { unsigned char _[32]; } varstring_tag;
typedef struct _AFX_EDIT_STATE { unsigned char _[64]; } _AFX_EDIT_STATE;
unsigned __stdcall __beginthreadex(void *, unsigned, unsigned (__stdcall *)(void *), void *, unsigned, unsigned *);
undefined4 *puRam00000000;
undefined4 *puRam00000004;
int iRam00000000;
int *piRam00000004;

int __cdecl FUN_00594c60();
int __cdecl FUN_00594d40();
extern int DAT_0070108f;

extern char s_tracks_racer_bin_006cbfb0[];






undefined4 FUN_00411910(undefined1 param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *_Memory;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  _Memory = _malloc(0x400);
  uVar1 = DAT_0070108f;
  uVar4 = 0;
  if (_Memory == (undefined1 *)0x0) {
    return 0;
  }
  DAT_0070108f = 0;
  *_Memory = param_1;
  _Memory[1] = 0x3a;
  _Memory[2] = 0x5c;
  _Memory[3] = 0;
  pcVar2 = _Memory + -1;
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  *(undefined4 *)(pcVar5 + 1) = (*(unsigned int *)((unsigned char *)&(s_tracks_racer_bin_006cbfb0) + 0));
  *(undefined4 *)(pcVar5 + 5) = (*(unsigned int *)((unsigned char *)&(s_tracks_racer_bin_006cbfb0) + 4));
  *(undefined4 *)(pcVar5 + 9) = (*(unsigned int *)((unsigned char *)&(s_tracks_racer_bin_006cbfb0) + 8));
  *(undefined4 *)(pcVar5 + 0xd) = (*(unsigned int *)((unsigned char *)&(s_tracks_racer_bin_006cbfb0) + 12));
  pcVar5[0x11] = s_tracks_racer_bin_006cbfb0[0x10];
  iVar3 = FUN_00594c60(_Memory,0,1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 4);
    FUN_00594d40();
    if (iVar3 != -1) {
      uVar4 = 1;
    }
  }
  DAT_0070108f = uVar1;
  _free(_Memory);
  return uVar4;
}
