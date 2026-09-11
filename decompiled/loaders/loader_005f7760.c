/* Decompiled from Speed.exe @ 005f7760 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 __thiscall FUN_005f7760(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint uVar8;
  
  uVar1 = param_2 & 0xffffff;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = param_4;
  if (param_5 != 0) goto LAB_005f7924;
  uVar4 = param_2 & 0xf0000000;
  if (uVar4 == 0) {
    uVar1 = 0;
    goto LAB_005f78f0;
  }
  uVar8 = uVar1;
  uVar5 = uVar1;
  if (uVar4 != 0x10000000) {
    if (uVar4 == 0x20000000) {
      uVar8 = uVar1 * 2;
    }
    else if (uVar4 == 0x30000000) {
      uVar4 = param_2 & 0xff000000;
      if (uVar4 == 0x30000000) {
        uVar1 = uVar1 * 2;
        uVar8 = uVar1;
        uVar5 = param_4;
        if (param_4 == 0xffffffff) {
LAB_005f78cc:
          uVar8 = uVar1;
          uVar5 = 1;
        }
      }
      else if (uVar4 == 0x31000000) {
        uVar8 = 0;
      }
      else {
        if (uVar4 != 0x32000000) {
          if (uVar4 == 0x33000000) goto LAB_005f78f2;
          if (uVar4 != 0x34000000) {
            if (uVar4 != 0x35000000) goto LAB_005f78bd;
            goto LAB_005f78cc;
          }
        }
LAB_005f78f0:
        uVar8 = uVar1;
        uVar5 = 0;
      }
    }
    else if (uVar4 == 0x40000000) {
      param_2 = param_2 & 0xff000000;
      if (param_2 < 0x48000001) {
        if (param_2 == 0x48000000) {
LAB_005f7843:
          uVar8 = 6;
        }
        else {
          if (param_2 < 0x44000001) {
            if ((param_2 == 0x44000000) || (param_2 == 0x40000000)) {
              uVar8 = 4;
              uVar5 = 4;
              goto LAB_005f78f2;
            }
            if ((param_2 != 0x41000000) && (param_2 != 0x42000000)) {
              bVar7 = param_2 == 0x43000000;
              goto LAB_005f7817;
            }
          }
          else if ((param_2 != 0x45000000) && (param_2 != 0x46000000)) {
            bVar7 = param_2 == 0x47000000;
LAB_005f7817:
            uVar8 = param_3;
            uVar5 = param_4;
            if (!bVar7) goto LAB_005f78f2;
          }
LAB_005f781d:
          uVar8 = 8;
        }
      }
      else {
        if (param_2 != 0x49000000) {
          if ((param_2 != 0x4a000000) && (param_2 != 0x4b000000)) {
            if (param_2 == 0x4c000000) goto LAB_005f7843;
            if (param_2 == 0x4d000000) goto LAB_005f787f;
            if (param_2 != 0x4e000000) {
              bVar7 = param_2 == 0x4f000000;
              goto LAB_005f7817;
            }
          }
          goto LAB_005f781d;
        }
LAB_005f787f:
        uVar8 = 0xc;
      }
      uVar5 = 4;
    }
    else {
      uVar8 = param_3;
      uVar5 = param_4;
      if (uVar4 == 0x50000000) {
LAB_005f78bd:
        uVar8 = param_3;
        uVar5 = param_4;
        if ((param_2 & 0xff000000) == 0x50000000) {
          uVar8 = uVar1 * 3;
          uVar5 = uVar1;
        }
      }
    }
  }
LAB_005f78f2:
  if (param_1[1] == 0xffffffff) {
    param_1[1] = uVar8;
  }
  if (param_1[3] == 0xffffffff) {
    param_1[3] = uVar5;
  }
  if ((((param_1[1] != uVar8) || (param_1[3] != uVar5)) || (param_1[1] == 0xffffffff)) ||
     (param_1[3] == 0xffffffff)) {
    return 0x80004005;
  }
LAB_005f7924:
  pvVar2 = _malloc(param_1[1] << 2);
  param_1[2] = (uint)pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = _malloc(param_1[3] << 2);
    param_1[4] = (uint)pvVar2;
    if (pvVar2 != (void *)0x0) {
      puVar6 = (undefined4 *)param_1[2];
      for (uVar1 = param_1[1] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      puVar6 = (undefined4 *)param_1[4];
      for (uVar1 = param_1[3] & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar6 = 0xffffffff;
        puVar6 = puVar6 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined1 *)puVar6 = 0xff;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      return 0;
    }
  }
  return 0x8007000e;
}

