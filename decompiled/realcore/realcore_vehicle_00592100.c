/* Decompiled from Speed.exe @ 00592100 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00592100(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  undefined1 local_80 [48];
  undefined1 local_50 [76];
  
  puVar1 = DAT_0073781c;
  bVar4 = DAT_007364a0 != 3;
  puVar2 = (undefined4 *)FUN_0040a880();
  do {
    if (puVar1 == puVar2) {
      return;
    }
    if ((puVar1[4] != 0) && ((bVar4 || (puVar1[5] != 0)))) {
      if (puVar1[6] != 0) {
        FUN_00424ba0();
        FUN_0040bc10();
        FUN_0053f5f0();
        thunk_FUN_005abda2(local_80,*(int *)(param_1 + 0x40) + 0x40,local_50);
        iVar3 = FUN_00567940(0);
        if (iVar3 != 0) goto LAB_005921d4;
      }
      FUN_00591e40(puVar1,param_1);
    }
LAB_005921d4:
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

