/* Decompiled from Speed.exe @ 0043ba60 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_0043ba60(int *param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  
  if (param_1[param_2 + 2] != 0) {
    iVar1 = FUN_0043b850(param_2);
    if (*param_1 == 3) {
      FUN_004390d0(0);
      FUN_00432710((int)*(char *)(iVar1 + 4));
      if (*(char *)(iVar1 + 0x18) != '\0') {
        for (local_c = 0; local_c < 4; local_c = local_c + 1) {
          if ((param_1[local_c + 2] != 0) && (iVar2 = FUN_0043b850(local_c), iVar2 != iVar1)) {
            uVar3 = 0;
            FUN_0043b850(local_c);
            FUN_004390d0(uVar3);
            iVar2 = FUN_0043b850(local_c);
            FUN_00432710((int)*(char *)(iVar2 + 4));
          }
        }
      }
    }
    else if (DAT_0073619c == 0) {
      FUN_004390d0((param_3 != '\0') + '\x04');
    }
    else {
      FUN_004a8d90(iVar1);
      if (*param_1 == 7) {
        FUN_00439470(0,10);
      }
      else {
        FUN_00439470((param_3 != '\0') + '\x04',10);
      }
      if (*(char *)(iVar1 + 0x18) != '\0') {
        for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
          if ((param_1[local_10 + 2] != 0) && (iVar2 = FUN_0043b850(local_10), iVar2 != iVar1)) {
            uVar4 = 10;
            uVar3 = 0;
            FUN_0043b850(local_10);
            FUN_00439470(uVar3,uVar4);
          }
        }
      }
    }
  }
  return;
}

