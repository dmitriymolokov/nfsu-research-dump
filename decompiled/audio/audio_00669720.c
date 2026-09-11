/* Decompiled from Speed.exe @ 00669720 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00669720(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_retaddr;
  undefined2 local_14;
  undefined2 local_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  if (DAT_00717934 != (undefined4 *)0x0) {
    DAT_00717930 = DAT_00717930 + 1;
    return DAT_00717934;
  }
  puVar1 = (undefined4 *)FUN_00549460(0x50);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    if (param_1 < 4) {
      param_1 = 4;
    }
    puVar2 = (undefined4 *)FUN_00549460(param_1 * 0x104);
    puVar1[10] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      puVar1[0xb] = puVar2 + param_1 * 0x41;
      uVar4 = (int)(puVar2 + param_1 * 0x41) - (int)puVar2;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar2 = 0;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar1[0x13] = 1;
      iVar3 = FUN_00662c30(2,2,0);
      if (iVar3 != 0) {
        DAT_00717930 = 1;
        DAT_00717934 = puVar1;
        FUN_00668cc0(puVar1);
        FUN_00668d60(puVar1);
        local_14 = 2;
        local_10 = 0;
        local_c = 0;
        local_8 = 0;
        local_12 = 0xf27;
        FUN_00662d70(iVar3,&local_14,0x10);
        puVar1[0xf] = 0xf270002;
        puVar1[0x10] = 0xffffffff;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0xc] = 1;
        puVar1[0xe] = iVar3;
        FUN_00663160(iVar3,2,100,puVar1,FUN_00669060);
        FUN_00668df0(puVar1);
        FUN_00668ff0();
        return puVar1;
      }
    }
    FUN_00447030(puVar1);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

