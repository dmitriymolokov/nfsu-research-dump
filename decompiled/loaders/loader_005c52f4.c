/* spd-match: far pct=9.50 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8r/buckets/r_03/attempt1_c52f4_win32 */
#include "ghidra_compat.h"

int __stdcall WideCharToMultiByte(UINT, DWORD, LPCWSTR, int, LPSTR, int,
                                  LPCSTR, LPBOOL);
DWORD __stdcall GetFullPathNameA(LPCSTR, DWORD, LPSTR, LPSTR *);

int __cdecl FUN_005b1775(...);
int __cdecl FUN_005b1a04(...);
int __cdecl FUN_005b1f01(...);
int __cdecl FUN_005c7f41(...);
extern void LAB_005c5478(...);

struct ThisCallBox {
  uint FUN_005c52f4(WCHAR *param_2, LPSTR param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, undefined4 param_8);
};
uint ThisCallBox::FUN_005c52f4(WCHAR *param_2, LPSTR param_3, undefined4 param_4, undefined4 param_5, uint param_6, undefined4 param_7, undefined4 param_8) {
  char *pcVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  undefined4 *puVar4;
  DWORD nBufferLength;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  WCHAR local_108 [130];
  
  iVar5 = param_6;
  *(uint *)(((int)this) + 0x58) = param_6;
  if (param_3 != (LPSTR)0x0) {
    WideCharToMultiByte(0xfde9,0,param_2,-1,(LPSTR)local_108,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
    param_2 = local_108;
  }
  if (iVar5 == 0) {
    nBufferLength = GetFullPathNameA((LPCSTR)param_2,0,(LPSTR)0x0,(LPSTR *)0x0);
    param_6 = nBufferLength + 1;
    iVar5 = FUN_005b1775(param_6);
    *(int *)(((int)this) + 0x60) = iVar5;
    if (iVar5 != 0) {
      iVar5 = FUN_005b1775(param_6);
      *(int *)(((int)this) + 0x5c) = iVar5;
      if (iVar5 != 0) {
        GetFullPathNameA((LPCSTR)param_2,nBufferLength,*(LPSTR *)(((int)this) + 0x60),&param_3);
        *(undefined1 *)(nBufferLength + *(int *)(((int)this) + 0x60)) = 0;
        puVar4 = *(undefined4 **)(((int)this) + 0x60);
        puVar7 = *(undefined4 **)(((int)this) + 0x5c);
        for (uVar6 = param_6 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar7 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar6 = param_6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        if (param_3 != (LPSTR)0x0) {
          *param_3 = '\0';
        }
        uVar6 = FUN_005c7f41(*(undefined4 *)(((int)this) + 0x5c),0);
        if ((int)uVar6 < 0) {
          FUN_005b1f01(param_5,0,0x5e3,"failed to open source file: \'%s\'",param_2);
          return uVar6;
        }
        *(undefined4 *)(((int)this) + 100) = *(undefined4 *)(((int)this) + 0x44);
        *(undefined4 *)(((int)this) + 0x68) = *(undefined4 *)(((int)this) + 0x48);
        goto LAB_005c5478;
      }
    }
  }
  else {
    pWVar3 = param_2;
    do {
      WVar2 = *pWVar3;
      pWVar3 = (WCHAR *)((int)pWVar3 + 1);
    } while ((char)WVar2 != '\0');
    pcVar1 = (char *)((int)pWVar3 + (1 - ((int)param_2 + 1)));
    puVar4 = (undefined4 *)FUN_005b1775(pcVar1);
    *(undefined4 **)(((int)this) + 0x5c) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      pWVar3 = param_2;
      for (uVar6 = (uint)pcVar1 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar4 = *(undefined4 *)pWVar3;
        pWVar3 = pWVar3 + 2;
        puVar4 = puVar4 + 1;
      }
      for (uVar6 = (uint)pcVar1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar4 = (char)*pWVar3;
        pWVar3 = (WCHAR *)((int)pWVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      param_6 = (**(code **)**(undefined4 **)(((int)this) + 0x58))
                          (*(undefined4 **)(((int)this) + 0x58),param_7,*(undefined4 *)(((int)this) + 0x5c),
                           param_8,((int)this) + 100,((int)this) + 0x68);
      if ((int)param_6 < 0) {
        FUN_005b1f01(param_5,0,0x5e3,"failed to open source file: \'%s\'",param_2);
        return param_6;
      }
LAB_005c5478:
      uVar6 = FUN_005b1a04(*(undefined4 *)(((int)this) + 100),*(undefined4 *)(((int)this) + 0x68),
                           *(undefined4 *)(((int)this) + 0x5c),1,param_4,param_5);
      if ((int)uVar6 < 0) {
        return uVar6;
      }
      return 0;
    }
  }
  return 0x8007000e;
}
