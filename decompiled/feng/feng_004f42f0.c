/* Decompiled from Speed.exe @ 004f42f0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


int FUN_004f42f0(undefined4 param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte local_100;
  byte local_ff [255];
  
  DAT_00730508 = &local_100;
  DAT_007304b8 = &LAB_005669d0;
  DAT_007304bc = &LAB_005669f0;
  iVar2 = FUN_00565df0(0,param_1,&stack0x00000008);
  pbVar3 = &local_100;
  if (iVar2 != -1) {
    *DAT_00730508 = 0;
  }
  iVar2 = -1;
  while (local_100 != 0) {
    iVar2 = iVar2 * 0x21 + (uint)local_100;
    pbVar1 = pbVar3 + 1;
    pbVar3 = pbVar3 + 1;
    local_100 = *pbVar1;
  }
  return iVar2;
}

