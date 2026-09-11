/* Decompiled from Speed.exe @ 00439470 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_00439470(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_00432e20(param_1);
  if (cVar1 != '\0') {
    FUN_004390d0(param_2);
  }
  iVar2 = FUN_004390f0();
  if (iVar2 != 0) {
    iVar2 = FUN_00424e90();
    if (iVar2 == 0) {
      FUN_00439010(param_3);
      uVar3 = FUN_00421a80();
      uVar5 = 0;
      uVar4 = FUN_00421960(0,uVar3);
      FUN_00435c50(uVar4,uVar5,uVar3,param_3);
      FUN_00439440();
    }
  }
  return;
}

