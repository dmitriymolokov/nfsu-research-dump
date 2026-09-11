/* Decompiled from Speed.exe @ 0063d990 */
/* Module: Loader */
/* Ghidra DecompileModule */


undefined4 FUN_0063d990(undefined4 param_1,undefined4 param_2,undefined1 param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = FUN_0063d0a0();
  iVar1 = DAT_0070f48c + uVar2 * 0x24;
  *(undefined1 *)(iVar1 + 1) = param_3;
  *(undefined4 *)(iVar1 + 4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 8) = 8;
  *(undefined4 *)(iVar1 + 0xc) = 0x2000;
  *(undefined4 *)(iVar1 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  *(undefined4 *)(iVar1 + 0x20) = 1;
  *param_4 = ~uVar2;
  return 1;
}

