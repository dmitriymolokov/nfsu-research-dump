/* Decompiled from Speed.exe @ 00549610 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined1 * __fastcall FUN_00549610(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  param_2[0x58] = 0;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  *(undefined4 *)(param_2 + 0x60) = 0;
  *(undefined4 *)(param_2 + 100) = 0;
  *(undefined4 *)(param_2 + 0x68) = 0;
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
  puVar1 = param_2 + 0x284;
  *(undefined1 **)puVar1 = puVar1;
  *(undefined1 **)(param_2 + 0x288) = puVar1;
  *(undefined4 *)(param_2 + 0x28c) = 0;
  *(undefined4 *)(param_2 + 0x290) = 0;
  *(undefined4 *)(param_2 + 0x538) = 0x18;
  *(undefined4 *)(param_2 + 0x53c) = 0x18;
  *(undefined4 *)(param_2 + 0x540) = 0;
  *(undefined4 *)(param_2 + 0x544) = 0;
  *(undefined4 *)(param_2 + 0x548) = 0;
  *(undefined4 *)(param_2 + 0x54c) = 0;
  param_2[0x550] = 0;
  *param_2 = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  param_2[0x84] = 0;
  *(undefined4 *)(param_2 + 0x534) = 0xffffffff;
  puVar3 = (undefined4 *)(param_2 + 0x294);
  for (iVar2 = 0xa8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_2 + 0x294) = 0xffffffff;
  return param_2;
}

