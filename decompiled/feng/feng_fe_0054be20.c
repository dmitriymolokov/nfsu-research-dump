/* Decompiled from Speed.exe @ 0054be20 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


void FUN_0054be20(undefined4 param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char *pcVar10;
  undefined4 local_6cc;
  undefined1 local_6c8 [64];
  undefined1 local_688;
  undefined4 local_687;
  char local_588;
  char local_587 [255];
  undefined1 local_488 [64];
  undefined1 local_448 [64];
  undefined1 local_408 [1028];
  
  if (param_2 == 0) {
    return;
  }
  local_688 = 0;
  puVar6 = &local_687;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_588 = '\0';
  pcVar10 = local_587;
  for (iVar5 = 0x3f; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  local_6cc = 0;
  bVar9 = false;
  uVar3 = FUN_00667530(uVar3,&DAT_006bd2ec,local_6c8,0x40,&DAT_006b9172);
  FUN_00668130(uVar3);
  uVar3 = FUN_00667530(*(undefined4 *)(param_2 + 0xc),&DAT_006bd2e8,local_408,0x400,&DAT_006b9172);
  FUN_00668130(uVar3);
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 == 0x63617374) {
    pcVar10 = "%s: *broadcast* %s";
  }
  else {
    if (iVar5 != 0x63686174) {
      if (iVar5 == 0x70726976) {
        uVar1 = *(uint *)(param_2 + 8);
        if ((uVar1 & 0x8000000) == 0) {
          if ((uVar1 & 0x10000000) == 0) {
            FUN_00565da0("%s%s: %s",local_6c8,&local_688,local_408);
            local_6cc = 1;
          }
          else if ((uVar1 & 0x200000) == 0) {
            FUN_004f6570();
          }
          goto LAB_0054c150;
        }
        if ((uVar1 & 0x200000) != 0) goto LAB_0054c150;
        uVar3 = FUN_00667530(local_408,&DAT_006bd2e0,0xffffffff);
        FUN_00667ec0(uVar3);
        iVar5 = FUN_0054b6d0();
        if ((iVar5 != 0) && (DAT_0073dafc == -1)) {
          if ((DAT_0073d8cc >> 1 & 1) != 0) {
            uVar3 = 0;
            goto LAB_0054bfc0;
          }
          iVar4 = FUN_004f65d0();
          if ((((iVar4 != 0) && (iVar4 = FUN_004f65d0(), iVar4 == 0)) &&
              (iVar4 = FUN_004f65d0(), iVar4 == 0)) &&
             (((iVar4 = FUN_004f65d0(), iVar4 == 0 && (iVar4 = FUN_004f65d0(), iVar4 == 0)) &&
              ((iVar4 = FUN_004f65d0(), iVar4 == 0 &&
               ((DAT_007301c8 == '\0' && (cVar2 = FUN_0054bcf0(&DAT_0073d868), cVar2 == '\0'))))))))
          {
            uVar3 = FUN_00667530(local_408,"PARAMS",local_448,0x40,&DAT_006b9172);
            FUN_00668130(uVar3);
            FUN_00667d70(local_488,0x40,"NAME=%s",iVar5 + 4);
            FUN_0054b1a0(0x67676574);
            goto LAB_0054c150;
          }
        }
        uVar3 = 1;
LAB_0054bfc0:
        FUN_0054b8e0(uVar3);
        return;
      }
      goto LAB_0054c150;
    }
    uVar1 = *(uint *)(param_2 + 8);
    bVar7 = (uVar1 & 0x100) != 0;
    if (bVar7) {
      FUN_00567de0(" (host)");
    }
    bVar8 = (uVar1 & 2) != 0;
    if (bVar8) {
      FUN_00567de0(" (admin)");
    }
    bVar9 = (uVar1 & 0x2000) != 0;
    if (bVar9) {
      FUN_00567de0(" (mod)");
    }
    bVar9 = bVar9 || (bVar8 || bVar7);
    if ((uVar1 & 0x8000000) == 0) {
      FUN_00565da0("%s%s: %s",local_6c8,&local_688,local_408);
      goto LAB_0054c150;
    }
    pcVar10 = "%s %s";
  }
  FUN_00565da0(pcVar10,local_6c8,local_408);
LAB_0054c150:
  cVar2 = FUN_0054b800(local_6c8);
  if ((cVar2 == '\0') && (iVar5 = 0, local_588 != '\0')) {
    do {
      pcVar10 = local_587 + iVar5;
      iVar5 = iVar5 + 1;
    } while (*pcVar10 != '\0');
    if (((0 < iVar5) && (DAT_0073d8c4 != (code *)0x0)) && (DAT_0073d8c8 != 0)) {
      (*DAT_0073d8c4)(DAT_0073d8c8,&local_588,local_6cc,bVar9,
                      *(uint *)(param_2 + 8) >> 0x15 & 0xffffff01);
    }
  }
  FUN_00665140(param_1,param_2);
  return;
}

