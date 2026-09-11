/* Decompiled from Speed.exe @ 0056cae0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056cae0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[0x11c];
  iVar3 = param_1[0x11f];
  if (iVar2 != param_1[0x218]) {
    param_1[0x218] = iVar2;
    param_1[0x219] = -1;
  }
  if (iVar2 != param_1[0x21c]) {
    param_1[0x21c] = iVar2;
    param_1[0x21d] = -1;
  }
  if (iVar3 != param_1[0x22c]) {
    param_1[0x22c] = iVar3;
    param_1[0x22d] = -1;
  }
  if (iVar3 != param_1[0x230]) {
    param_1[0x230] = iVar3;
    param_1[0x231] = -1;
  }
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + 0x30);
  }
  iVar3 = 0;
  iVar4 = 0;
  if ((iVar2 != 0) && (_DAT_006b5db0 < *(float *)(iVar2 + 0x1e4))) {
    iVar3 = 1;
    iVar4 = 1;
  }
  if (DAT_007345e8 != 0) {
    iVar3 = 1;
    iVar4 = 1;
  }
  iVar2 = param_1[iVar4 + 0x121];
  iVar1 = param_1[iVar3 + 0x124];
  iVar4 = param_1[iVar4 + 0x124];
  if (param_1[iVar3 + 0x121] != param_1[0x220]) {
    param_1[0x220] = param_1[iVar3 + 0x121];
    param_1[0x221] = -1;
  }
  if (iVar2 != param_1[0x224]) {
    param_1[0x224] = iVar2;
    param_1[0x225] = -1;
  }
  if (param_1[0x121] != param_1[0x228]) {
    param_1[0x228] = param_1[0x121];
    param_1[0x229] = -1;
  }
  if (iVar1 != param_1[0x234]) {
    param_1[0x234] = iVar1;
    param_1[0x235] = -1;
  }
  if (iVar4 != param_1[0x238]) {
    param_1[0x238] = iVar4;
    param_1[0x239] = -1;
  }
  if (param_1[0x124] != param_1[0x23c]) {
    param_1[0x23c] = param_1[0x124];
    param_1[0x23d] = -1;
  }
  return;
}

