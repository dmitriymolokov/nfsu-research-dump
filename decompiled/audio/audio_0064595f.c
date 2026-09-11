/* Decompiled from Speed.exe @ 0064595f */
/* Module: Audio */
/* Ghidra DecompileVAs */


int __fastcall FUN_0064595f(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int local_38;
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_20 [4];
  int local_1c;
  int local_c;
  
  local_c = FUN_00645fa0();
  local_30 = local_c - *(int *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_0064e520();
    uVar1 = FUN_00647b90(local_2c);
    FUN_0064fa60(uVar1);
    FUN_0064f900(local_28,local_20);
    FUN_0064e540();
    iVar2 = FUN_0064f8e0();
    local_1c = local_1c - iVar2;
    if (*(int *)(param_1 + 0x50) < local_1c) {
      *(int *)(param_1 + 0x50) = local_1c;
      *(int *)(param_1 + 0x58) =
           (*(int *)(param_1 + 0x58) -
           ((int)(*(int *)(param_1 + 0x58) + (*(int *)(param_1 + 0x58) >> 0x1f & 7U)) >> 3)) +
           (local_1c - local_30);
      if (-*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x58)) {
        local_38 = *(int *)(param_1 + 0x58);
      }
      else {
        local_38 = -*(int *)(param_1 + 0x58);
      }
      if (0x108 < local_38) {
        *(int *)(param_1 + 0x4c) =
             *(int *)(param_1 + 0x4c) -
             ((int)(*(int *)(param_1 + 0x58) + (*(int *)(param_1 + 0x58) >> 0x1f & 7U)) >> 3);
        *(undefined4 *)(param_1 + 0x58) = 0;
        local_30 = local_c - *(int *)(param_1 + 0x4c);
      }
    }
  }
  return local_30;
}

