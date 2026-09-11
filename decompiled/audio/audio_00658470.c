/* Decompiled from Speed.exe @ 00658470 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_00658470(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 6)) &&
     (iVar1 = *(int *)(param_1 + 0x14 + param_2 * 4), iVar1 != 0)) {
    return iVar1 + 0x14 + param_2 * 4 + param_1;
  }
  return 0;
}

