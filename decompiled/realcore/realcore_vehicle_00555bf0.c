/* Decompiled from Speed.exe @ 00555bf0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __thiscall FUN_00555bf0(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005494e0(param_1);
  if (cVar1 == '\0') {
    iVar2 = FUN_00549480();
    if ((iVar2 == 0) || (iVar2 = FUN_00549480(), iVar2 == 2)) {
      iVar2 = FUN_004ab510();
      cVar1 = FUN_00452d10(&DAT_0078e948);
      if (cVar1 == '\0') {
        if (param_2 == -0x6edfbf62) {
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + -1;
          if (*(int *)(iVar2 + 0x10) < 2) {
            *(undefined4 *)(iVar2 + 0x10) = 2;
          }
          FUN_00555fa0();
        }
        else if (param_2 == -0x4a68e40f) {
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          if (10 < *(int *)(iVar2 + 0x10)) {
            *(undefined4 *)(iVar2 + 0x10) = 10;
          }
          FUN_00555fa0();
        }
      }
      else {
        *(undefined4 *)(iVar2 + 0x10) = 1;
        FUN_00555fa0();
      }
    }
    FUN_00555720();
  }
  return;
}

