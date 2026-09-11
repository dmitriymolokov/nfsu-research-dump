/* Decompiled from Speed.exe @ 005472f0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


void FUN_005472f0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined1 local_40c [1036];
  
  puVar2 = &DAT_0073ddc0;
  do {
    puVar3 = puVar2;
    if (puVar2[1] == unaff_EBX) break;
    puVar2 = puVar2 + 8;
    puVar3 = (undefined4 *)0x0;
  } while ((int)puVar2 < 0x73de20);
  uVar1 = *puVar3;
  FUN_004392a0();
  FUN_004389b0(0);
  FUN_00548840(unaff_EBX);
  FUN_00548840(uVar1);
  uVar1 = DAT_006f3da0;
  FUN_00548840(DAT_006f3da0);
  FUN_0043b210(uVar1,local_40c);
  FUN_005479e0();
  return;
}

