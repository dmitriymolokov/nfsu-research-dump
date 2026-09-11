/* Decompiled from Speed.exe @ 006047ce */
/* Module: EAGL */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __fastcall FUN_006047ce(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  int local_8;
  
  uVar3 = **(uint **)(param_1 + 0x98);
  if ((uVar3 & 0xff000000) == 0x11000000) {
    uVar3 = uVar3 & 0xffffff;
    piVar1 = (int *)(*(uint **)(param_1 + 0x98))[2];
    iVar2 = *(int *)(param_1 + 0x14);
    bVar11 = (*(byte *)(*(int *)(*(int *)(param_1 + 0x10) + **(int **)(iVar2 + *piVar1 * 4) * 4) + 5
                       ) & 1) != 0;
    uVar6 = uVar3;
    if ((*(byte *)(param_1 + 0x92) & 1) != 0) {
      for (; uVar6 != 0; uVar6 = uVar6 - 1) {
        iVar8 = *(int *)(iVar2 + *piVar1 * 4);
        if ((*(uint *)(iVar8 + 0x20) & 0x200) != 0) {
          bVar11 = true;
        }
        if (*(int *)(iVar8 + 0x24) != -1) {
          iVar8 = *(int *)(iVar2 + *(int *)(iVar8 + 0x24) * 4);
        }
        if ((*(uint *)(iVar8 + 0x20) & 0x200) != 0) {
          bVar11 = true;
        }
        piVar1 = piVar1 + 1;
      }
    }
    if (bVar11) {
      pvVar4 = _malloc(0x38);
      if (pvVar4 == (void *)0x0) {
        local_8 = 0;
      }
      else {
        local_8 = FUN_005f7709();
      }
      iVar8 = local_8;
      if (local_8 == 0) {
        iVar2 = -0x7ff8fff2;
      }
      else {
        iVar2 = FUN_005f7760(uVar3 | 0x25000000,uVar3 * 2,uVar3,0);
        if ((-1 < iVar2) && (iVar2 = FUN_005f7a42(), -1 < iVar2)) {
          iVar2 = FUN_005f7478(&DAT_0069ecd8,0x189,1,4);
          if ((iVar2 == -1) || (iVar2 = FUN_005f74cf(iVar2,0,0,_DAT_0069f3c8), iVar2 == -1)) {
            iVar2 = -0x7ff8fff2;
          }
          else {
            iVar5 = uVar3 << 2;
            puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 8);
            puVar10 = *(undefined4 **)(local_8 + 8);
            for (uVar6 = uVar3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            puVar9 = *(undefined4 **)(*(int *)(param_1 + 0x98) + 0x10);
            puVar10 = *(undefined4 **)(local_8 + 0x10);
            for (uVar6 = uVar3; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar10 = *puVar9;
              puVar9 = puVar9 + 1;
              puVar10 = puVar10 + 1;
            }
            for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
              puVar9 = (undefined4 *)((int)puVar9 + 1);
              puVar10 = (undefined4 *)((int)puVar10 + 1);
            }
            for (; uVar3 != 0; uVar3 = uVar3 - 1) {
              *(int *)(iVar5 + *(int *)(local_8 + 8)) = iVar2;
              iVar5 = iVar5 + 4;
            }
            if (*(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x94) * 4) != 0) {
              FUN_005f7186();
            }
            local_8 = 0;
            *(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x94) * 4) = iVar8;
            iVar2 = 0;
          }
        }
        if (local_8 != 0) {
          FUN_005f7186();
        }
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

