/* Decompiled from Speed.exe @ 0058efb0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0058efb0(short *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined4 *unaff_ESI;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((&DAT_00737880)[unaff_ESI[0x31] * 0x3c] == '\0') {
    *param_1 = -0x8000;
    return 1;
  }
  iVar4 = FUN_005910f0(unaff_ESI);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = *unaff_ESI;
  uVar2 = unaff_ESI[1];
  FUN_005919d0(local_20,(float)(DAT_0073ad34 - unaff_ESI[4]) * _DAT_006b5ac8 * _DAT_006cca38);
  FUN_005919d0(local_1c,extraout_EDX);
  *unaff_ESI = uVar1;
  unaff_ESI[1] = uVar2;
  unaff_ESI[4] = DAT_0073ad34;
  sVar3 = FUN_00564db0(uVar2,uVar1);
  *param_1 = sVar3 + -0x8000;
  return 1;
}

