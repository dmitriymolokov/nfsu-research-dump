/* Decompiled from Speed.exe @ 004f5ed0 */
/* Module: FEng_FE */
/* Ghidra DecompileVAs */


void __fastcall FUN_004f5ed0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_004f3f90(&DAT_00746104);
  if ((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) {
    iVar3 = *(int *)(iVar1 + 0x88);
    iVar4 = 0;
    if (iVar3 != 0) {
      piVar2 = *(int **)(iVar1 + 0x84);
      do {
        if (*(int *)(*piVar2 + 0x10) == param_1) {
          iVar4 = *piVar2;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (iVar4 != 0) {
        if (*(int *)(iVar1 + 0x80) != 0) {
          FUN_004f0700(0x55d1e635,0,iVar1,*(int *)(iVar1 + 0x80),0);
          FUN_004f0700(0x55d1e635,*(undefined4 *)(iVar1 + 0x80),iVar1,0xfffffffb,0);
        }
        FUN_004f0700(0xabc08912,0,iVar1,iVar4,0);
        FUN_004f0700(0xabc08912,iVar4,iVar1,0xfffffffb,0);
        *(int *)(iVar1 + 0x80) = iVar4;
      }
    }
  }
  return;
}

