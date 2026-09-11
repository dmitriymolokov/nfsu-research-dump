/* Decompiled from Speed.exe @ 00588ec0 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 * __fastcall
FUN_00588ec0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  
  iVar3 = *(int *)(unaff_ESI + 0x3078);
  if (iVar3 == 0x95) {
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)(iVar3 * 0x50 + 0x20 + unaff_ESI);
  *(int *)(unaff_ESI + 0x3078) = iVar3 + 1;
  *puVar1 = param_4;
  puVar1[1] = param_3;
  puVar1[3] = param_5;
  puVar1[4] = param_6;
  uVar2 = param_2[2];
  uVar4 = *param_2;
  puVar1[9] = param_2[1];
  puVar1[8] = uVar4;
  puVar1[10] = uVar2;
  puVar1[0xc] = param_7;
  puVar1[0xd] = param_8;
  puVar1[0xe] = param_9;
  puVar1[2] = param_10;
  return puVar1;
}

