/* Decompiled from Speed.exe @ 00591de0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00591de0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = DAT_007344c8;
  puVar3 = DAT_0073781c;
  if ((undefined4 **)DAT_0073781c != &DAT_0073781c) {
    do {
      if (puVar3 != (undefined4 *)0x0) {
        FUN_00591c90(puVar3);
        iVar1 = *(int *)(iVar2 + 0x18);
        *puVar3 = *(undefined4 *)(iVar2 + 0x10);
        *(int *)(iVar2 + 0x18) = iVar1 + -1;
        *(undefined4 **)(iVar2 + 0x10) = puVar3;
        puVar3 = DAT_0073781c;
      }
    } while ((undefined4 **)puVar3 != &DAT_0073781c);
  }
  FUN_00567220();
  DAT_007344c8 = 0;
  return;
}

