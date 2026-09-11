/* Decompiled from Speed.exe @ 004b6390 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6390(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int aiStack_e68 [456];
  undefined4 local_748;
  undefined1 local_730 [1836];
  
  uVar1 = DAT_00734660;
  iVar4 = DAT_006f1d64;
  iVar3 = DAT_006f1d58;
  DAT_0078a2f0 = DAT_0070095c;
  if (DAT_0070095c == -1) {
    if ((DAT_00736168 == 0) || (iVar2 = DAT_00736168, DAT_0073616c < 1)) {
      iVar2 = 0;
    }
    DAT_0078a2f0 = (int)*(short *)(iVar2 + 0x6c);
  }
  if (DAT_007346c4 != 0) {
    DAT_0078a347 = 1;
  }
  DAT_0078a2fc = DAT_00734664;
  DAT_0078a30c = DAT_006f1d7c;
  _DAT_0078a304 = DAT_006f1d78;
  DAT_0078a320 = DAT_006f1d48;
  DAT_0078a31c = DAT_006f1d4c;
  _DAT_0078a360 = DAT_006f1d5c;
  _DAT_0078a354 = DAT_006f1d54;
  DAT_0078a300 = DAT_00734674;
  DAT_0078a336 = DAT_006f1da0 != 0;
  DAT_0078a387 = DAT_00734684;
  DAT_0078a318 = DAT_00734680;
  DAT_0078a386 = DAT_006f1d90;
  DAT_0078a350 = DAT_00734668;
  DAT_0078a344 = DAT_00734678 != 0;
  _DAT_0078a35c = DAT_006f1d60;
  DAT_0078a3bf = DAT_00734688;
  _DAT_0078a2f4 = 0;
  _DAT_0078a2f8 = 3;
  DAT_0078a33c = 0;
  DAT_0078a324 = DAT_00734660;
  _DAT_0078a358 = DAT_006f1d58;
  _DAT_0078a364 = DAT_006f1d64;
  DAT_0078a368 = DAT_0073466c;
  DAT_0078a3be = DAT_006f1d94;
  if (!(bool)DAT_0078a344) {
    DAT_0078a345 = DAT_0073467c != 0;
  }
  if (DAT_0073466c != 0) {
    DAT_0078a310 = 1200000;
  }
  if ((DAT_0078a346 != '\0') || (DAT_007361a0 != 0)) {
    DAT_0078a314 = FUN_00674898();
  }
  _DAT_0078a378 = -(uint)(iVar4 != 0) & 3;
  DAT_0078a3fc = DAT_006f1d84;
  _DAT_0078a37c = DAT_006f1d84;
  _DAT_0078a374 = -(uint)(iVar3 != 0) & 3;
  DAT_0078a334 = (char)uVar1 + '\x01';
  DAT_0078a335 = (char)uVar1 + '\x02';
  DAT_0078a391 = DAT_006f1d68;
  DAT_0078a3c9 = DAT_006f1d68;
  DAT_0078a388 = DAT_00734670;
  DAT_0078a3c0 = DAT_00734670;
  DAT_0078a390 = DAT_00734670;
  DAT_0078a3c8 = DAT_00734670;
  iVar3 = 0;
  DAT_0078a392 = DAT_006f1d6c;
  DAT_0078a393 = DAT_006f1d70;
  DAT_0078a3ca = DAT_006f1d6c;
  DAT_0078a3cb = DAT_006f1d70;
  if (0 < DAT_006f1d48) {
    do {
      (&DAT_0078a348)[iVar3] = (&DAT_00748f78)[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0078a320);
  }
  iVar3 = 0;
  _DAT_0078a404 = 0x3f800000;
  _DAT_0078a408 = 0x3f800000;
  if (0 < DAT_0078a320) {
    do {
      FUN_00417600();
      FUN_004ac0f0(local_730);
      FUN_005809c0(iVar3,1,local_730,"SkipFE",0xfffffffe,0,(int)(&DAT_0078a334)[iVar3]);
      iVar4 = 0;
      do {
        if ((DAT_006f1e04 < 0) || (3 < DAT_006f1e04)) {
          *(undefined4 *)((int)aiStack_e68 + iVar4) = *(undefined4 *)((int)&DAT_00734698 + iVar4);
        }
        else {
          *(int *)((int)aiStack_e68 + iVar4) = DAT_006f1e04;
        }
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0x2c);
      local_748 = 0x3f800000;
      FUN_004322a0(&DAT_0078a2f0);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0078a320);
  }
  if (DAT_007346c4 == 0) {
    if ((DAT_0078a345 != '\0') || (DAT_007361a4 != 0)) {
      FUN_0043de90(0);
    }
    FUN_004b4040(DAT_0078a324,0);
    FUN_004b3ac0();
    if (DAT_006f1d98 != -1) {
      FUN_004b6300(DAT_006f1d98);
    }
    if (DAT_006f1d9c != -1) {
      FUN_004b6300(DAT_006f1d9c);
    }
    if (DAT_0077a920 != 3) {
      if (DAT_0077a918 != '\0') {
        DAT_0077a918 = '\0';
      }
      DAT_0077a904 = &LAB_00449250;
      _DAT_0077a90c = "LoadingTrackCommon";
      return;
    }
    if (DAT_0077a918 != '\0') {
      DAT_0077a918 = '\0';
    }
    DAT_0077a904 = &LAB_00448d10;
    _DAT_0077a90c = "UnloadingFrontEnd";
    return;
  }
  FUN_0043ab70();
  return;
}

