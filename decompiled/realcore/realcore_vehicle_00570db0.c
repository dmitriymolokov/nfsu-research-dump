/* Decompiled from Speed.exe @ 00570db0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileVAs */


void FUN_00570db0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_ESI;
  int local_2a8;
  undefined1 local_290 [32];
  float local_270;
  float local_26c;
  float local_268;
  undefined1 local_250 [40];
  float local_228;
  undefined1 local_210 [256];
  undefined1 local_110 [268];
  
  if (((DAT_006f1ad0 != 0) && (DAT_0077a920 == 6)) && (*DAT_007361f0 != 1)) {
    iVar6 = (&DAT_007361bc)[*(int *)(unaff_ESI + 4) != 4];
    iVar3 = FUN_0041ff50();
    local_2a8 = (int)*(short *)(iVar3 + 8);
    iVar3 = *(int *)(iVar6 + 0x27c);
    iVar4 = FUN_00421c40();
    if (((iVar4 == 0) && (*(int *)(iVar6 + 0x60) == 0)) &&
       ((iVar3 == 0 || ((iVar6 = *(int *)(iVar3 + 0xc), iVar6 != 2 && (iVar6 != 4)))))) {
      iVar6 = local_2a8 + 1;
    }
    else {
      iVar6 = *(int *)(DAT_007361f8 + 0x20);
      local_2a8 = 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x40);
    if (local_2a8 < iVar6) {
      iVar4 = local_2a8 * 4 + 0x28;
      do {
        iVar1 = *(int *)(iVar4 + DAT_007361f8);
        if ((((*(int *)(iVar3 + 0x280) != iVar1) && (*(char *)(iVar1 + 0x4d0) != '\0')) &&
            (iVar5 = FUN_00570b90(), iVar5 == 0)) &&
           ((*(uint *)(iVar1 + 0x534) & 1 << ((byte)*(undefined4 *)(unaff_ESI + 4) & 0x1f)) != 0)) {
          FUN_004010a0(local_110,0x40,4,FUN_004ad8d0);
          FUN_004010a0(local_210,0x40,4,FUN_004ad8d0);
          FUN_0042a120(iVar1);
          uVar2 = *(undefined4 *)(iVar1 + 0x4d4);
          FUN_00401cd0();
          if (*(int *)(iVar1 + 0x3cc) < 3) {
            FUN_00565020();
            local_228 = -local_228;
            thunk_FUN_005ac68f(local_290,local_290,local_250);
          }
          else {
            local_270 = -local_270;
            local_26c = -local_26c;
            local_268 = -local_268;
          }
          FUN_0056dc30(uVar2);
        }
        local_2a8 = local_2a8 + 1;
        iVar4 = iVar4 + 4;
      } while (local_2a8 < iVar6);
    }
  }
  return;
}

