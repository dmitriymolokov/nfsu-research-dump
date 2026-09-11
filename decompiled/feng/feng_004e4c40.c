/* Decompiled from Speed.exe @ 004e4c40 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


undefined4 * FUN_004e4c40(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00688c18;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004e21e0(param_1,param_2);
  local_8 = 0;
  *param_1 = &PTR_FUN_006c313c;
  FUN_004f6a10("MU_HorizontalBrowserBack.fng",1);
  iVar2 = FUN_004f3f90(&DAT_00746104);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x18) != 0)) && (*(int **)(iVar2 + 0x14) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar2 + 0x14) + 8))(0x50fe8c15,0,0,*(int *)(iVar2 + 0x18));
  }
  iVar2 = DAT_00745e40;
  if (DAT_00735df0 == 0) {
    if (DAT_00745e40 == 1) {
      if ((((DAT_00760288 & 2) == 0) && ((DAT_00760288 & 4) == 0)) && ((DAT_00760288 & 8) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 0;
      uVar4 = 0x695654a8;
      FUN_00567c70(0x695654a8,0,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_00760288 & 0x80) == 0) && ((DAT_00760288 & 0x100) == 0)) &&
         ((DAT_00760288 & 0x200) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 2;
      uVar4 = 0x17019c53;
      FUN_00567c70(0x17019c53,2,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_00760288 & 0x2000) == 0) && ((DAT_00760288 & 0x4000) == 0)) &&
         ((DAT_00760288 & 0x8000) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 4;
      uVar4 = 0x16b5ce67;
      FUN_00567c70(0x16b5ce67,4,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_00760288 & 0x10000) == 0) && ((DAT_00760288 & 0x20000) == 0)) &&
         ((DAT_00760288 & 0x40000) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 5;
      uVar4 = 0x8a07001;
      FUN_00567c70(0x8a07001,5,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_00760288 & 0x400000) == 0) && ((DAT_00760288 & 0x800000) == 0)) &&
         ((DAT_00760288 & 0x1000000) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 7;
      uVar4 = 0x932768e1;
      FUN_00567c70(0x932768e1,7,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_00760288 & 0x10000000) == 0) && ((DAT_00760288 & 0x20000000) == 0)) &&
         ((DAT_00760288 & 0x40000000) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 9;
      uVar4 = 0xf2173020;
      FUN_00567c70(0xf2173020,9,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_0076028c & 2) == 0) && ((DAT_0076028c & 4) == 0)) && ((DAT_0076028c & 8) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 0xb;
      uVar4 = 0x694ec516;
      FUN_00567c70(0x694ec516,0xb,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_0076028c & 0x10) == 0) && ((DAT_0076028c & 0x20) == 0)) &&
         ((DAT_0076028c & 0x40) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 0xc;
      uVar4 = 0x192d84da;
      FUN_00567c70(0x192d84da,0xc,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      if ((((DAT_0076028c & 0x400) == 0) && ((DAT_0076028c & 0x800) == 0)) &&
         ((DAT_0076028c & 0x1000) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
    }
    else {
      if (DAT_00745e40 != 2) goto LAB_004e5567;
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        if ((((DAT_00760288 & 2) == 0) && ((DAT_00760288 & 4) == 0)) && ((DAT_00760288 & 8) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        uVar7 = 0;
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 0;
        uVar4 = 0x695654a8;
        FUN_00567c70(0x695654a8,0,"MU_GarageVinylBrowser.fng",uVar3,0);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        if ((((DAT_00760288 & 0x80) == 0) && ((DAT_00760288 & 0x100) == 0)) &&
           ((DAT_00760288 & 0x200) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        uVar7 = 0;
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 2;
        uVar4 = 0x17019c53;
        FUN_00567c70(0x17019c53,2,"MU_GarageVinylBrowser.fng",uVar3,0);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        if ((((DAT_00760288 & 0x2000) == 0) && ((DAT_00760288 & 0x4000) == 0)) &&
           ((DAT_00760288 & 0x8000) == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        uVar7 = 0;
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 4;
        uVar4 = 0x16b5ce67;
        FUN_00567c70(0x16b5ce67,4,"MU_GarageVinylBrowser.fng",uVar3,0);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(5,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 5;
        uVar4 = 0x8a07001;
        FUN_00567c70(0x8a07001,5,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(7,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 7;
        uVar4 = 0x932768e1;
        FUN_00567c70(0x932768e1,7,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(9,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 9;
        uVar4 = 0xf2173020;
        FUN_00567c70(0xf2173020,9,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(0xb,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 0xb;
        uVar4 = 0x694ec516;
        FUN_00567c70(0x694ec516,0xb,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(0xc,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 0xc;
        uVar4 = 0x192d84da;
        FUN_00567c70(0x192d84da,0xc,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 == '\0') goto LAB_004e5567;
      uVar8 = 0;
      uVar3 = FUN_004e4b70(0xe,0);
    }
    uVar5 = 0xe;
    uVar4 = 0x69580c2c;
  }
  else {
    if (DAT_00735df0 != 1) goto LAB_004e5567;
    if (DAT_00745e40 == 1) {
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      uVar3 = FUN_004e4b70(1,uVar8);
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar4 = 0x20693e72;
      FUN_00567c70(0x20693e72,1,"MU_GarageVinylBrowser.fng",uVar3);
      FUN_004e2250(uVar4,iVar2,pcVar6,uVar3,uVar8);
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      uVar3 = FUN_004e4b70(3,uVar8);
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 3;
      uVar4 = 0xbc76639d;
      FUN_00567c70(0xbc76639d,3,"MU_GarageVinylBrowser.fng",uVar3);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      uVar3 = FUN_004e4b70(6,uVar8);
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 6;
      uVar4 = 0x43935e4b;
      FUN_00567c70(0x43935e4b,6,"MU_GarageVinylBrowser.fng",uVar3);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
      uVar3 = FUN_004e4b70(8,uVar8);
      pcVar6 = "MU_GarageVinylBrowser.fng";
      uVar5 = 8;
      uVar4 = 0x38abc72b;
      FUN_00567c70(0x38abc72b,8,"MU_GarageVinylBrowser.fng",uVar3);
      FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
      cVar1 = FUN_004e3f00(0);
      uVar8 = (uint)(byte)(1 - (cVar1 != '\0'));
    }
    else {
      if (DAT_00745e40 != 2) goto LAB_004e5567;
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(1,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 1;
        uVar4 = 0x20693e72;
        FUN_00567c70(0x20693e72,1,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(3,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 3;
        uVar4 = 0xbc76639d;
        FUN_00567c70(0xbc76639d,3,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(6,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 6;
        uVar4 = 0x43935e4b;
        FUN_00567c70(0x43935e4b,6,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 != '\0') {
        uVar7 = 0;
        uVar3 = FUN_004e4b70(8,0);
        pcVar6 = "MU_GarageVinylBrowser.fng";
        uVar5 = 8;
        uVar4 = 0x38abc72b;
        FUN_00567c70(0x38abc72b,8,"MU_GarageVinylBrowser.fng",uVar3);
        FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar7);
      }
      cVar1 = FUN_004e3f00(0);
      if (cVar1 == '\0') goto LAB_004e5567;
      uVar8 = 0;
    }
    uVar3 = FUN_004e4b70(0xd,uVar8);
    uVar5 = 0xd;
    uVar4 = 0x4be137a4;
  }
  pcVar6 = "MU_GarageVinylBrowser.fng";
  FUN_00567c70(uVar4,uVar5,"MU_GarageVinylBrowser.fng",uVar3,uVar8);
  FUN_004e2250(uVar4,uVar5,pcVar6,uVar3,uVar8);
LAB_004e5567:
  FUN_004e23d0();
  ExceptionList = local_10;
  return param_1;
}

