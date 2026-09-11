/* Decompiled from Speed.exe @ 004392c0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x004393e6) */
/* WARNING: Removing unreachable block (ram,0x004393f7) */
/* WARNING: Removing unreachable block (ram,0x00439408) */
/* WARNING: Removing unreachable block (ram,0x00439411) */
/* WARNING: Removing unreachable block (ram,0x00439422) */

void __fastcall FUN_004392c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_30;
  undefined1 local_24 [29];
  undefined1 local_7;
  char local_5;
  
  FUN_005488d0(8);
  local_7 = 0;
  FUN_005488d0(8);
  local_5 = '\0';
  FUN_005488d0(8);
  FUN_005489c0(local_24,0x18);
  FUN_005489c0(param_1 + 0x28,0x15c);
  for (local_30 = 0; local_30 < 6; local_30 = local_30 + 1) {
    uVar1 = FUN_004109f0();
    *(undefined4 *)(param_1 + 0x18c + local_30 * 4) = uVar1;
  }
  FUN_004390d0(3);
  iVar2 = FUN_004390f0();
  if ((iVar2 != 0) && (iVar2 = FUN_00424e90(), iVar2 == 0)) {
    uVar4 = 0;
    uVar3 = (uint)(local_5 != '\0');
    uVar5 = 0;
    uVar1 = FUN_00421960(0,uVar3,0);
    FUN_00435c50(uVar1,uVar5,uVar3,uVar4);
  }
  if (*(int *)(param_1 + 0x184) == 0) {
    FUN_004399a0(0x20);
  }
  return;
}

