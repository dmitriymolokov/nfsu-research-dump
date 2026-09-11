/* Decompiled from Speed.exe @ 005d99dd */
/* Module: Loader */
/* Ghidra DecompileAll */


bool FUN_005d99dd(undefined4 *param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *local_c;
  uint local_8;
  
  if (param_2 == 2) {
    bVar5 = false;
    if (param_3 * param_4 != 0) {
      piVar1 = (int *)FUN_005f762c(*param_1);
      if (((piVar1 == (int *)0x0) || (iVar2 = FUN_005f7616(*piVar1), iVar2 == 0)) ||
         ((*(byte *)(iVar2 + 4) & 0x20) == 0)) {
LAB_005d9a21:
        bVar5 = true;
      }
      else {
        param_2 = 0;
        if (param_3 != 0) {
          local_c = param_1;
          do {
            local_8 = 0;
            if (param_4 != 0) {
              param_1 = (undefined4 *)0x0;
              puVar4 = local_c;
              do {
                piVar3 = (int *)FUN_005f762c(*puVar4);
                if (((piVar3 == (int *)0x0) || (*piVar1 != *piVar3)) ||
                   (((param_2 >> 2) + piVar1[2] + (int)param_1 != piVar3[2] ||
                    ((param_2 & 3) + piVar1[3] != piVar3[3])))) goto LAB_005d9a21;
                local_8 = local_8 + 1;
                param_1 = (undefined4 *)((int)param_1 + (param_3 + 3 >> 2));
                puVar4 = puVar4 + 1;
              } while (local_8 < param_4);
            }
            param_2 = param_2 + 1;
            local_c = local_c + param_4;
          } while (param_2 < param_3);
        }
        bVar5 = false;
      }
    }
  }
  else {
    bVar5 = param_3 == 1;
  }
  return bVar5;
}

