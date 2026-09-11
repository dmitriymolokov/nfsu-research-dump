/* Decompiled from Speed.exe @ 0054c350 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_0054c350(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 *extraout_ECX;
  undefined1 *puVar3;
  undefined4 uVar4;
  
  if (((param_2 != 0) && (*(int *)(param_2 + 4) == 0x75736572)) &&
     (FUN_0054cf80(), pcVar1 = DAT_0073d898, DAT_0073d898 != (code *)0x0)) {
    uVar4 = DAT_0073d89c;
    if (*(int *)(param_2 + 8) == 0) {
      uVar2 = FUN_00567cc0(DAT_0073d89c);
      puVar3 = extraout_ECX;
    }
    else {
      uVar2 = 0;
      puVar3 = &DAT_006b9172;
    }
    (*pcVar1)(puVar3,uVar2,uVar4);
    DAT_0073d898 = (code *)0x0;
    DAT_0073d89c = 0;
  }
  return;
}

