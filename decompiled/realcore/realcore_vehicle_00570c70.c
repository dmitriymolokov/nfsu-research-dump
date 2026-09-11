/* Decompiled from Speed.exe @ 00570c70 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00570c70(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int unaff_EDI;
  
  puVar1 = DAT_0073d6d8;
  if ((((unaff_EDI != 0) && (DAT_006f41a0 != 0)) && (DAT_00700ea0 != 0)) && (DAT_006fb038 != 0)) {
    puVar2 = (undefined4 *)FUN_0040a880();
    for (; puVar1 != puVar2; puVar1 = (undefined4 *)*puVar1) {
      if (((puVar1[0x265] != 0) && (puVar1[0x267] == 0)) &&
         ((puVar1[0x1cc] == *(int *)(unaff_EDI + 4) && (puVar1[2] != 0)))) {
        FUN_0056d8d0(puVar1[2],unaff_EDI,puVar1 + 0x1d4,0,param_1);
      }
    }
  }
  return;
}

