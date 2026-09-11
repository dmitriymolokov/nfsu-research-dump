/* spd-match: far pct=3.72 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_cheap */
#include "ghidra_compat.h"

int __cdecl FUN_00549460();
int __cdecl FUN_00663310();
int __cdecl FUN_00663330();
extern void LAB_00663300(void);
extern void LAB_006633e6(void);

undefined4 * FUN_00663390(byte *param_1,DWORD param_2)

{
  byte bVar1;
  undefined4 *lpParameter;
  HANDLE hObject;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if ((int)param_2 < 0) {
    return (undefined4 *)0x0;
  }
  lpParameter = (undefined4 *)FUN_00549460(0x5c);
  puVar5 = lpParameter;
  for (iVar2 = 0x17; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  lpParameter[2] = &LAB_00663300;
  lpParameter[3] = FUN_00663310;
  bVar1 = *param_1;
  pbVar3 = param_1;
  if (bVar1 == 0) {
LAB_006633e6:
    if (*pbVar3 != 0) {
      puVar5 = lpParameter + 4;
      for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *(undefined4 *)param_1;
        param_1 = param_1 + 4;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)((int)lpParameter + 0x4f) = 0;
      hObject = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00663330,lpParameter,0,&param_2);
      if (hObject != (HANDLE)0x0) {
        CloseHandle(hObject);
      }
      return lpParameter;
    }
  }
  else {
    do {
      if ((bVar1 != 0x2e) && (((char)bVar1 < '0' || ('9' < (char)bVar1)))) goto LAB_006633e6;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
  }
  iVar2 = 0;
  while( true ) {
    uVar4 = 0;
    bVar1 = *param_1;
    while (('/' < (char)bVar1 && ((char)bVar1 < ':'))) {
      param_1 = param_1 + 1;
      uVar4 = (bVar1 & 0xf) + uVar4 * 10;
      bVar1 = *param_1;
    }
    if (((int)(char)*param_1 != ((2 < iVar2) - 1 & 0x2e)) || (0xff < (int)uVar4)) break;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + 1;
    lpParameter[1] = lpParameter[1] << 8 | uVar4;
    *lpParameter = 1;
    if (3 < iVar2) {
      return lpParameter;
    }
  }
  *lpParameter = 0xfffffffe;
  lpParameter[1] = 0;
  return lpParameter;
}
