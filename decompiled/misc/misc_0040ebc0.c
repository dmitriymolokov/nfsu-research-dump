/* spd-match: far pct=8.75 flags=/O2 /c /nologo /TC method=m39 source=m39/4.1.5q/va_0040EBC0 */
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

extern int DAT_0071abd0;

extern char s_WorldViewProj_00701860[];

void FUN_0040ebc0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  
  puVar2 = &DAT_0071abd0;
  do {
    (**(code **)(*(int *)*puVar2 + 0x114))((int *)*puVar2);
    pcVar3 = s_WorldViewProj_00701860;
    iVar4 = 1;
    do {
      uVar1 = (**(code **)(*(int *)*puVar2 + 0x24))((int *)*puVar2,0,pcVar3);
      puVar2[iVar4] = uVar1;
      pcVar3 = pcVar3 + 0x40;
      iVar4 = iVar4 + 1;
    } while (pcVar3 < (char *)0x702420);
    puVar2 = puVar2 + 0x38;
  } while ((int)puVar2 < 0x71b1f0);
  return;
}
