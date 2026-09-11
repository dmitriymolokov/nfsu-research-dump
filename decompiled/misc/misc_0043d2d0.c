/* Decompiled from Speed.exe @ 0043d2d0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043d379) */

void __thiscall FUN_0043d2d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((*(int *)(param_1 + 8 + param_2 * 4) != 0) && (iVar2 = FUN_00438920(), 1 < iVar2)) {
    FUN_0043b850(param_2);
    fVar3 = (float10)FUN_00435f70();
    cVar1 = FUN_00432e40();
    if ((cVar1 == '\0') &&
       ((*(float *)(param_1 + 0x1c) == DAT_006cc7a4 ||
        (fVar4 = (float10)FUN_0040ed00(),
        fVar4 < (float10)(float)fVar3 + (float10)*(float *)(param_1 + 0x1c))))) {
      FUN_004399a0(1);
    }
    if ((DAT_007361f8 != 0) && (iVar2 = FUN_0041ff50(), iVar2 != 0)) {
      (**(code **)(**(int **)(iVar2 + 0x830) + 0xc))(param_3,param_4);
    }
  }
  return;
}

