/* Decompiled from Speed.exe @ 0059aa60 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059ab7b) */
/* WARNING: Removing unreachable block (ram,0x0059ab9a) */
/* WARNING: Removing unreachable block (ram,0x0059abcb) */

undefined1 FUN_0059aa60(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  undefined1 local_18;
  char local_7;
  char local_6;
  
  local_7 = '\0';
  local_6 = '\0';
  bVar2 = false;
  iVar3 = FUN_00441fe0();
  if ((*(char *)(iVar3 + 200 + DAT_0078a2fc) == '\0') &&
     ((DAT_0073619c == 0 || (fVar5 = (float10)FUN_00432c90(), fVar5 < (float10)DAT_006b5a40)))) {
    iVar3 = FUN_0042ae10();
    fVar1 = *(float *)(iVar3 + 0xcc + DAT_0078a2fc * 4);
    fVar5 = (float10)FUN_00432d00();
    fVar5 = (float10)FUN_00432d20((float)fVar5);
    fVar6 = (float)fVar5;
    fVar5 = (float10)FUN_00442570(fVar6);
    fVar5 = (float10)FUN_00443d60((float)fVar5,fVar6);
    fVar5 = (float10)FUN_00405600((float)fVar5);
    if (fVar5 < (float10)fVar1) {
      bVar2 = true;
    }
  }
  if (!bVar2) {
    fVar5 = (float10)FUN_00442570();
    local_7 = FUN_0059ad90((float)fVar5);
    if (local_7 == '\0') {
      uVar4 = (uint)param_4;
      fVar5 = (float10)FUN_00442570(param_2,param_3,uVar4);
      local_6 = FUN_0059b1e0((float)fVar5,param_2,param_3,uVar4);
    }
  }
  if (((local_7 != '\0') || (local_6 != '\0')) || (bVar2)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}

