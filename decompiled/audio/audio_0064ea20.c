/* Decompiled from Speed.exe @ 0064ea20 */
/* Module: Audio */
/* Ghidra DecompileVAs */


int FUN_0064ea20(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = DAT_00713c94;
  if ((DAT_00713c94 != (int *)0x0) &&
     (DAT_00713c94 = (int *)*DAT_00713c94, DAT_00713c94 != (int *)0x0)) {
    DAT_00713c94[1] = 0;
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = (int)DAT_00713c90;
    piVar5[1] = 0;
    if (DAT_00713c90 != (int *)0x0) {
      DAT_00713c90[1] = (int)piVar5;
    }
    DAT_00713c90 = piVar5;
LAB_0064eaad:
    iVar2 = (piVar5[2] & 0x3fffffffU) + 0x80;
    piVar5[2] = iVar2;
    iVar6 = DAT_00713eec;
    piVar5[3] = param_1;
    piVar5[4] = iVar6;
    return iVar2;
  }
  uVar3 = 0xffffffff;
  iVar6 = param_1 + -1;
  piVar1 = DAT_00713c90;
  if (DAT_00713c90 != (int *)0x0) {
    do {
      iVar2 = piVar1[3];
      if (iVar2 < iVar6) {
        uVar4 = piVar1[4];
        iVar6 = iVar2;
LAB_0064ea8c:
        uVar3 = uVar4;
        piVar5 = piVar1;
      }
      else if ((iVar2 == iVar6) && (uVar4 = piVar1[4], uVar4 < uVar3)) goto LAB_0064ea8c;
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      FUN_006504e0(piVar5[6]);
      goto LAB_0064eaad;
    }
  }
  return -9;
}

