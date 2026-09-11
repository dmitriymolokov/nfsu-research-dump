/* Decompiled from Speed.exe @ 00547450 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547450(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 local_40c [1036];
  
  if (DAT_007361f8 != 0) {
    cVar2 = FUN_00438a80(DAT_006f3da0);
    if (cVar2 != '\0') {
      FUN_004392a0();
      FUN_004389b0(4);
      FUN_00548840(param_2);
      FUN_00548840((float)DAT_0073ad34 * _DAT_006cca38);
      iVar1 = DAT_006f3da0;
      iVar3 = DAT_006f3da0;
      if (DAT_006f3da0 < DAT_007403e0) {
        iVar3 = DAT_007403e0;
      }
      if (DAT_007403e4 < iVar3) {
        iVar3 = DAT_007403e4;
      }
      FUN_00548840(iVar3 - DAT_007403e0);
      FUN_00548840((float)DAT_0073ad3c * _DAT_006cca38);
      FUN_0043d3d0(iVar1,local_40c);
      FUN_005479e0(param_1,4,0);
    }
  }
  return;
}

