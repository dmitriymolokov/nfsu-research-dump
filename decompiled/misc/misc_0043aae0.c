/* Decompiled from Speed.exe @ 0043aae0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043aae0(int param_1,float param_2,char param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_8;
  
  for (local_8 = 0; local_8 < (int)(uint)*(byte *)(param_1 + 0x40); local_8 = local_8 + 1) {
    uVar3 = *(undefined4 *)(param_1 + 0x20 + local_8 * 4);
    piVar2 = (int *)FUN_00417490();
    cVar1 = FUN_0057a180(param_1,piVar2,uVar3);
    if (cVar1 != '\0') {
      if (param_3 != '\0') {
        FUN_00579f90(0);
      }
      if (param_2 != DAT_006cc7a4) {
        (**(code **)(*piVar2 + 4))(param_2);
      }
    }
  }
  return;
}

