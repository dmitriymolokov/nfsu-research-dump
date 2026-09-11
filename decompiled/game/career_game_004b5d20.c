/* Decompiled from Speed.exe @ 004b5d20 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b5d20(void)

{
  int iVar1;
  undefined4 local_14 [5];
  
  DAT_00777ccc = 0;
  FUN_00431df0();
  DAT_0078a347 = 1;
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
  DAT_0078a324 = 0;
  DAT_0078a300 = 0;
  FUN_004df790();
  iVar1 = DAT_00748f78;
  FUN_005748c0(5);
  *(undefined4 *)(&DAT_0073b3e8 + iVar1 * 0x18c) = local_14[DAT_00758974];
  return;
}

