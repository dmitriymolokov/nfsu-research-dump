/* Decompiled from Speed.exe @ 004337a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void __thiscall FUN_004337a0(int *param_1,char param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  
  if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
    if (param_2 != '\0') {
      iVar3 = *(int *)(*param_1 + 0x14);
      if ((*(int *)(iVar3 + 4) == 1) && (*(char *)(iVar3 + 0x734) == '\0')) {
        iVar3 = *(int *)(*param_1 + 0x18);
        FUN_0043e310(0);
        FUN_0043f240(0);
        piVar1 = (int *)(iVar3 + 0x960);
        FUN_00436b70();
        FUN_00436940(piVar1,iVar3,0);
        *(undefined1 *)(*piVar1 + 0x14) = 0;
      }
    }
    iVar3 = *param_1;
    if ((*(int *)(*(int *)(iVar3 + 0x14) + 4) == 1) &&
       (*(char *)(*(int *)(iVar3 + 0x14) + 0x734) == '\0')) {
      fVar2 = *(float *)(*(int *)(*(int *)(iVar3 + 0x18) + 0x960) + 0x28);
    }
    else {
      fVar2 = DAT_006cc7a4;
      if ((*(char *)(*(int *)(iVar3 + 0x14) + 0x734) != '\0') &&
         (*(int *)(*(int *)(iVar3 + 0x14) + 4) == 1)) {
        iVar3 = FUN_0043b850((int)*(short *)(iVar3 + 10));
        fVar2 = (float)*(int *)(iVar3 + 0xc);
      }
    }
    iVar3 = (int)*(char *)((int)param_1 + 9);
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      iVar3 = *(char *)((int)param_1 + 9) + 1;
      if (*(int *)(DAT_0073619c + 0x530) <= iVar3) {
        iVar3 = *(int *)(DAT_0073619c + 0x530);
      }
    }
    if ((float)param_1[iVar3 + 0x38] < fVar2 - (float)param_1[0x43]) {
      param_1[iVar3 + 0x38] = (int)(fVar2 - (float)param_1[0x43]);
    }
    if (*(char *)((int)param_1 + 0xd) != '\0') {
      param_1[0x43] = (int)fVar2;
      return;
    }
  }
  return;
}

