/* spd-match: far pct=7.41 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.51-unbal-b/va_004E1D70 */
#include "ghidra_compat.h"

int __cdecl FUN_004ef050();
int __cdecl FUN_004f3f90();
int __cdecl FUN_004f68c0();
int __cdecl FUN_004fd1e0();
int __cdecl FUN_004ffb70();
extern int DAT_006c3664;
extern unsigned char *DAT_0073578c;
extern int DAT_00746104;
extern void LAB_004e1e33(void);
extern void LAB_004e1e4a(void);
extern void LAB_004e1e5d(void);
extern void LAB_004e1e71(void);
extern void LAB_004e1f26(void);
extern void LAB_004e1f50(void);
void __fastcall FUN_004e1d70(undefined4 val, int param_1, undefined4 param_2, byte *param_3)

{
  byte *pbVar1;
  byte bVar2;

  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int local_28;
  byte local_20;
  byte local_1f [31];
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = val;
  local_28 = 0;
  do {
    iVar3 = local_28 + 1;
    FUN_004f68c0(0x20,&DAT_006c3664,param_2,iVar3);
    iVar8 = -1;
    pbVar6 = &local_20;
    bVar2 = local_20;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < 0x7b)) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar1 = pbVar6 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      pbVar6 = pbVar6 + 1;
      bVar2 = *pbVar1;
    }
    iVar7 = DAT_0073578c;
    if (*(int *)(param_1 + 0x10) == 0) {
LAB_004e1e4a:
      iVar4 = 0;
      if ((iVar7 == 0) || (iVar5 = FUN_004ef050(iVar8), iVar4 = DAT_0073578c, iVar5 == 0))
      goto LAB_004e1e71;
LAB_004e1e5d:
      iVar4 = DAT_0073578c;
      if (*(int *)(iVar5 + 0x18) != 2) goto LAB_004e1e71;
    }
    else {
      iVar4 = FUN_004f3f90(&DAT_00746104);
      iVar7 = DAT_0073578c;
      if ((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != 0)) {
LAB_004e1e33:
        if ((iVar4 == 0) || (iVar5 = FUN_004ffb70(), iVar7 = DAT_0073578c, iVar5 == 0))
        goto LAB_004e1e4a;
        goto LAB_004e1e5d;
      }
      iVar4 = DAT_0073578c;
      if (DAT_0073578c != 0) {
        iVar5 = *(int *)(DAT_0073578c + 8);
        if ((iVar5 == 0) ||
           ((iVar4 = FUN_004fd1e0(iVar5 + 0xdc), iVar4 == 0 &&
            (iVar4 = FUN_004fd1e0(iVar5 + 0xec), iVar4 == 0)))) goto LAB_004e1e4a;
        goto LAB_004e1e33;
      }
LAB_004e1e71:
      iVar5 = 0;
    }
    *(int *)(param_1 + local_28 * 4) = iVar5;
    local_28 = iVar3;
  } while (iVar3 < 3);
  iVar8 = -1;
  if (param_3 != (byte *)0x0) {
    bVar2 = *param_3;
    while (bVar2 != 0) {
      if (('`' < (char)bVar2) && ((char)bVar2 < 0x7b)) {
        bVar2 = bVar2 - 0x20;
      }
      pbVar6 = param_3 + 1;
      iVar8 = iVar8 * 0x21 + (uint)bVar2;
      param_3 = param_3 + 1;
      bVar2 = *pbVar6;
    }
  }
  if (*(int *)(param_1 + 0x10) == 0) {
LAB_004e1f26:
    if ((iVar4 == 0) || (iVar3 = FUN_004ef050(iVar8), iVar3 == 0)) goto LAB_004e1f50;
  }
  else {
    iVar3 = FUN_004f3f90(&DAT_00746104);
    iVar4 = DAT_0073578c;
    if ((iVar3 == 0) || (iVar3 = *(int *)(iVar3 + 0x18), iVar3 == 0)) {
      if (DAT_0073578c == 0) goto LAB_004e1f50;
      iVar7 = *(int *)(DAT_0073578c + 8);
      if ((iVar7 == 0) ||
         ((iVar3 = FUN_004fd1e0(iVar7 + 0xdc), iVar3 == 0 &&
          (iVar3 = FUN_004fd1e0(iVar7 + 0xec), iVar3 == 0)))) goto LAB_004e1f26;
    }
    if ((iVar3 == 0) || (iVar3 = FUN_004ffb70(), iVar4 = DAT_0073578c, iVar3 == 0))
    goto LAB_004e1f26;
  }
  if (*(int *)(iVar3 + 0x18) == 1) {
    *(int *)(param_1 + 0xc) = iVar3;
    return;
  }
LAB_004e1f50:
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}
