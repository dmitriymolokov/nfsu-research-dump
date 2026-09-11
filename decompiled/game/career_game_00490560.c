/* Decompiled from Speed.exe @ 00490560 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_00490560(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006854a3;
  local_c = ExceptionList;
  puVar7 = (undefined4 *)0x0;
  ExceptionList = &local_c;
  *(int **)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*param_2 != 0) {
    do {
      pbVar5 = (byte *)*param_2;
      bVar1 = *pbVar5;
      iVar9 = -1;
      if (bVar1 != 0) {
        do {
          iVar9 = iVar9 * 0x21 + (uint)bVar1;
          bVar1 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        if (iVar9 == 0) break;
      }
      puVar8 = DAT_0078e974;
      if (puVar7 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)*puVar7;
      }
      puVar2 = (undefined4 *)FUN_0040a880();
      puVar7 = puVar8;
      while( true ) {
        if (puVar7 == puVar2) goto LAB_004905db;
        if (puVar7[4] == iVar9) break;
        puVar7 = (undefined4 *)*puVar7;
      }
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    } while( true );
  }
LAB_004905db:
  iVar9 = *(int *)(param_1 + 0x10);
  if (iVar9 != 0) {
    piVar3 = _malloc(iVar9 * 0xc0 + 0x10);
    iVar6 = 0;
    local_4 = 0;
    if (piVar3 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = piVar3 + 4;
      *piVar3 = iVar9;
      _eh_vector_constructor_iterator_
                (piVar10,0xc0,iVar9,(_func_void_void_ptr *)&LAB_00401d90,FUN_00401db0);
    }
    *(int **)(param_1 + 0xc) = piVar10;
    puVar7 = (undefined4 *)0x0;
    do {
      pbVar5 = (byte *)**(undefined4 **)(param_1 + 8);
      bVar1 = *pbVar5;
      iVar9 = -1;
      if (bVar1 != 0) {
        do {
          iVar9 = iVar9 * 0x21 + (uint)bVar1;
          bVar1 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
        } while (bVar1 != 0);
        if (iVar9 == 0) break;
      }
      puVar8 = DAT_0078e974;
      if (puVar7 != (undefined4 *)0x0) {
        puVar8 = (undefined4 *)*puVar7;
      }
      puVar2 = (undefined4 *)FUN_0040a880();
      puVar7 = puVar8;
      while( true ) {
        if (puVar7 == puVar2) goto LAB_0049067b;
        if (puVar7[4] == iVar9) break;
        puVar7 = (undefined4 *)*puVar7;
      }
      *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x1c + iVar6) = puVar7;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10 + iVar6) = 1;
      iVar6 = iVar6 + 0xc0;
    } while( true );
  }
LAB_0049067b:
  *(undefined1 *)(param_1 + 0x14) = 0;
  FUN_004906d0(param_1);
  uVar4 = FUN_005461c0(*(undefined4 *)(*(int *)(param_1 + 8) + 0xc),1,0);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  ExceptionList = local_c;
  return;
}

