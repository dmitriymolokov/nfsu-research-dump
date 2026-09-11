/* Decompiled from Speed.exe @ 00427c50 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427c50(undefined4 *param_1,float param_2,undefined2 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int unaff_EDI;
  float local_20;
  float local_1c;
  float local_18;
  
  if (DAT_007798e0 == 0) {
    FUN_00426110();
    FUN_00464c80();
  }
  FUN_00443a10(&DAT_007372b0,param_1);
  *(undefined2 *)(unaff_EDI + 0x3b4) = param_3;
  *(undefined2 *)(unaff_EDI + 0x3b6) = 0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  *(undefined4 *)(unaff_EDI + 0x60) = *param_1;
  *(undefined4 *)(unaff_EDI + 100) = uVar1;
  *(undefined4 *)(unaff_EDI + 0x68) = uVar2;
  *(float *)(unaff_EDI + 0x3d0) = param_2;
  FUN_00440740();
  FUN_004278d0();
  FUN_005673e0(param_2 + _DAT_006cc7b8);
  *(float *)(unaff_EDI + 0x70) = local_20;
  *(float *)(unaff_EDI + 0x74) = local_1c;
  *(float *)(unaff_EDI + 0x78) = local_18;
  *(undefined1 *)(unaff_EDI + 0x460) = 0;
  iVar4 = 0;
  *(float *)(unaff_EDI + 0x3d4) =
       SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18);
  *(float *)(unaff_EDI + 0x2f0) =
       *(float *)(unaff_EDI + 0x3d0) / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x20);
  *(float *)(unaff_EDI + 0x2f4) =
       *(float *)(unaff_EDI + 0x3d0) / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x50);
  *(float *)(unaff_EDI + 0x2f8) =
       *(float *)(unaff_EDI + 0x3d0) / *(float *)(*(int *)(unaff_EDI + 0x20) + 0x80);
  *(float *)(unaff_EDI + 0x2fc) =
       *(float *)(unaff_EDI + 0x3d0) / *(float *)(*(int *)(unaff_EDI + 0x20) + 0xb0);
  *(undefined2 *)(*(int *)(unaff_EDI + 0x30) + 0x1d0) = 0;
  (**(code **)(**(int **)(unaff_EDI + 0x30) + 0x58))();
  (**(code **)(**(int **)(unaff_EDI + 0x30) + 0x68))();
  do {
    FUN_00465150(unaff_EDI + 0x40);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  (**(code **)(**(int **)(unaff_EDI + 0x30) + 0x34))();
  if (DAT_007798e0 == 0) {
    FUN_00426110();
  }
  if ((*(int *)(*(int *)(unaff_EDI + 0x14) + 4) == 1) &&
     (*(char *)(*(int *)(unaff_EDI + 0x14) + 0x734) == '\0')) {
    FUN_00572970(0xc2c60000,"Invalidate");
    iVar4 = *(int *)(unaff_EDI + 0x18);
    _DAT_0073654c = 0;
    *(undefined1 *)(iVar4 + 0x270) = 0;
    *(undefined4 *)(iVar4 + 0xb8) = 0;
    *(undefined4 *)(iVar4 + 0xb4) = 0;
    if (*(int **)(iVar4 + 0x27c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x27c) + 0x34))();
      iVar3 = (*(int **)(iVar4 + 0x27c))[3];
      if ((iVar3 == 1) || (iVar3 == 0x11)) {
        (**(code **)(**(int **)(iVar4 + 0x27c) + 0x14))(*(undefined1 *)(iVar4 + 0x4ad));
      }
    }
    *(undefined4 *)(iVar4 + 0x520) = 0;
  }
  FUN_0057a380();
  return;
}

