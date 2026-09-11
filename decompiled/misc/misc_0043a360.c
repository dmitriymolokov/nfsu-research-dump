/* Decompiled from Speed.exe @ 0043a360 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0043a360(undefined4 *param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  float10 fVar6;
  int local_24;
  int local_1c;
  int local_c;
  
  FUN_00549130("OnlineManager::Update");
  FUN_00546780();
  switch(*param_1) {
  case 1:
    if ((DAT_006f1f64 == 0) || (DAT_00734fd0 != '\0')) {
      FUN_004390d0(2);
      if (DAT_0073465c != 0) {
        FUN_0043aba0();
      }
    }
    else {
      FUN_00549aa0();
    }
    break;
  case 5:
    iVar5 = FUN_0043b770();
    if (iVar5 == 0) {
      FUN_0043af80();
    }
    else if ((DAT_006cc7a4 < (float)param_1[7]) &&
            (fVar6 = (float10)FUN_0040ed00(), (float10)(float)param_1[7] <= fVar6)) {
      FUN_0043af80();
    }
    break;
  case 6:
    iVar5 = FUN_00424ea0();
    if ((iVar5 != 0) && (iVar5 = FUN_00435b30(DAT_0073619c), iVar5 == 0)) {
      for (local_c = 0; local_c < 4; local_c = local_c + 1) {
        iVar5 = FUN_0043b850(local_c);
        if (iVar5 != 0) {
          iVar5 = FUN_00439130();
          iVar5 = *(int *)(iVar5 + 0x830);
          FUN_00436fc0(**(undefined4 **)(iVar5 + 0x298),*(undefined4 *)(iVar5 + 0x29c));
          iVar3 = FUN_00674898();
          if (iVar3 != 5) {
            FUN_004399a0(0x20);
            FUN_0043a830();
            break;
          }
          *(undefined4 *)(iVar5 + 0x254) = 0;
        }
      }
    }
    iVar5 = FUN_0043b770();
    if ((iVar5 == 0) && (cVar2 = FUN_00432e40(), cVar2 == '\0')) {
      FUN_00439470(0,10);
    }
    bVar1 = true;
    for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
      puVar4 = (undefined4 *)FUN_0043b850(local_1c);
      if (puVar4 != (undefined4 *)0x0) {
        cVar2 = FUN_00432e40();
        if (cVar2 == '\0') {
          bVar1 = false;
          break;
        }
        FUN_004390f0();
        iVar5 = FUN_00424e90();
        if (iVar5 == 0) {
          FUN_004a8d90(puVar4);
          FUN_00439470(*puVar4,10);
        }
      }
    }
    if (bVar1) {
      FUN_0043ac10(0);
    }
    else {
      cVar2 = FUN_0043a340();
      if ((cVar2 != '\0') && (iVar5 = FUN_00586640(DAT_0073ad38), iVar5 == 0)) {
        FUN_0043cef0();
        FUN_00424cd0(param_1 + 0x11,DAT_006b7960);
      }
      cVar2 = FUN_0041f600();
      if ((cVar2 != '\0') && (iVar5 = FUN_00586640(DAT_0073ad38), iVar5 == 0)) {
        FUN_0043d030();
        FUN_00424cd0(param_1 + 0x12,DAT_006b7964);
      }
      iVar5 = FUN_00586640(DAT_0073ad38);
      if (iVar5 == 0) {
        FUN_0043d5f0();
        FUN_00424cd0(param_1 + 0x13,DAT_006b7968);
      }
      FUN_0041f0b0(param_1 + 0x25);
      fVar6 = (float10)FUN_0040ed00();
      if ((float10)_DAT_006b798c < fVar6) {
        FUN_0043d4f0();
        FUN_00405560();
      }
    }
    cVar2 = FUN_00432e20();
    if (cVar2 != '\0') {
      FUN_004394f0(DAT_0073457c);
      fVar6 = (float10)FUN_00439a80();
      if (fVar6 < -(float10)_DAT_006b7984) {
        for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
          iVar5 = FUN_0043b850(local_24);
          if ((iVar5 != 0) && (cVar2 = FUN_00432e40(), cVar2 == '\0')) {
            FUN_004399a0(0x10);
            FUN_00439470(3,9);
          }
        }
      }
    }
    break;
  case 7:
    iVar5 = FUN_00421a30();
    if (((iVar5 == 0) && (iVar5 = FUN_0042ac10(), iVar5 == 0)) &&
       (iVar5 = FUN_00421960(), iVar5 == 4)) {
      FUN_00405560();
    }
  }
  if (param_2 != '\0') {
    FUN_0043a7f0();
    FUN_0043a810();
  }
  return;
}

