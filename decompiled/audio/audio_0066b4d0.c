/* Decompiled from Speed.exe @ 0066b4d0 */
/* Module: Audio */
/* Ghidra DecompileAll */


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall FUN_0066b4d0(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint unaff_retaddr;
  undefined4 local_18;
  undefined1 local_14 [8];
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_4;
  
  local_4 = DAT_006eb720 ^ unaff_retaddr;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x80)) {
    while( true ) {
      if (3 < *(int *)(param_1 + 0x80)) {
        return;
      }
      if (iVar4 < 0) {
        return;
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x9c) + *(int *)(param_1 + 0x94));
      pbVar1 = (byte *)(puVar5 + 2);
      local_18 = 0x10;
      iVar3 = FUN_00662f00(*(undefined4 *)(param_1 + 0x6c),pbVar1,*(undefined4 *)(param_1 + 0x88),0,
                           local_14,&local_18);
      if (iVar3 < 1) break;
      puVar5[1] = iVar3;
      bVar2 = *pbVar1;
      *puVar5 = CONCAT31(CONCAT21(CONCAT11(local_c,local_b),local_a),local_9);
      if ((bVar2 < 0x10) || (0x3f < bVar2)) {
        if (bVar2 < 0xc0) {
          iVar4 = FUN_0066b360(puVar5);
          if (((iVar4 == 1) && (bVar2 = *pbVar1, 0x7f < bVar2)) && (bVar2 < 0xc0)) {
            FUN_0066b1a0(bVar2 + 0x40);
          }
        }
        else {
          FUN_0066b250();
        }
      }
      else {
        FUN_0066b290(puVar5);
      }
      if (*(int *)(param_1 + 0x80) < 1) {
        return;
      }
    }
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x80) = 4;
    }
  }
  return;
}

