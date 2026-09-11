/* Decompiled from Speed.exe @ 00652a30 */
/* Module: Audio */
/* Ghidra DecompileVAs */


void FUN_00652a30(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = *(char *)(param_1 + 0x17);
  while ('\0' < cVar1) {
    cVar1 = *(char *)(param_1 + 0x17) + -1;
    *(char *)(param_1 + 0x17) = cVar1;
    local_14 = param_2;
    local_10 = *(undefined4 *)(param_1 + 0x34 + cVar1 * 4);
    local_c = *(undefined4 *)(param_1 + 0x44 + cVar1 * 4);
    iVar2 = 0;
    if ('\0' < DAT_00713eea) {
      do {
        (*(code *)(&DAT_00713f20)[iVar2])(&local_14);
        iVar2 = iVar2 + 1;
      } while (iVar2 < DAT_00713eea);
    }
    cVar1 = *(char *)(param_1 + 0x17);
  }
  return;
}

