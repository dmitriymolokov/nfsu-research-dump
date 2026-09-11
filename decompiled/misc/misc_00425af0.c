/* Decompiled from Speed.exe @ 00425af0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


void FUN_00425af0(int param_1)

{
  int iVar1;
  char cVar2;
  int unaff_EDI;
  undefined1 local_c [4];
  byte abStack_8 [8];
  
  FUN_00565da0("Car%d",(int)*(short *)(param_1 + 8));
  FUN_00571ea0(0,local_c);
  FUN_00571c20(unaff_EDI,param_1 + 0x834,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x838,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x844,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x848,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x84c,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x850,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x855,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x854,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x83e,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x83f,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x840,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x858,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x85c,4,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x860,4,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x864,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x86c,1,1,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x86d,1,1,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x874,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x870,4,0xffffffff,0);
  if (*(int *)(param_1 + 0x868) != 0) {
    FUN_0058d8a0(*(int *)(param_1 + 0x868));
  }
  FUN_00571c20(unaff_EDI,param_1 + 0x24,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x28,1,4,1);
  cVar2 = *(char *)(*(int *)(param_1 + 0x10) + 7);
  FUN_00571c20(unaff_EDI,*(int *)(param_1 + 0x10) + 7,1,1,1);
  if (*(char *)(unaff_EDI + 0x3d) != '\0') {
    FUN_00425fe0();
    FUN_00426110();
    FUN_00425fe0();
    FUN_00426110();
    if (cVar2 != *(char *)(*(int *)(param_1 + 0x10) + 7)) {
      FUN_0056c310();
    }
  }
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))();
  (**(code **)(**(int **)(param_1 + 0x34) + 8))();
  FUN_004648c0();
  (**(code **)(**(int **)(param_1 + 0x3c) + 4))();
  FUN_00571c20(unaff_EDI,param_1 + 0x4c0,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x470,1,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x474,4,4,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x478,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x4d0,1,1,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x4d1,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x4c4,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x4c8,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x4cc,4,0xffffffff,0);
  FUN_00444100(param_1 + 0x800,unaff_EDI);
  if (*(char *)(unaff_EDI + 0x3d) == '\0') {
    abStack_8[0] = *(char *)(param_1 + 0x880) * '\x10' + *(char *)(param_1 + 0x87c);
    FUN_00571c20(unaff_EDI,abStack_8,1,1,0);
  }
  else {
    FUN_00571c20(unaff_EDI,abStack_8,1,1,0);
    *(uint *)(param_1 + 0x880) = (uint)(abStack_8[0] >> 4);
    *(uint *)(param_1 + 0x87c) = abStack_8[0] & 0xf;
  }
  FUN_00571c20(unaff_EDI,param_1 + 0x8a8,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8a9,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x884,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x888,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8a0,8,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8ac,0x10,0x10,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8bc,4,0xffffffff,0);
  if (*(char *)(unaff_EDI + 0x3c) != '\0' || *(char *)(unaff_EDI + 0x3d) != '\0') {
    *(undefined4 *)(param_1 + 0x47c) = 0;
  }
  FUN_00571c20(unaff_EDI,param_1 + 0x83c,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x83d,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x480,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x484,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8c8,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8c4,4,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8cc,4,4,1);
  FUN_00571c20(unaff_EDI,param_1 + 0x88c,1,1,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x890,0x10,0xffffffff,0);
  FUN_00571c20(unaff_EDI,param_1 + 0x8ec,4,0xffffffff,0);
  iVar1 = *(char *)(unaff_EDI + 0x40) * 0x10;
  *(int *)(iVar1 + unaff_EDI + 0x58) =
       *(int *)(unaff_EDI + 0x150) - *(int *)(iVar1 + 0x58 + unaff_EDI);
  cVar2 = *(char *)(unaff_EDI + 0x40) + -1;
  *(char *)(unaff_EDI + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(unaff_EDI + 0x44)) {
    *(undefined4 *)(unaff_EDI + 0x44) = 0xffffffff;
  }
  return;
}

