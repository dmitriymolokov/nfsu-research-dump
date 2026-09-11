/* Decompiled from Speed.exe @ 00653a20 */
/* Module: Audio */
/* Ghidra DecompileVAs */

#pragma optimize("", off)

static int audio_call0(int *iface)
{
  code *fn;
  int r;
  fn = (code *)(*(void **)(*(int *)iface + 0x10));
  r = fn();
  return r;
}

static int audio_call4(int *iface, void *a, int b, int c)
{
  code *fn;
  int r;
  fn = (code *)(*(void **)(*(int *)iface + 0x10));
  r = fn(iface, a, b, c);
  return r;
}

static int audio_call7(int *iface, void *a, int b, int c, int d, void *e, int f)
{
  code *fn;
  int r;
  fn = (code *)(*(void **)(*(int *)iface + 0x10));
  r = fn(iface, a, b, c, d, e, f);
  return r;
}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00653a20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *iface;
  float fStack_3c;
  undefined4 *puStack_38;
  float fStack_34;
  int *piStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  int local_c [3];
  
  local_c[1] = 0x3f800000;
  local_c[0] = 9;
  DAT_007160b8 = param_1;
  DAT_007160bc = param_2;
  DAT_007160c0 = param_3;
  if (DAT_00714075 == '\0') {
    return 0xffffffff;
  }
  if ((param_1 == 0) || (param_1 == 1)) {
    param_2 = -1;
    param_3 = -1;
    local_c[1] = 0;
  }
  else if (param_1 != 2) {
    if (param_1 == 3) {
      local_c[0] = 0xb;
    }
    else if (param_1 == 5) {
      local_c[0] = 4;
    }
    else if (param_1 == 10) {
      local_c[0] = 2;
    }
    else if (param_1 == 0xd) {
      local_c[0] = 0x13;
    }
    else if (param_1 == 0xf) {
      local_c[0] = param_1;
    }
    else if (param_1 == 0x11) {
      local_c[0] = param_1;
    }
    else if (param_1 == 0x14) {
      local_c[0] = 0x10;
    }
    else if (param_1 == 0x17) {
      local_c[0] = 0x14;
    }
    else if (param_1 == 0x19) {
      local_c[0] = 0xc;
    }
    else if (param_1 == 0x1b) {
      local_c[0] = 0xe;
    }
    else if (param_1 == 0x1e) {
      local_c[0] = 0;
    }
    else if (param_1 == 0x20) {
      local_c[0] = 5;
    }
    else if (param_1 == 0x21) {
      local_c[0] = 3;
    }
    else if (param_1 == 0x22) {
      local_c[0] = 0x12;
    }
    else if (param_1 == 0x23) {
      local_c[0] = 0x15;
    }
    else if (param_1 == 0x24) {
      local_c[0] = 8;
    }
    else if (param_1 == 0x25) {
      local_c[0] = 0xd;
    }
    else if (param_1 == 0x26) {
      local_c[0] = 6;
    }
    else if (param_1 == 0x28) {
      local_c[0] = 7;
    }
    else if (param_1 == 0x32) {
      local_c[0] = 9;
    }
    else if (param_1 == 0x37) {
      local_c[0] = 10;
    }
    else if (param_1 == 0x3c) {
      local_c[0] = 0x16;
    }
    else if (param_1 == 0x46) {
      local_c[0] = 0x18;
    }
    else if (param_1 == 0x49) {
      local_c[0] = 0x17;
    }
    else if (param_1 == 0x4c) {
      local_c[0] = 0x19;
    }
    else if ((99 < param_1) && (param_1 < 0x79)) {
      local_c[0] = 10;
    }
    goto LAB_00653c4d;
  }
  local_c[0] = 1;
LAB_00653c4d:
  iface = (int *)DAT_007160b0;
  uStack_18 = 4;
  piStack_1c = local_c;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 1;
  puStack_2c = &DAT_006aab58;
  piStack_30 = iface;
  fStack_34 = 9.297058e-39;
  iVar1 = audio_call0(iface);
  if (iVar1 == 0) {
    fStack_34 = 5.60519e-45;
    puStack_38 = &uStack_24;
    fStack_3c = 0.0;
    iVar1 = audio_call4(iface, &DAT_006aab58, 2, 0);
    if (iVar1 == 0) {
      if (param_2 != -1) {
        fStack_34 = (float)(int)piStack_30 * _DAT_006aaa30;
        iVar1 = audio_call7(iface, &DAT_006aab58, 3, 0, 0, &fStack_34, 4);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      if (param_3 != -1) {
        fStack_3c = (float)(int)puStack_2c * _DAT_006aaa2c;
        iVar1 = audio_call7(iface, &DAT_006aab58, 4, 0, 0, &fStack_3c, 4);
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      return 0;
    }
  }
  return 0xffffffff;
}

#pragma optimize("", on)
