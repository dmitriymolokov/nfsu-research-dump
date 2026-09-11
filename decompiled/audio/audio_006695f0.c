/* Decompiled from Speed.exe @ 006695f0 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_006695f0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00668d60(param_1);
  iVar1 = *(int *)(param_1 + 0x24);
  do {
    if (iVar1 == 0) {
LAB_0066964c:
      FUN_00668df0(param_1);
      return (iVar1 != 0) - 1;
    }
    if (((param_2 == 0) || (iVar2 = FUN_00668fb0(), iVar2 == 0)) &&
       ((param_3 == 0 || (iVar2 = FUN_00668fb0(), iVar2 == 0)))) {
      *(undefined4 *)(iVar1 + 0xe0) = 0;
      goto LAB_0066964c;
    }
    iVar1 = *(int *)(iVar1 + 0x100);
  } while( true );
}

