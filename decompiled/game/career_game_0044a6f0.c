/* Decompiled from Speed.exe @ 0044a6f0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void __thiscall FUN_0044a6f0(int param_1,int param_2)

{
  int iVar1;
  int unaff_EBX;
  char cVar2;
  
  FUN_00571ea0(0,"AICarController");
  (**(code **)(**(int **)(param_1 + 8) + 8))(param_2);
  FUN_00571c20(param_2,param_1 + 0xc,0x20,0xffffffff,0);
  FUN_0044ceb0();
  FUN_00571c20(param_2,param_1 + 0x3f4,1,4,1);
  FUN_00571c20(param_2,param_1 + 0x3ec,1,1,1);
  FUN_00571c20(param_2,param_1 + 0x3f0,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x4c0,4,0xffffffff,0);
  FUN_0044d760();
  FUN_0044e480(param_1 + 0x3f8);
  FUN_00571c20(param_2,param_1 + 0x400,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x404,4,4,1);
  FUN_00571c20(param_2,param_1 + 0x420,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x424,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x428,4,0xffffffff,0);
  FUN_00571c20(param_2,param_1 + 0x42c,4,0xffffffff,0);
  FUN_005840c0(*(undefined4 *)(*(int *)(param_1 + 0x430) + 0x10));
  FUN_005840c0(*(undefined4 *)(*(int *)(unaff_EBX + 0x480) + 0x10));
  FUN_00571c20(param_2,unaff_EBX + 0x490,0x10,0xffffffff,0);
  FUN_0041ff80(DAT_007361f8);
  FUN_00571c20(param_2,unaff_EBX + 0x43c,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x440,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x444,4,4,1);
  FUN_00571c20(param_2,unaff_EBX + 0x448,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x40c,4,0xffffffff,0);
  cVar2 = -1;
  if (*(int *)(unaff_EBX + 0x470) != 0) {
    cVar2 = *(char *)(*(int *)(unaff_EBX + 0x470) + 0x10);
  }
  FUN_00571c20(param_2,&stack0x00000000,1,1,1);
  if (*(char *)(param_2 + 0x3d) != '\0') {
    if (cVar2 < '\0') {
      *(undefined4 *)(unaff_EBX + 0x470) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBX + 0x470) = (&DAT_007361b4)[cVar2];
    }
  }
  FUN_00571c20(param_2,unaff_EBX + 0x474,4,4,1);
  FUN_00571c20(param_2,unaff_EBX + 0x46c,1,1,0);
  FUN_00571c20(param_2,unaff_EBX + 0x478,4,4,1);
  FUN_00571c20(param_2,unaff_EBX + 0x47c,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x408,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x4a0,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x4a4,1,1,1);
  FUN_0045ac60();
  FUN_00571c20(param_2,unaff_EBX + 0x410,1,1,0);
  FUN_00571c20(param_2,unaff_EBX + 0x4b8,4,0xffffffff,0);
  FUN_00571c20(param_2,unaff_EBX + 0x4bc,1,1,0);
  iVar1 = *(char *)(param_2 + 0x40) * 0x10 + 0x4c + param_2;
  *(int *)(iVar1 + 0xc) = *(int *)(param_2 + 0x150) - *(int *)(iVar1 + 0xc);
  cVar2 = *(char *)(param_2 + 0x40) + -1;
  *(char *)(param_2 + 0x40) = cVar2;
  if ((int)cVar2 < *(int *)(param_2 + 0x44)) {
    *(undefined4 *)(param_2 + 0x44) = 0xffffffff;
  }
  return;
}

