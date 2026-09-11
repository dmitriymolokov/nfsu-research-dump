/* spd-match: far pct=16.67 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141857Z_w0_tc0 */
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

int __cdecl FUN_00567c70();

extern char s_CUSTOM1_006c5294[];
extern char s_CUSTOM3_006c528c[];
extern char s_CUSTOM4_006c5284[];






undefined4 FUN_004e27e0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = -1;
  pcVar5 = "CUSTOM1";
  bVar2 = s_CUSTOM1_006c5294[0];
  while (bVar2 != 0) {
    iVar4 = iVar4 * 0x21 + (uint)bVar2;
    pbVar1 = (byte *)(pcVar5 + 1);
    pcVar5 = pcVar5 + 1;
    bVar2 = *pbVar1;
  }
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 != iVar4) {
    iVar4 = -1;
    pcVar5 = "CUSTOM3";
    bVar2 = s_CUSTOM3_006c528c[0];
    while (bVar2 != 0) {
      iVar4 = iVar4 * 0x21 + (uint)bVar2;
      pbVar1 = (byte *)(pcVar5 + 1);
      pcVar5 = pcVar5 + 1;
      bVar2 = *pbVar1;
    }
    if (iVar3 != iVar4) {
      iVar4 = -1;
      pcVar5 = "CUSTOM4";
      bVar2 = s_CUSTOM4_006c5284[0];
      while (bVar2 != 0) {
        iVar4 = iVar4 * 0x21 + (uint)bVar2;
        pbVar1 = (byte *)(pcVar5 + 1);
        pcVar5 = pcVar5 + 1;
        bVar2 = *pbVar1;
      }
      if (((((iVar3 != iVar4) && (iVar4 = FUN_00567c70(), iVar3 != iVar4)) &&
           (iVar4 = FUN_00567c70(), iVar3 != iVar4)) &&
          ((iVar4 = FUN_00567c70(), iVar3 != iVar4 && (iVar4 = FUN_00567c70(), iVar3 != iVar4)))) &&
         ((iVar4 = FUN_00567c70(), iVar3 != iVar4 &&
          ((iVar4 = FUN_00567c70(), iVar3 != iVar4 && (iVar4 = FUN_00567c70(), iVar3 != iVar4))))))
      {
        return 0;
      }
    }
  }
  return 1;
}
