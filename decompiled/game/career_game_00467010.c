/* Decompiled from Speed.exe @ 00467010 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00467010(uint param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  short local_14 [2];
  short local_10 [2];
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  iVar4 = param_1;
  FUN_00571ea0(0,"AllCollisionBodyWitnesses");
  if (*(char *)(iVar4 + 0x3d) == '\0') {
    FUN_00571c20(iVar4,&DAT_00736000,2,4,1);
    if (DAT_00779be0 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = DAT_00779be0 + -0x250;
    }
    iVar5 = FUN_00421970();
    while (iVar7 != iVar5) {
      param_1 = (uint)*(ushort *)(*(int *)(iVar7 + 600) + 0x18);
      local_4 = (uint)*(ushort *)(*(int *)(iVar7 + 0x25c) + 0x18);
      FUN_00571c20(iVar4,&param_1,2,2,1);
      FUN_00571c20(iVar4,&local_4,2,2,1);
      FUN_00466f70(iVar4);
      if (*(int *)(iVar7 + 0x250) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar7 + 0x250) + -0x250;
      }
    }
  }
  else {
    FUN_00571c20(iVar4,&param_1,2,2,1);
    local_4 = 0;
    if (0 < (short)param_1) {
      do {
        FUN_00571c20(iVar4,local_14,2,2,1);
        FUN_00571c20(iVar4,local_10,2,2,1);
        iVar7 = DAT_0072cc00;
        if (local_14[0] < 0) {
          local_8 = 0;
        }
        else {
          local_8 = *(undefined4 *)(DAT_00736050 + local_14[0] * 4);
        }
        if (local_10[0] < 0) {
          local_c = 0;
        }
        else {
          local_c = *(undefined4 *)(DAT_00736050 + local_10[0] * 4);
        }
        puVar1 = (undefined4 *)(DAT_0072cc00 + 0x10);
        if ((*(int *)(DAT_0072cc00 + 0x10) == 0) && ((*(byte *)(DAT_0072cc00 + 0x14) & 1) != 0)) {
          FUN_00566e60();
        }
        puVar8 = (undefined4 *)*puVar1;
        iVar5 = *(int *)(iVar7 + 0x18) + 1;
        if (puVar8 != (undefined4 *)0x0) {
          uVar3 = *puVar8;
          if (*(int *)(iVar7 + 0x1c) < iVar5) {
            *(int *)(iVar7 + 0x1c) = iVar5;
          }
          *(int *)(iVar7 + 0x18) = iVar5;
          bVar2 = *(byte *)(iVar7 + 0x14);
          *puVar1 = uVar3;
          if (((bVar2 & 2) != 0) && (iVar7 = *(int *)(iVar7 + 0x28) >> 2, 0 < iVar7)) {
            for (; iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar8 = 0;
              puVar8 = puVar8 + 1;
            }
          }
          FUN_00466ce0(local_c);
        }
        FUN_00466f70(iVar4);
        local_4 = local_4 + 1;
      } while ((int)local_4 < (int)(short)param_1);
    }
  }
  iVar7 = *(char *)(iVar4 + 0x40) * 0x10 + 0x4c + iVar4;
  *(int *)(iVar7 + 0xc) = *(int *)(iVar4 + 0x150) - *(int *)(iVar7 + 0xc);
  cVar6 = *(char *)(iVar4 + 0x40) + -1;
  *(char *)(iVar4 + 0x40) = cVar6;
  if ((int)cVar6 < *(int *)(iVar4 + 0x44)) {
    *(undefined4 *)(iVar4 + 0x44) = 0xffffffff;
  }
  return;
}

