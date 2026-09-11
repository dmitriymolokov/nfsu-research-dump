/* Decompiled from Speed.exe @ 004d5df0 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


void __fastcall FUN_004d5df0(int param_1)

{
  undefined4 *puVar1;
  char in_AL;
  int iVar2;
  int iVar3;
  
  if (in_AL != '\0') {
    FUN_004d5e70(param_1,*(undefined4 *)(param_1 + 0xb0),"Release");
  }
  *(undefined1 *)(param_1 + 0x94) = 0;
  iVar3 = 0;
  do {
    puVar1 = *(undefined4 **)(param_1 + 0xa0);
    for (iVar2 = 0; (puVar1 != (undefined4 *)(param_1 + 0xa0) && (iVar2 != iVar3));
        iVar2 = iVar2 + 1) {
      puVar1 = (undefined4 *)*puVar1;
    }
    (&DAT_00758b58)[iVar3 * 2] = puVar1[4];
    (&DAT_00758b5c)[iVar3 * 8] = *(undefined1 *)(puVar1 + 5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1a);
  FUN_00520e90(DAT_007356a8,0,1);
  return;
}

