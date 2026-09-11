/* spd-match: far pct=11.18 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/C2065_undecl_stubs_p1/batches/20260724T141933Z_w0_tc0 */
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

int __cdecl FUN_00533990();
int __cdecl FUN_00534110();
int __cdecl FUN_005343e0();
int __cdecl FUN_005344d0();
int __cdecl FUN_00534800();
int __cdecl FUN_00567c70();
extern int DAT_006f1dd8;
extern int DAT_006f4570;
extern int DAT_006f45e0;
extern int DAT_006f4650;
extern int DAT_006f46c0;
extern int DAT_006f4730;
extern unsigned char *DAT_00735600;
extern unsigned char *DAT_007441b8;
extern void LAB_00685d09(void);
void *ExceptionList;

extern int iRam00000000;






int * FUN_00532d40(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00685d09;
  local_c = ExceptionList;
  if (DAT_006f1dd8 == 0) {
    return (int *)0x0;
  }
  piVar9 = (int *)0x0;
  pcVar8 = "TrolleySoundObject";
  uVar5 = 0x54;
  iVar7 = -1;
  do {
    iVar7 = iVar7 * 0x21 + uVar5;
    pbVar1 = (byte *)(pcVar8 + 1);
    uVar5 = (uint)*pbVar1;
    pcVar8 = pcVar8 + 1;
  } while (*pbVar1 != 0);
  if (param_1 == iVar7) {
    ExceptionList = &local_c;
    pvVar6 = _malloc(0x310);
    local_4 = 0;
    if (pvVar6 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = (int *)FUN_00533990();
    }
    local_4 = 0xffffffff;
    (**(code **)(*piVar9 + 0x10))(&DAT_006f4570);
    (**(code **)(*piVar9 + 0x24))();
  }
  else {
    pcVar8 = "BridgeWarningSoundObject";
    iVar7 = -1;
    uVar5 = 0x42;
    do {
      iVar7 = iVar7 * 0x21 + uVar5;
      pbVar1 = (byte *)(pcVar8 + 1);
      uVar5 = (uint)*pbVar1;
      pcVar8 = pcVar8 + 1;
    } while (*pbVar1 != 0);
    if (param_1 == iVar7) {
      ExceptionList = &local_c;
      pvVar6 = _malloc(0x2a0);
      if (pvVar6 == (void *)0x0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = (int *)FUN_00534110();
      }
      (**(code **)(*piVar9 + 0x10))(&DAT_006f45e0);
      (**(code **)(*piVar9 + 0x24))();
    }
    else {
      ExceptionList = &local_c;
      iVar7 = FUN_00567c70();
      if (param_1 == iVar7) {
        if (DAT_00735600 != 0) {
          DAT_00735600 = DAT_00735600 + 1;
          if (DAT_007441b8 != (int *)0x0) {
            (**(code **)(DAT_007441b8[-0x84] + 0x40))(param_2,0);
            ExceptionList = local_c;
            return (int *)0x0;
          }
          (**(code **)(iRam00000000 + 0x40))(param_2,0);
          ExceptionList = local_c;
          return (int *)0x0;
        }
        DAT_00735600 = 1;
        pvVar6 = _malloc(0x290);
        local_4 = 1;
        if (pvVar6 == (void *)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)FUN_00534800();
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar9 + 0x10))(&DAT_006f46c0);
        (**(code **)(*piVar9 + 0x24))();
      }
      else {
        iVar7 = FUN_00567c70();
        if (param_1 == iVar7) {
          pvVar6 = _malloc(0x290);
          if (pvVar6 == (void *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_005344d0();
          }
          (**(code **)(*piVar9 + 0x10))(&DAT_006f4650);
          (**(code **)(*piVar9 + 0x24))();
        }
        iVar7 = FUN_00567c70();
        if (param_1 == iVar7) {
          pvVar6 = _malloc(0x290);
          local_4 = 2;
          if (pvVar6 == (void *)0x0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_005343e0(pvVar6);
          }
          local_4 = 0xffffffff;
          (**(code **)(*piVar9 + 0x10))(&DAT_006f4730);
          (**(code **)(*piVar9 + 0x24))();
        }
      }
    }
  }
  piVar4 = DAT_007441b8;
  if (piVar9 != (int *)0x0) {
    piVar3 = piVar9 + 0x84;
    piVar2 = DAT_007441b8 + 1;
    DAT_007441b8 = piVar3;
    *piVar2 = (int)piVar3;
    piVar9[0x85] = (int)&DAT_007441b8;
    *piVar3 = (int)piVar4;
  }
  ExceptionList = local_c;
  return piVar9;
}
