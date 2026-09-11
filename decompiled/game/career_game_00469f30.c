/* spd-match: far pct=0.96 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141857Z_w0_tc0 */
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


extern int iRam00000020;






int __fastcall FUN_00469f30(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  iVar1 = 0;
  if (*(int *)(param_2 + 0x60) != 0) {
    iVar1 = *(int *)(param_2 + 0x140);
    if (*(int *)(iVar1 + 0x28) == 1) {
      if (*(int *)(iVar1 + 0x34) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x34) + 8;
      }
      *(int *)(param_2 + 0x68) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(param_2 + 0x6c) = *(undefined4 *)(iVar1 + 0x18);
        return iVar1 + -8;
      }
      iVar1 = 0;
      *(int *)(param_2 + 0x6c) = iRam00000020;
    }
    else if (*(int *)(iVar1 + 0x28) == 3) {
      if (*(int *)(iVar1 + 0x34) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x34) + 8;
      }
      *(int *)(param_2 + 0x68) = iVar1;
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 0x18);
        *(int *)(param_2 + 0x6c) = iVar1;
        return iVar1;
      }
      iVar1 = iRam00000020;
      *(int *)(param_2 + 0x6c) = iRam00000020;
      return iVar1;
    }
  }
  return iVar1;
}
