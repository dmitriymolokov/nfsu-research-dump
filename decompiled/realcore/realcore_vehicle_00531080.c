/* spd-match: far pct=12.50 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141933Z_w0_tc0 */
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

int __cdecl FUN_00530740();
int __cdecl FUN_00530f20();
int __cdecl FUN_00584310();
extern int DAT_006f4f28;
extern int _DAT_00706fd4;
extern unsigned char *PTR_s_CSISSOUND_006f8714;
int unaff_EDI;

extern char s_SND_WORLDScrape_006be774[];
extern char s_SND_SmokeableScrape_006be784[];








void FUN_00531080(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  
  FUN_00530f20();
  (**(code **)(*unaff_EDI + 0x34))();
  unaff_EDI[0x91] = DAT_006f4f28;
  (**(code **)(*unaff_EDI + 0x40))();
  iVar1 = unaff_EDI[0x91];
  FUN_00530740();
  iVar2 = unaff_EDI[0x13];
  FUN_00584310((float)iVar2);
  iVar3 = unaff_EDI[0xcf];
  if (iVar3 == 0) {
    PTR_s_CSISSOUND_006f8714 = s_SND_WORLDScrape_006be774;
  }
  else {
    if (iVar3 == 1) {
      return;
    }
    if (iVar3 == 2) {
      PTR_s_CSISSOUND_006f8714 = s_SND_SmokeableScrape_006be784;
    }
  }
  _DAT_00706fd4 = unaff_EDI[0xd2];
  unaff_EDI[0xc2] = iVar1;
  unaff_EDI[0xc4] = iVar2;
  unaff_EDI[0xc6] = 0x1000;
  unaff_EDI[200] = unaff_EDI[0x93];
  (**(code **)(*unaff_EDI + 0x68))();
  *(undefined1 *)(unaff_EDI + 0xd4) = 1;
  *(undefined1 *)(unaff_EDI + 0xbd) = 0;
  *(undefined1 *)((int)unaff_EDI + 0x351) = 0;
  return;
}
