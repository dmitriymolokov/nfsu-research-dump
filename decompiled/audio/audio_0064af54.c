/* Decompiled from Speed.exe @ 0064af54 */
/* Module: Audio */
/* Ghidra DecompileAll */


int FUN_0064af54(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)((longlong)param_1 * (longlong)param_2);
  return (uVar1 >> 0x10) +
         (int)((ulonglong)((longlong)param_1 * (longlong)param_2) >> 0x20) * 0x10000 +
         (uint)((uVar1 >> 0xf & 1) != 0);
}

