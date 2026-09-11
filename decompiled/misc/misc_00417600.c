/* Decompiled from Speed.exe @ 00417600 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


undefined4 __fastcall FUN_00417600(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 *puVar2;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(param_2 + 8 + iVar1 * 4) = 0;
    *(undefined4 *)(param_2 + 0x34 + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0xb);
  *(undefined4 *)(param_2 + 0x170) = 0x3dcccccd;
  *(undefined4 *)(param_2 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x178) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x17c) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x1c0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x410) = 0x40;
  *(undefined4 *)(param_2 + 0x414) = 0;
  *(undefined4 *)(param_2 + 0x418) = 0x425e38e4;
  *(undefined4 *)(param_2 + 0x41c) = 0x3f9126e9;
  *(undefined4 **)(param_2 + 0x420) = (undefined4 *)(param_2 + 0x310);
  puVar2 = (undefined4 *)(param_2 + 0x310);
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0x40800000;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_2 + 0x40c) = 0;
  FUN_0057d160(0,0,0);
  return extraout_EDX;
}

