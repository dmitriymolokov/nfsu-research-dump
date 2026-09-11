/* Decompiled from Speed.exe @ 00408e30 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_00408e30(int param_1)

{
  int *unaff_EDI;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  FUN_00564db0(((undefined4 *)*unaff_EDI)[2],*(undefined4 *)*unaff_EDI);
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x3f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0x3f800000;
  FUN_0040b930();
  thunk_FUN_005ac68f(&local_90,&local_90,local_50);
  *(int **)(param_1 + 0x80) = unaff_EDI;
  return;
}

