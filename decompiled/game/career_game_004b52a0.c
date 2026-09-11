/* Decompiled from Speed.exe @ 004b52a0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b52a0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *local_e98;
  int local_e94;
  undefined1 local_e90 [3672];
  float local_38;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_006862ee;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  piVar1 = (int *)FUN_004ab510();
  _DAT_00735ec8 = 1;
  local_14 = 0;
  if (DAT_00735ec4 == 0) {
    local_e94 = 0;
  }
  else {
    local_e94 = FUN_005a2930();
  }
  local_14 = 0xffffffff;
  DAT_00777ccc = local_e94;
  FUN_005a3380();
  DAT_0078a320 = DAT_00748f70;
  DAT_0078a350 = 0;
  DAT_0078a324 = *piVar1 - DAT_00748f70;
  DAT_0078a300 = piVar1[6];
  DAT_0078a334 = 4;
  DAT_0078a335 = 3;
  _DAT_0078a304 = 0x3f000000;
  DAT_0078a3fc = piVar1[5];
  _DAT_0078a330 = 0;
  DAT_0078a336 = DAT_0075896c;
  DAT_0078a337 = 0;
  piVar1 = *(int **)(local_e94 + 0x5864);
  iVar2 = 0;
  iVar3 = DAT_00736168;
  if (0 < DAT_0073616c) {
    do {
      if ((int)*(short *)(iVar3 + 0x6c) == *piVar1) goto LAB_004b53c7;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xfc;
    } while (iVar2 < DAT_0073616c);
  }
  iVar3 = 0;
LAB_004b53c7:
  DAT_0078a2f0 = (int)*(short *)(iVar3 + 0x6c);
  DAT_0078a318 = (int)*(char *)(iVar3 + 0x69);
  DAT_0078a2fc = piVar1[1];
  DAT_0078a31c = piVar1[2];
  iVar3 = 0;
  DAT_0078a30c = 1;
  DAT_0078a33c = 0;
  DAT_0078a344 = 0;
  DAT_0078a345 = 0;
  DAT_0078a346 = 0;
  DAT_0078a400 = 1;
  _DAT_0078a404 = 0x3f800000;
  _DAT_0078a380 = 0x3f800000;
  DAT_0078a40c = 2;
  DAT_0078a41c = 0;
  FUN_004b47a0();
  if (DAT_00777b4c == 4) {
    FUN_004b47a0();
  }
  iVar2 = 0;
  if (0 < DAT_0078a320) {
    do {
      (&DAT_0078a348)[iVar2] = (&DAT_00748f78)[iVar2];
      iVar2 = iVar2 + 1;
    } while (iVar2 < DAT_0078a320);
    if (0 < DAT_0078a320) {
      local_e98 = &DAT_007588c4;
      do {
        FUN_00417600();
        FUN_004ac0f0(local_e90);
        FUN_005809c0(iVar3,1,local_e90,local_e98,0xfffffffe,0,(int)(char)(&DAT_0078a334)[iVar3]);
        fVar4 = (float10)FUN_005a05b0();
        local_38 = (float)fVar4;
        FUN_004322a0(&DAT_0078a2f0);
        iVar2 = *(int *)(local_e94 + 0x589c);
        if (iVar2 < 4) {
          *(int *)(local_e94 + 0x589c) = iVar2 + 1;
          if ((iVar2 < 0) || (iVar2 + 1 <= iVar2)) {
            iVar2 = 0;
          }
          else {
            iVar2 = local_e94 + 0x586c + iVar2 * 0xc;
          }
          *(int *)(iVar2 + 4) = iVar3;
          *(undefined4 *)(iVar2 + 8) = 1;
        }
        iVar3 = iVar3 + 1;
        local_e98 = local_e98 + 0xf944;
      } while (iVar3 < DAT_0078a320);
    }
  }
  FUN_004b4040(DAT_0078a324,local_e94);
  FUN_004b3ac0();
  ExceptionList = local_1c;
  return;
}

