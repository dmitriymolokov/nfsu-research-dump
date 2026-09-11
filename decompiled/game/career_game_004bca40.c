/* Decompiled from Speed.exe @ 004bca40 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004bca40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EDI;
  undefined1 local_730 [1092];
  int local_2ec;
  int local_2e8;
  int local_26c;
  char local_e6;
  
  iVar3 = unaff_EDI[0x112];
  iVar1 = unaff_EDI[0x111];
  iVar2 = *unaff_EDI;
  FUN_00417600();
  FUN_0057d160(1,0,0);
  local_2ec = iVar1;
  local_2e8 = iVar3;
  FUN_0057d340(local_730);
  FUN_0057e9a0(local_730);
  iVar3 = FUN_0057ce10(0,0x1e,*(undefined4 *)(iVar2 * 0xc90 + 0xc5c + DAT_00734588),0,0xffffffff);
  if (iVar3 != 0) {
    local_e6 = local_e6 + '\x01';
    local_26c = iVar3;
    FUN_0057ea80(local_730);
  }
  FUN_004323f0(unaff_EDI,local_730);
  return;
}

