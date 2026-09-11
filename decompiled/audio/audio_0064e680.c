/* Decompiled from Speed.exe @ 0064e680 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_0064e680(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_d4 [212];
  
  *param_2 = 0;
  iVar1 = FUN_00651c10(local_d4,&DAT_00713cb4);
  if (iVar1 < 0) {
    uVar2 = FUN_0064e560(iVar1);
    return uVar2;
  }
  if ((&DAT_00713cb4)[param_1] == '\x01') {
    *param_2 = 1;
  }
  return 0;
}

