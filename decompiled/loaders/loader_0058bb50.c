/* Decompiled from Speed.exe @ 0058bb50 */
/* Module: Loader */
/* Ghidra DecompileAll */


int * FUN_0058bb50(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined1 local_9c [144];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00686b1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_0058adf0(0xf80);
  piVar4 = (int *)0x0;
  local_4 = 0;
  if (iVar2 != 0) {
    piVar4 = (int *)FUN_0058ae80(param_2,*(undefined4 *)(param_1 + 0xc));
  }
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  *puVar1 = piVar4;
  *(int **)(param_1 + 0x40) = piVar4;
  *piVar4 = param_1 + 0x3c;
  piVar4[1] = (int)puVar1;
  iVar2 = *param_2 * 0xc90 + DAT_00734588;
  local_4 = 0xffffffff;
  if (piVar4[0x2e9] == 0) {
    FUN_00565da0("CARS\\%s\\TEXTURES.BIN",iVar2);
    iVar3 = FUN_0058b490();
    piVar4[0x2e9] = iVar3;
  }
  if ((piVar4[0x2ea] == 0) && (*(int *)(piVar4[0x120] * 0xc90 + 0xc54 + DAT_00734588) != 2)) {
    FUN_00565da0("CARS\\%s\\VINYLS.BIN",iVar2);
    iVar2 = FUN_00594c60(local_9c,0,1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      FUN_00594d40();
      if (iVar2 != -1) {
        iVar2 = FUN_0058b490();
        piVar4[0x2ea] = iVar2;
      }
    }
  }
  piVar4[0x2eb] = piVar4[0xf2];
  FUN_0058c0d0(param_1,piVar4 + 2,piVar4[0xf2]);
  piVar4[0x364] = piVar4[0xf3];
  FUN_0058c0d0(param_1,piVar4 + 0x7a,piVar4[0xf3]);
  *(char *)(piVar4 + 0x2e8) = (char)piVar4[0x2e8] + '\x01';
  ExceptionList = local_c;
  return piVar4;
}

