/* Decompiled from Speed.exe @ 005e6d03 */
/* Module: Loader */
/* Ghidra DecompileAll */


int __fastcall FUN_005e6d03(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_54;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  uint local_48;
  undefined1 local_44 [4];
  uint local_40;
  undefined1 local_3c [12];
  undefined1 local_30 [20];
  int local_1c;
  int local_18;
  uint local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int local_8;
  
  FUN_0061314d(0x47554244);
  puVar7 = &local_54;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  iVar4 = 0;
  local_54 = 0x28;
  local_10 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  local_8 = FUN_0061319b(&local_54,0x28,1,0);
  if (local_8 < 0) goto LAB_005e6fc6;
  for (iVar1 = param_1[0xd]; iVar8 = iVar4, iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if ((*(int *)(iVar1 + 8) != 0) && (*(int *)(*(int *)(iVar1 + 8) + 4) == 0x11)) {
      iVar4 = *(int *)(iVar1 + 8);
      iVar8 = iVar4;
      break;
    }
  }
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
    local_40 = local_40 + 1;
  }
  if (local_40 == 0) {
LAB_005e6ea4:
    if ((((param_1[0x1d] == 0) ||
         (local_8 = FUN_0061319b(param_1[0x1d],0xffffffff,7,local_30), -1 < local_8)) &&
        ((param_1[0x1b] == 0 ||
         ((iVar4 = FUN_0061319b(param_1[0x1b],param_1[0x1c],5,local_4c), -1 < iVar4 &&
          (iVar4 = FUN_0061319b(&DAT_006b9172,1,5,0), -1 < iVar4)))))) &&
       (iVar4 = FUN_0061319b(PTR_s_D3DX9_Shader_Assembler_006def50,0xffffffff,5,local_50),
       -1 < iVar4)) {
      uVar2 = FUN_006132d2();
      if (uVar2 < 0x8001) {
        local_8 = FUN_005e621b(uVar2);
        if (local_8 < 0) goto LAB_005e6fc6;
        _memmove((void *)(param_1[0x16] + 4 + uVar2 * 4),(void *)(param_1[0x16] + 4),
                 param_1[0x17] * 4 - 4);
        uVar5 = 0;
        if (local_40 != 0) {
          piVar3 = local_c + 1;
          do {
            *piVar3 = *piVar3 + (param_1[0x1a] + uVar2) * 4;
            uVar5 = uVar5 + 1;
            piVar3 = piVar3 + 2;
          } while (uVar5 < local_40);
        }
        local_8 = FUN_006132de(param_1[0x16] + 4,uVar2);
        if (local_8 < 0) goto LAB_005e6fc6;
        param_1[0x17] = param_1[0x17] + uVar2;
        param_1[0x1a] = param_1[0x1a] + uVar2;
        param_1[0x19] = param_1[0x17];
      }
      else {
        FUN_005b1fca(*param_1,param_1 + 4,0x7ee,
                     "debug info exceeds maximum comment size; no debug info emitted");
      }
      local_8 = 0;
    }
  }
  else {
    local_10 = _malloc(local_40 << 2);
    uVar2 = local_40;
    puVar7 = local_10;
    if (local_10 != (undefined4 *)0x0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      local_c = _malloc(local_40 << 3);
      if (local_c != (undefined4 *)0x0) {
        local_1c = local_40 << 3;
        puVar7 = local_c;
        for (iVar4 = (local_40 & 0x1fffffff) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        if (iVar8 != 0) {
          puVar6 = (undefined2 *)((int)local_c + local_40 * 8 + -6);
          do {
            *puVar6 = 0xffff;
            puVar6[-1] = *(undefined2 *)(iVar8 + 0x24);
            *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(iVar8 + 0x58);
            if (*(int *)(iVar8 + 0x20) != 0) {
              iVar4 = FUN_0061319b(*(int *)(iVar8 + 0x20),0xffffffff,7,&local_18);
              if (iVar4 < 0) goto LAB_005e6fc6;
              local_14 = 0;
              if (local_48 != 0) {
                do {
                  if (local_10[local_14] == local_18) break;
                  local_14 = local_14 + 1;
                } while (local_14 < local_48);
              }
              if (local_14 == local_48) {
                local_10[local_48] = local_18;
                local_48 = local_48 + 1;
              }
              *puVar6 = (short)local_14;
            }
            iVar8 = *(int *)(iVar8 + 0xc);
            puVar6 = puVar6 + -4;
          } while (iVar8 != 0);
        }
        if (((local_48 != 0) &&
            (local_8 = FUN_0061319b(local_10,local_48 << 2,1,local_44), local_8 < 0)) ||
           (local_8 = FUN_0061319b(local_c,local_1c,1,local_3c), local_8 < 0)) goto LAB_005e6fc6;
        goto LAB_005e6ea4;
      }
    }
    local_8 = -0x7ff8fff2;
  }
LAB_005e6fc6:
  _free(local_10);
  _free(local_c);
  FUN_00613165();
  return local_8;
}

