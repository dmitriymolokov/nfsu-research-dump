/* Decompiled from Speed.exe @ 006584e0 */
/* Module: Audio */
/* Ghidra DecompileVAs */


undefined4 FUN_006584e0(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  cVar1 = *(char *)(param_1 * 0x8c + 0x26 + DAT_00713f48);
  if (cVar1 == '\0') {
    if (*param_2 < 0) {
      *param_2 = param_1;
      return 1;
    }
  }
  else {
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    if (iVar2 + 1 < (int)DAT_00713ee8) {
      do {
        piVar3 = (int *)(*param_2 * 0x8c + DAT_00713f48);
        if (((*(char *)((int)piVar3 + 0x26) == cVar1) && (*(char *)((int)piVar3 + 0x69) == '\x01'))
           && (-1 < *piVar3)) {
          return 1;
        }
        iVar2 = *param_2;
        *param_2 = iVar2 + 1;
      } while (iVar2 + 1 < (int)DAT_00713ee8);
    }
  }
  return 0;
}

