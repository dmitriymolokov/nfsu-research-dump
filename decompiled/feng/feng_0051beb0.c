/* spd-match: far pct=10.04 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141906Z_w0_tc0 */
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

int __cdecl FUN_0051be80();
int __cdecl FUN_00567c70();
extern int DAT_00760158;
int unaff_ESI;

extern char s_ALPINE_006bf8a8[];
extern char s_AUDIOBAHN_006bf918[];
extern char s_KENWOOD_006bfc38[];






bool FUN_0051beb0(void)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  int unaff_ESI;
  
  iVar3 = -1;
  pcVar4 = "ALPINE";
  bVar2 = s_ALPINE_006bf8a8[0];
  while (bVar2 != 0) {
    iVar3 = iVar3 * 0x21 + (uint)bVar2;
    pbVar1 = (byte *)(pcVar4 + 1);
    pcVar4 = pcVar4 + 1;
    bVar2 = *pbVar1;
  }
  if (unaff_ESI != iVar3) {
    iVar3 = -1;
    pcVar4 = "AUDIOBAHN";
    bVar2 = s_AUDIOBAHN_006bf918[0];
    while (bVar2 != 0) {
      iVar3 = iVar3 * 0x21 + (uint)bVar2;
      pbVar1 = (byte *)(pcVar4 + 1);
      pcVar4 = pcVar4 + 1;
      bVar2 = *pbVar1;
    }
    if (unaff_ESI != iVar3) {
      iVar3 = -1;
      pcVar4 = "KENWOOD";
      bVar2 = s_KENWOOD_006bfc38[0];
      while (bVar2 != 0) {
        iVar3 = iVar3 * 0x21 + (uint)bVar2;
        pbVar1 = (byte *)(pcVar4 + 1);
        pcVar4 = pcVar4 + 1;
        bVar2 = *pbVar1;
      }
      if ((((((unaff_ESI != iVar3) && (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)) &&
            (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)) &&
           ((iVar3 = FUN_00567c70(), unaff_ESI != iVar3 &&
            (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)))) &&
          ((iVar3 = FUN_00567c70(), unaff_ESI != iVar3 &&
           ((iVar3 = FUN_00567c70(), unaff_ESI != iVar3 &&
            (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)))))) &&
         (iVar3 = FUN_00567c70(), unaff_ESI != iVar3)) {
        iVar3 = FUN_0051be80();
        if (iVar3 != -1) {
          return ((&DAT_00760158)[iVar3 * 4] & 3) != 0;
        }
        return false;
      }
    }
  }
  return true;
}
