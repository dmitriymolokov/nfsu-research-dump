/* Decompiled from Speed.exe @ 00432710 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00432710(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 local_4;
  
  iVar3 = 0;
  bVar2 = false;
  if (0 < *(int *)(unaff_EDI + 300)) {
    local_4 = 0;
    do {
      iVar1 = *(int *)(unaff_EDI + 0x128) + local_4;
      if (*(char *)(*(int *)(unaff_EDI + 0x128) + 1 + local_4) == param_1) {
        if (*(char *)(iVar1 + 0x734) != '\0') {
          iVar1 = *(int *)(iVar1 + 4);
          if (iVar1 == 1) {
            *(int *)(unaff_EDI + 0x38) = *(int *)(unaff_EDI + 0x38) + -1;
            *(int *)(unaff_EDI + 300) = *(int *)(unaff_EDI + 300) + -1;
            bVar2 = true;
            goto LAB_0043277d;
          }
          if (iVar1 == 2) {
            *(int *)(unaff_EDI + 0x3c) = *(int *)(unaff_EDI + 0x3c) + -1;
          }
        }
        *(int *)(unaff_EDI + 300) = *(int *)(unaff_EDI + 300) + -1;
        bVar2 = true;
LAB_0043277d:
        if (iVar3 < *(int *)(unaff_EDI + 300) + -1) {
          FUN_00432360();
        }
      }
      else if (bVar2) goto LAB_0043277d;
      iVar3 = iVar3 + 1;
      local_4 = local_4 + 0x750;
    } while (iVar3 < *(int *)(unaff_EDI + 300));
  }
  return;
}

