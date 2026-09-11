/* Decompiled from Speed.exe @ 004222a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004222a0(void)

{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00688666;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (((((-1 < DAT_0078a410) &&
        (ExceptionList = &local_c, pcVar2 = (char *)FUN_004327d0(), pcVar2 != (char *)0x0)) &&
       (*(int *)(pcVar2 + 4) == 1)) && (*pcVar2 < '\x01')) || (DAT_0078a308 != '\0')) {
    uVar1 = DAT_0078a348;
    pvVar3 = _malloc(0xa70);
    local_4 = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_0042b0d0(pvVar3,uVar1,0);
    }
    local_4 = 0xffffffff;
  }
  if (((-1 < DAT_0078a414) &&
      (pcVar2 = (char *)FUN_004327d0(), uVar1 = DAT_0078a34c, pcVar2 != (char *)0x0)) &&
     ((*(int *)(pcVar2 + 4) == 1 && (*pcVar2 < '\x01')))) {
    pvVar3 = _malloc(0xa70);
    local_4 = 1;
    if (pvVar3 != (void *)0x0) {
      FUN_0042b0d0(pvVar3,uVar1,1);
    }
    local_4 = 0xffffffff;
  }
  local_14 = 0;
  iVar6 = DAT_007361f8;
  if (0 < DAT_007361c4) {
    do {
      if (DAT_0078a308 == '\0') {
        iVar4 = 0;
        if (0 < *(int *)(iVar6 + 0x18)) {
          piVar5 = (int *)(iVar6 + 0x28);
          do {
            if ((int)*(short *)(*piVar5 + 10) ==
                (&DAT_0078a410)[*(int *)((&DAT_007361bc)[local_14] + 0x10)]) goto LAB_0042239c;
            iVar4 = iVar4 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar4 < *(int *)(iVar6 + 0x18));
        }
      }
      else {
LAB_0042239c:
        FUN_00431020((&DAT_007361bc)[local_14]);
        iVar6 = DAT_007361f8;
      }
      local_14 = local_14 + 1;
    } while (local_14 < DAT_007361c4);
  }
  ExceptionList = local_c;
  return;
}

