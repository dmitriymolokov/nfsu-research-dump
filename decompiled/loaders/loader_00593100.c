/* Decompiled from Speed.exe @ 00593100 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_00593100(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *unaff_ESI;
  
  piVar1 = DAT_007377e8;
  piVar4 = (int *)FUN_0040a880();
  while( true ) {
    if (piVar1 == piVar4) {
      iVar2 = *unaff_ESI;
      piVar1 = (int *)unaff_ESI[1];
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      puVar3 = DAT_007377ec;
      *DAT_007377ec = (int)unaff_ESI;
      DAT_007377ec = unaff_ESI;
      *unaff_ESI = (int)&DAT_007377e8;
      unaff_ESI[1] = (int)puVar3;
      return;
    }
    if ((piVar1 != unaff_ESI) &&
       ((float)unaff_ESI[4] < (float)piVar1[4] != ((float)unaff_ESI[4] == (float)piVar1[4]))) break;
    piVar1 = (int *)*piVar1;
  }
  iVar2 = *unaff_ESI;
  piVar4 = (int *)unaff_ESI[1];
  *piVar4 = iVar2;
  *(int **)(iVar2 + 4) = piVar4;
  puVar3 = (undefined4 *)piVar1[1];
  *puVar3 = unaff_ESI;
  piVar1[1] = (int)unaff_ESI;
  *unaff_ESI = (int)piVar1;
  unaff_ESI[1] = (int)puVar3;
  return;
}

