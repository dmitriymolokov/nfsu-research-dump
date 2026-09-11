/* Decompiled from Speed.exe @ 00651450 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4 FUN_00651450(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 * 0x110 + DAT_0071400c;
  (**(code **)(iVar1 + 0xf4))
            (*(undefined4 *)(iVar1 + 0xc4),
             (int)*(short *)(DAT_00713f48 + 0x62 + (param_1 * 0x46 + param_2) * 2));
  return 0;
}

