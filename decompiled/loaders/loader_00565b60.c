/* spd-match: far pct=5.68 flags=/O1 method=pass_a_tc source=m375_sync_decomp:m375_c2069 */
#include "ghidra_compat.h"

int __cdecl FUN_00565310();
int __cdecl FUN_00565550();
int __cdecl FUN_00565850();
extern int DAT_006f2278;
extern int DAT_007301d4;
extern int DAT_007301f8;
extern int DAT_007349a0;
extern int DAT_007349a4;
extern int DAT_007349b0;
extern int _DAT_007349a8;
extern int _DAT_007349ac;

int * FUN_00565b60(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  undefined4 *puVar11;
  bool bVar12;
  
  uVar6 = param_4;
  _DAT_007349a8 = param_2;
  _DAT_007349ac = param_3;
  if (DAT_007349b0 == 0) {
    DAT_007301d4 = &DAT_007301f8;
    FUN_00565310(0,"Main Pool");
    DAT_007349b0 = 1;
  }
  if (((DAT_007349a0 != 0) && (DAT_007349a4 % DAT_007349a0 == 0)) &&
     ((&DAT_007301d4)[uVar6 & 7] != (undefined *)0x0)) {
    FUN_00565850((&DAT_007301d4)[uVar6 & 7],1);
  }
  uVar9 = (int)uVar6 >> 6 & 0x3fc;
  if (uVar9 == 0) {
    uVar9 = 0x40;
  }
  iVar8 = (int)(&DAT_007301d4)[uVar6 & 7];
  iVar4 = FUN_00565550(iVar8,param_1 + 0x18,uVar9,0x18,uVar6 & 8,uVar6 & 0x10,&param_4);
  if (iVar4 == 0) {
    pcVar3 = (code *)swi(3);
    piVar10 = (*(int * (*)())pcVar3)();
    return piVar10;
  }
  iVar7 = 0;
  if ((uVar6 & 8) != 0) {
    iVar7 = (int)(uVar9 - (uVar9 - 1 & iVar4 + 0x18U)) % (int)uVar9;
  }
  puVar11 = *(undefined4 **)(iVar8 + 0x10);
  piVar10 = (int *)(iVar4 + iVar7);
  *puVar11 = piVar10;
  *(int **)(iVar8 + 0x10) = piVar10;
  *(char *)((int)piVar10 + 9) = (char)iVar7;
  piVar10[1] = (int)puVar11;
  *piVar10 = iVar8 + 0xc;
  *(byte *)(piVar10 + 2) = (byte)uVar6 & 7;
  *(undefined2 *)((int)piVar10 + 10) = 0x2222;
  piVar10[3] = param_4;
  *(undefined1 *)(piVar10 + 5) = (undefined1)param_3;
  pcVar5 = (char *)((int)piVar10 + 0x15);
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  *(undefined1 *)((int)piVar10 + 0x17) = 0;
  if (param_2 != 0) {
    iVar8 = 2;
    param_2 = param_2 - (int)pcVar5;
    do {
      cVar1 = pcVar5[param_2];
      iVar8 = iVar8 + -1;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
    } while (iVar8 != 0);
  }
  bVar2 = *(byte *)((int)piVar10 + 9);
  puVar11 = (undefined4 *)((int)piVar10 - (uint)bVar2);
  for (uVar6 = (uint)(bVar2 >> 2); uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar11 = 0xdddddddd;
    puVar11 = puVar11 + 1;
  }
  for (uVar6 = bVar2 & 3; iVar8 = DAT_007349a4, uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar11 = 0xdd;
    puVar11 = (undefined4 *)((int)puVar11 + 1);
  }
  bVar12 = DAT_007349a4 == DAT_006f2278;
  piVar10[4] = DAT_007349a4;
  if (bVar12) {
    pcVar3 = (code *)swi(3);
    piVar10 = (*(int * (*)())pcVar3)();
    return piVar10;
  }
  DAT_007349a4 = iVar8 + 1;
  return piVar10 + 6;
}
