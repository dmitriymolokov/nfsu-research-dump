/* spd-match: far pct=4.55 flags=/O1 /c /nologo /TP method=thiscall_tp source=reports/m375_8/p0/buckets/p0_10/thiscall_attempt7_reverse-link-cast */
#include "ghidra_compat.h"

int __cdecl FUN_0064bcd0(...);
int __cdecl FUN_0064c690(...);
int __cdecl FUN_0064e520(...);
int __cdecl FUN_0064e540(...);
int __cdecl FUN_006510d0(...);
int __cdecl FUN_00652800(...);
extern unsigned char *DAT_00713c74;
extern int DAT_00713c7c;
extern int DAT_00713c80;
extern code *DAT_00713c9c;
extern int DAT_00713ca8;
extern int DAT_00713ee4;

struct ThisCallBox {
  undefined4 FUN_0064dd70(int param_2);
};
undefined4 ThisCallBox::FUN_0064dd70(int param_2) {
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (DAT_00713ee4 == '\0') {
    return 0xfffffff6;
  }
  if (DAT_00713c9c != (code *)0x0) {
    (*DAT_00713c9c)(((undefined4)this));
  }
  FUN_0064e520();
  piVar4 = (int *)(unsigned int)(DAT_00713c74 + -0x14);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      FUN_0064e540();
      return 0xfffffff8;
    }
    if (param_2 == piVar4[0xf]) break;
    piVar4 = (int *)(piVar4[0x14] + -0x50);
  }
  iVar6 = piVar4[7] + (int)piVar4;
  iVar7 = 0;
  if (*(short *)((int)piVar4 + 10) != 0) {
    do {
      FUN_0064bcd0(iVar6 + 4,iVar6 + 0xc);
      puVar2 = *(undefined4 **)(iVar6 + 0x38);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*puVar2;
        iVar3 = *(int *)(iVar6 + 0x34) + (int)puVar2;
        *(undefined4 *)(iVar3 + 0xc) = 1;
        FUN_0064c690(iVar3);
        puVar2 = puVar1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x3c + ((uint)*(byte *)(iVar6 + 0x27) + (uint)*(byte *)(iVar6 + 0x24)) * 4;
    } while (iVar7 < (int)(uint)*(ushort *)((int)piVar4 + 10));
  }
  if (piVar4[0x12] != 0) {
    FUN_006510d0(piVar4[0x12]);
  }
  if (-1 < piVar4[0x10]) {
    FUN_00652800(piVar4[0x10]);
  }
  if (-1 < piVar4[0x11]) {
    FUN_00652800(piVar4[0x11]);
  }
  piVar5 = piVar4 + 0x14;
  if (piVar5 == (int *)(unsigned int)(DAT_00713c74)) {
    DAT_00713c74 = (unsigned char *)(unsigned int)(*(int **)(unsigned int)(DAT_00713c74));
  }
  if ((int *)piVar4[0x15] != (int *)0x0) {
    *(int *)piVar4[0x15] = *piVar5;
  }
  if (*piVar5 != 0) {
    *(int *)(*piVar5 + 4) = piVar4[0x15];
  }
  if ((int *)(unsigned int)(DAT_00713c74) == (int *)0x0) {
    if ((undefined4 **)(unsigned int)(DAT_00713ca8) == (undefined4 **)&DAT_00713c7c) {
      DAT_00713ca8 = DAT_00713c7c;
    }
    if ((undefined4 *)(unsigned int)(DAT_00713c80) != (undefined4 *)0x0) {
      *(undefined4 *)(unsigned int)(DAT_00713c80) = (undefined4)(unsigned int)(DAT_00713c7c);
    }
    if ((undefined4 *)(unsigned int)(DAT_00713c7c) != (undefined4 *)0x0) {
      ((undefined4 *)(unsigned int)(DAT_00713c7c))[1] = (undefined4)(unsigned int)(DAT_00713c80);
    }
  }
  FUN_0064e540();
  return 0;
}
