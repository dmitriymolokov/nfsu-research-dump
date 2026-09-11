/* Decompiled from Speed.exe @ 005558d0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void __fastcall FUN_005558d0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_004ab510();
  iVar3 = FUN_00555ff0(*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc));
  if ((iVar3 != 0) && (iVar3 != *(int *)(param_1 + 0x60))) {
    *(int *)(param_1 + 0x60) = iVar3;
  }
  uVar4 = FUN_0055ebb0();
  FUN_004134c0(uVar4);
  FUN_00495f00();
  FUN_004f68c0(0x20,"LapsData");
  iVar3 = FUN_00549480();
  if ((iVar3 == 1) || (iVar3 = FUN_00549480(), iVar3 == 3)) {
    FUN_004134c0(&DAT_006ca778,0);
    FUN_004f67f0();
  }
  else {
    FUN_004134c0(&DAT_006ca778,*(undefined4 *)(iVar2 + 0x10));
    FUN_004f67f0();
  }
  iVar2 = FUN_00549480();
  if (((iVar2 == 1) || (iVar2 = FUN_00549480(), iVar2 == 3)) ||
     (cVar1 = FUN_005494f0(), cVar1 != '\0')) {
    FUN_004134c0("GreyOut",1);
    FUN_004f6bd0();
    FUN_004134c0("GreyOut",1);
    FUN_004f6bd0();
  }
  iVar2 = FUN_00554350();
  if ((iVar2 != 1) && (cVar1 = FUN_005494f0(), cVar1 == '\0')) {
    return;
  }
  FUN_004134c0("GreyOut",1);
  FUN_004f6bd0();
  FUN_004134c0("GreyOut",1);
  FUN_004f6bd0();
  return;
}

