/* Decompiled from Speed.exe @ 00529ea0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void __fastcall FUN_00529ea0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x18e8);
  if (iVar1 == 0) {
    FUN_0052a260();
    return;
  }
  if (iVar1 == 2) {
    cVar2 = FUN_00529f50();
    if (cVar2 == '\0') {
      FUN_0052a0f0();
    }
    goto LAB_00529f17;
  }
  if (iVar1 != 3) {
    if (iVar1 == 5) {
      if (*(char *)(param_1 + 0x17e0) != '\0') {
        *(undefined4 *)(param_1 + 0x18e8) = 0;
      }
      goto LAB_00529f17;
    }
    cVar2 = FUN_00529fb0();
    if (cVar2 != '\0') {
      FUN_0052a190(1);
      goto LAB_00529f17;
    }
  }
  cVar2 = FUN_0052a000();
  if (cVar2 != '\0') {
    FUN_0052a260();
  }
LAB_00529f17:
  FUN_005326f0(*(undefined4 *)(param_1 + 0x244));
  *(undefined4 *)(param_1 + 0x18dc) = *(undefined4 *)(param_1 + 0x17dc);
  uVar3 = FUN_00674898();
  *(undefined4 *)(param_1 + 0x18e4) = uVar3;
  return;
}

