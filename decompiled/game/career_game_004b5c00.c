/* Decompiled from Speed.exe @ 004b5c00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b5c00(void)

{
  int iVar1;
  bool bVar2;
  undefined4 local_14 [5];
  
  DAT_00777ccc = 0;
  FUN_00431df0();
  DAT_0078a347 = 0;
  switch(DAT_00777cc8) {
  case 0:
    FUN_004b49e0();
    break;
  case 1:
    FUN_004b4c30();
    break;
  case 2:
    FUN_004b4e60();
    break;
  case 3:
    FUN_004b5090();
    break;
  case 4:
    FUN_004b52a0();
    break;
  case 5:
    FUN_004b55b0();
    break;
  case 6:
    FUN_004b59b0();
  }
  FUN_004df790();
  iVar1 = DAT_00748f78;
  FUN_005748c0(5);
  bVar2 = DAT_0078a320 == 2;
  *(undefined4 *)(&DAT_0073b3e8 + iVar1 * 0x18c) = local_14[DAT_00758974];
  iVar1 = DAT_00748f7c;
  if (bVar2) {
    FUN_005748c0(5);
    *(undefined4 *)(&DAT_0073b3e8 + iVar1 * 0x18c) = local_14[DAT_0075897c];
  }
  _DAT_0077a90c = "UnloadingFrontEnd";
  DAT_0077a904 = &LAB_00448d10;
  if (DAT_0077a918 != '\0') {
    DAT_0077a918 = '\0';
  }
  return;
}

