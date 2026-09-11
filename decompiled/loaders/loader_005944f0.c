/* Decompiled from Speed.exe @ 005944f0 */
/* Module: Loader */
/* Ghidra DecompileAll */


void FUN_005944f0(char *param_1,uint param_2)

{
  uint *puVar1;
  char cVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *unaff_ESI;
  bool bVar7;
  undefined4 local_cc;
  char local_c8 [200];
  
  cVar2 = *param_1;
  puVar1 = unaff_ESI + 8;
  *(char *)puVar1 = cVar2;
  if (cVar2 != '\0') {
    puVar3 = puVar1;
    do {
      cVar2 = (param_1 + (1 - (int)puVar1))[(int)puVar3];
      puVar3 = (uint *)((int)puVar3 + 1);
      *(char *)puVar3 = cVar2;
    } while (cVar2 != '\0');
  }
  bVar7 = DAT_00734494 != 0;
  *unaff_ESI = param_2;
  unaff_ESI[1] = 0xffffffff;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0;
  if ((bVar7) && ((param_2 & 1) != 0)) {
    uVar4 = FUN_00594a40();
    unaff_ESI[6] = uVar4;
    if (uVar4 != 0) {
      param_1 = &DAT_007313f8 + *(int *)(uVar4 + 4) * 0x40;
    }
  }
  if ((param_2 & 6) != 0) {
    FUN_00594470(0);
  }
  if ((param_2 == 2) && (cVar2 = FUN_0063c200(param_1,1,100,&local_cc), cVar2 != '\0')) {
    param_2 = 0;
    FUN_0063c2c0(local_cc,100);
  }
  uVar4 = FUN_00594330(param_1);
  if ((uVar4 != 0) && (param_2 == 1)) {
    *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
    unaff_ESI[3] = *(uint *)(uVar4 + 0xc);
    unaff_ESI[1] = *(uint *)(uVar4 + 0x10);
    unaff_ESI[4] = uVar4;
    goto LAB_0059471f;
  }
  if ((param_2 & 0x100) != 0) {
    unaff_ESI[1] = (DAT_0073448c != 0) - 2;
    return;
  }
  uVar5 = FUN_0063a5d0(param_1,param_2,100,0);
  iVar6 = FUN_00639d70(uVar5);
  uVar4 = FUN_00639c00(uVar5);
  if (iVar6 == 1) {
LAB_005946cc:
    unaff_ESI[3] = uVar4;
  }
  else if (DAT_0070108f != '\0') {
    local_c8[0] = DAT_0070108f;
    local_c8[1] = 0x3a;
    local_c8[2] = 0x5c;
    local_c8[3] = 0;
    FUN_00567de0(param_1);
    uVar5 = FUN_0063a5d0(local_c8,param_2,100,0);
    iVar6 = FUN_00639d70(uVar5);
    uVar4 = FUN_00639c00(uVar5);
    if (iVar6 == 1) {
      unaff_ESI[3] = uVar4;
    }
    if (unaff_ESI[3] == 0) {
      FUN_00401520(iVar6);
      uVar5 = FUN_0063a5d0(local_c8,param_2,100,0);
      iVar6 = FUN_00639d70(uVar5);
      uVar4 = FUN_00639c00(uVar5);
      if (iVar6 == 1) goto LAB_005946cc;
    }
  }
  if (unaff_ESI[3] != 0) {
    uVar5 = FUN_0063a800(unaff_ESI[3],100,0);
    iVar6 = FUN_00639d70(uVar5);
    uVar4 = FUN_00639c00(uVar5);
    if ((iVar6 == 1) && (unaff_ESI[1] = uVar4, param_2 == 1)) {
      uVar4 = FUN_005943b0(param_1,unaff_ESI[3],uVar4);
      *(int *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1;
      unaff_ESI[4] = uVar4;
    }
  }
LAB_0059471f:
  if (-1 < (int)unaff_ESI[1]) {
    if (unaff_ESI[6] != 0) {
      unaff_ESI[1] = *(uint *)(unaff_ESI[6] + 0x10);
    }
    if ((param_2 & 5) == 0) {
      unaff_ESI[2] = unaff_ESI[1];
    }
  }
  return;
}

