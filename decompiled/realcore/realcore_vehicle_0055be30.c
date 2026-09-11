/* Decompiled from Speed.exe @ 0055be30 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 * FUN_0055be30(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00687683;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = _malloc(0x40);
  local_4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_004f78e0(puVar3,param_1);
    pcVar2 = (char *)puVar3[3];
    *puVar3 = &PTR_FUN_006bc9f8;
    DAT_00734bc8 = *pcVar2;
    if (DAT_00734bc8 != '\0') {
      pcVar4 = &DAT_00734bc8;
      do {
        cVar1 = (pcVar2 + -0x734bc7)[(int)pcVar4];
        pcVar4 = pcVar4 + 1;
        *pcVar4 = cVar1;
      } while (cVar1 != '\0');
    }
    ExceptionList = local_c;
    return puVar3;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

