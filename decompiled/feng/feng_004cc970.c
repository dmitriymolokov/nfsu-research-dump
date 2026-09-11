/* Decompiled from Speed.exe @ 004cc970 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void FUN_004cc970(undefined4 *param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined1 *)unaff_EBX = *(undefined1 *)param_1;
  *(undefined1 *)((int)unaff_EBX + 1) = *(undefined1 *)((int)param_1 + 1);
  *(undefined1 *)((int)unaff_EBX + 2) = *(undefined1 *)((int)param_1 + 2);
  *(undefined1 *)((int)unaff_EBX + 3) = *(undefined1 *)((int)param_1 + 3);
  iVar1 = 0xce;
  puVar2 = param_1;
  puVar3 = unaff_EBX;
  while( true ) {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    *puVar3 = *puVar2;
  }
  unaff_EBX[0xd1] = param_1[0xd1];
  unaff_EBX[0xd3] = param_1[0xd3];
  unaff_EBX[0xd2] = param_1[0xd2];
  unaff_EBX[0xd6] = param_1[0xd6];
  unaff_EBX[0xd7] = param_1[0xd7];
  unaff_EBX[0xda] = param_1[0xda];
  unaff_EBX[0xdb] = param_1[0xdb];
  unaff_EBX[0xde] = param_1[0xde];
  unaff_EBX[0xdf] = param_1[0xdf];
  unaff_EBX[0xe0] = param_1[0xe0];
  unaff_EBX[0xe1] = param_1[0xe1];
  unaff_EBX[0xe2] = param_1[0xe2];
  unaff_EBX[0xe3] = param_1[0xe3];
  unaff_EBX[0xe4] = param_1[0xe4];
  unaff_EBX[0xe5] = param_1[0xe5];
  unaff_EBX[0xe6] = param_1[0xe6];
  unaff_EBX[0xe7] = param_1[0xe7];
  unaff_EBX[0xe8] = param_1[0xe8];
  unaff_EBX[0xe9] = param_1[0xe9];
  FUN_004c94b0();
  unaff_EBX[0x114] = param_1[0x114];
  return;
}

