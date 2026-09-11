/* Decompiled from Speed.exe @ 0043ac10 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043ac10(int *param_1,char param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  int local_c;
  int local_8;
  
  _DAT_006f0894 = 0x40400000;
  if (DAT_007361f8 != 0) {
    FUN_00420090(DAT_007361f8);
  }
  if (((*param_1 == 6) || (*param_1 == 4)) || (*param_1 == 5)) {
    if (param_2 != '\0') {
      if (param_1[1] != 0) {
        FUN_00439470(5,10);
      }
      for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
        if (param_1[local_8 + 2] != 0) {
          iVar2 = FUN_0043b850(local_8);
          if (iVar2 != param_1[1]) {
            FUN_0043b850(local_8);
            cVar1 = FUN_00432e40();
            if (cVar1 == '\0') {
              uVar5 = 10;
              uVar4 = 0;
              FUN_0043b850(local_8);
              FUN_00439470(uVar4,uVar5);
            }
          }
        }
      }
    }
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      if (param_1[local_c + 2] != 0) {
        FUN_00421a90();
        fVar3 = (float10)FUN_0040ed00();
        fVar6 = (float)fVar3;
        FUN_0043b850(local_c);
        FUN_00439860(fVar6);
      }
    }
    FUN_0043bfe0();
    FUN_0043c300();
    FUN_0043d120();
    FUN_006497d0();
    FUN_00439f80();
  }
  if ((param_2 == '\0') && (*param_1 != 7)) {
    FUN_004390d0(7);
  }
  else {
    FUN_0043a220(0);
  }
  return;
}

