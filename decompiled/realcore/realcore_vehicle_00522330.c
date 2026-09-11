/* Decompiled from Speed.exe @ 00522330 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_00522330(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_0072cfd0;
  if (DAT_006f1dd8 == 1) {
    iVar3 = DAT_006f870c * 0x40 + 0xe7c + DAT_0072cfd0;
    DAT_006f8710 = 0;
    if ((*(char *)(DAT_006f870c * 0x40 + 0xe7c + DAT_0072cfd0) == 'N') || (iVar3 == 0)) {
      uVar2 = (&DAT_0072cfd8)[DAT_006f8708];
      iVar3 = 0;
    }
    else {
      uVar2 = (&DAT_0072cfd8)[DAT_006f8708];
      *(undefined4 *)(DAT_0072cfd0 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x28) = 0;
    }
    uVar2 = FUN_0064e160(uVar2,iVar3,0,&LAB_00522140);
    DAT_006f8710 = 1;
    *(undefined4 *)(DAT_0072cfd0 + 0x48 + DAT_006f8708 * 4) = uVar2;
  }
  return;
}

