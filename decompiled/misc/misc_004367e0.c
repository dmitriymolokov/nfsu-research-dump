/* Decompiled from Speed.exe @ 004367e0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_004367e0(int param_1)

{
  int iVar1;
  byte bVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00685013;
  local_c = ExceptionList;
  iVar5 = 0;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    pvVar3 = _malloc(0x44);
    iVar1 = DAT_00736198;
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x3c) = 0;
      *(undefined4 *)((int)pvVar3 + 0x40) = 0;
      *(int *)((int)pvVar3 + 8) = iVar1 + iVar4;
      *(undefined1 *)((int)pvVar3 + 0x14) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15) = 1;
      *(int *)((int)pvVar3 + 0xc) = iVar5;
      FUN_00436580();
    }
    *(void **)(param_1 + iVar5 * 4) = pvVar3;
    iVar1 = DAT_007361a4;
    iVar4 = iVar4 + 0x20;
    iVar5 = iVar5 + 1;
  } while (iVar4 < 0x3e0);
  iVar4 = 0;
  do {
    if ((DAT_0078a345 == '\0') && (iVar1 == 0)) {
      if ((DAT_0078a344 == '\0') && (DAT_007361a8 == 0)) {
        bVar2 = ((DAT_0078a318 == 0) - 1U & 7) + 1;
      }
      else {
        bVar2 = 2;
      }
    }
    else {
      bVar2 = 4;
    }
    iVar5 = *(int *)(param_1 + iVar4 * 4);
    iVar4 = iVar4 + 1;
    *(bool *)(iVar5 + 0x14) =
         (*(byte *)(*(int *)(iVar5 + 0xc) * 0x20 + 7 + DAT_00736198) & bVar2) != 0;
  } while (iVar4 < 0x1f);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  ExceptionList = local_c;
  return;
}

