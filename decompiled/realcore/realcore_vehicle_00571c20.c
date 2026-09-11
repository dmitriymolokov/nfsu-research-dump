/* Decompiled from Speed.exe @ 00571c20 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileModule */


void FUN_00571c20(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char *pcVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_4;
  
  if (param_4 == -1) {
    param_4 = param_3;
  }
  iVar6 = *(char *)(param_1 + 0x40) * 0x10;
  iVar5 = iVar6 + 0x4c + param_1;
  *(char *)(iVar5 + 10) = *(char *)(iVar6 + 0x56 + param_1) + '\x01';
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_00571ae0(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  if (*(char *)(param_1 + 0x3d) != '\0') {
    FUN_00571ba0(param_1,param_5);
    return;
  }
  if (*(char *)(param_1 + 0x3e) == '\0') {
    if (*(char *)(param_1 + 0x3f) != '\0') {
      sVar4 = FUN_00571ab0(param_1,param_4);
      FUN_00571ba0(param_1,0);
      if ((sVar4 != (short)local_4) && (*(char *)(iVar5 + 0xb) == '\0')) {
        *(undefined1 *)(iVar5 + 0xb) = 1;
        FUN_00571f60();
        iVar5 = (int)*(char *)(param_1 + 0x40);
        iVar6 = iVar5;
        for (; local_4 = iVar5, -1 < iVar5; iVar5 = iVar5 + -1) {
          iVar8 = 0;
          if (-1 < iVar6) {
            puVar7 = (undefined4 *)(param_1 + 0x4c);
            do {
              if ((iVar8 == iVar5) && (puVar7[1] != 0)) {
                FUN_005718d0();
                iVar5 = local_4;
              }
              pcVar2 = (char *)*puVar7;
              iVar6 = 0;
              if (pcVar2 != (char *)0x0) {
                cVar1 = *pcVar2;
                while (cVar1 != '\0') {
                  iVar6 = iVar6 + 1;
                  cVar1 = pcVar2[iVar6];
                }
              }
              iVar6 = (int)*(char *)(param_1 + 0x40);
              iVar8 = iVar8 + 1;
              puVar7 = puVar7 + 4;
            } while (iVar8 <= iVar6);
          }
        }
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    return;
  }
  local_4 = FUN_00571ab0(param_1,param_4);
  FUN_00571ae0(param_1,&local_4,2,2,0);
  return;
}

