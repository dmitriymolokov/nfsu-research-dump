/* Decompiled from Speed.exe @ 00455ae0 */
/* Module: Career_Game */
/* Ghidra DecompileVAs */


void FUN_00455ae0(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  iVar3 = DAT_007344c8;
  if (*param_1 != '\0') {
    piVar5 = (int *)(param_1 + 4);
    local_4 = 3;
    do {
      iVar4 = 0x28;
      do {
        puVar1 = (undefined4 *)*piVar5;
        if (puVar1 != (undefined4 *)0x0) {
          FUN_00591c90(puVar1);
          iVar2 = *(int *)(iVar3 + 0x18);
          *puVar1 = *(undefined4 *)(iVar3 + 0x10);
          *(int *)(iVar3 + 0x18) = iVar2 + -1;
          *(undefined4 **)(iVar3 + 0x10) = puVar1;
        }
        *piVar5 = 0;
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    *param_1 = '\0';
  }
  return;
}

