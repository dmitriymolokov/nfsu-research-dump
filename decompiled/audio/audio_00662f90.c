/* Decompiled from Speed.exe @ 00662f90 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00662f90(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint unaff_retaddr;
  int iVar4;
  undefined4 uStack_148;
  undefined4 *puStack_144;
  undefined4 *puStack_140;
  undefined1 *puStack_13c;
  int iStack_138;
  undefined4 *puStack_134;
  undefined1 local_118 [4];
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (param_3 != (undefined4 *)0x0) {
    puVar3 = param_3;
    for (uVar2 = param_4 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
      *(undefined1 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  iStack_138 = *(int *)(param_1 + 0x18);
  if (iStack_138 == -1) {
    return 0xfffffff9;
  }
  if (param_2 != 0x636f6e6e) {
    if (param_2 == 0x62696e64) {
      puStack_134 = param_3;
      puStack_13c = (undefined1 *)0x663024;
      Ordinal_6();
      return 0;
    }
    if (param_2 != 0x70656572) {
      if (param_2 != 0x73746174) {
        return 0xffffffff;
      }
      puStack_134 = (undefined4 *)local_118;
      puStack_13c = (undefined1 *)0x663097;
      iVar1 = Ordinal_5();
      puStack_13c = (undefined1 *)0x66309c;
      iVar1 = FUN_00662ad0(iVar1);
      if (iVar1 == -2) {
        return 0;
      }
      uStack_110 = *(undefined4 *)(param_1 + 0x18);
      puStack_13c = &stack0xfffffed4;
      puStack_140 = &uStack_114;
      puStack_144 = &uStack_114;
      uStack_148 = 0;
      uStack_114 = 1;
      iVar1 = Ordinal_18(1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar4 = 0x1007;
      uStack_148 = 4;
      iVar1 = Ordinal_7(*(undefined4 *)(param_1 + 0x18),0xffff,0x1007,&puStack_144,&uStack_148);
      if (iVar1 != 0) {
        return 0;
      }
      if (iVar4 != 0) {
        return 0;
      }
      return 1;
    }
  }
  puStack_134 = param_3;
  puStack_13c = (undefined1 *)0x663057;
  Ordinal_5();
  return 0;
}

