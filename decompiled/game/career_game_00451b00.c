/* Decompiled from Speed.exe @ 00451b00 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00451b00(int *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  bVar3 = false;
  cVar4 = FUN_00435ca0(DAT_0073619c,*param_1);
  if (cVar4 != '\0') {
    return 0xffffffff;
  }
  if (param_1[0xe3] == 0) {
    return 0xffffffff;
  }
  cVar4 = FUN_0057a7d0();
  if (cVar4 == '\0') {
    return 0xffffffff;
  }
  pfVar1 = (float *)param_1[0xe4];
  if (pfVar1 == (float *)0x0) {
LAB_00451b94:
    iVar5 = *param_1;
    if ((((*(int *)(iVar5 + 0x24) != 3) ||
         (*(float *)(iVar5 + 0x3d4) < _DAT_006b7688 == (*(float *)(iVar5 + 0x3d4) == _DAT_006b7688))
         ) && ((*(int *)(iVar5 + 0x24) != 4 ||
               (*(float *)(iVar5 + 0x3d4) < _DAT_006b768c ==
                (*(float *)(iVar5 + 0x3d4) == _DAT_006b768c))))) ||
       (iVar5 = FUN_0044e9c0(1), iVar5 != 1)) goto LAB_00451be0;
  }
  else {
    fVar2 = (*(float *)(*param_1 + 0x60) - *pfVar1) * pfVar1[4] -
            (*(float *)(*param_1 + 100) - pfVar1[1]) * pfVar1[3];
    if (fVar2 <= DAT_006cc7a4) {
      fVar2 = -(fVar2 + pfVar1[9]);
    }
    else {
      fVar2 = fVar2 - pfVar1[10];
    }
    if (fVar2 < _DAT_006b7690) goto LAB_00451b94;
  }
  bVar3 = true;
LAB_00451be0:
  iVar5 = *(int *)(*param_1 + 0x3c);
  iVar8 = 0;
  if ('\0' < *(char *)(iVar5 + 0x1c)) {
    do {
      if (bVar3) goto LAB_00451c8b;
      iVar6 = FUN_00468820(iVar8);
      iVar7 = FUN_0044ecd0();
      if (((iVar7 == 0) &&
          (_DAT_006b7680 <= (float)(DAT_0073ad34 - *(int *)(iVar6 + 8)) * _DAT_006cca38)) &&
         ((*(float *)(*param_1 + 0x3d4) < DAT_006b7684 ||
          (iVar6 = FUN_00424b50(*(float *)(*param_1 + 0x3d4),DAT_006b7684,0x3a83126f), iVar6 != 0)))
         ) {
        bVar3 = true;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(char *)(iVar5 + 0x1c));
  }
  if (!bVar3) {
    return 0xffffffff;
  }
LAB_00451c8b:
  (**(code **)(**(int **)(*param_1 + 0x2c) + 0x2c))(1);
  return 500;
}

