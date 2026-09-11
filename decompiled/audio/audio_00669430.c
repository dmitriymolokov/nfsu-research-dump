/* Decompiled from Speed.exe @ 00669430 */
/* Module: Audio */
/* Ghidra DecompileAll */


undefined4
FUN_00669430(int param_1,char *param_2,char *param_3,char *param_4,char *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  DWORD DVar6;
  
  if (param_6 == 0) {
    param_6 = 0x1e;
  }
  else if (param_6 < 2) {
    param_6 = 2;
  }
  else if (0xfa < param_6) {
    param_6 = 0xfa;
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      iVar2 = *(int *)(param_1 + 0x24);
      while( true ) {
        if (iVar2 == 0) {
          puVar5 = (undefined1 *)FUN_00549460(0x104);
          uVar3 = *(undefined4 *)(puVar5 + 0xe0);
          puVar5[6] = (char)((uint)uVar3 >> 8);
          puVar5[5] = (char)((uint)uVar3 >> 0x10);
          puVar5[7] = puVar5[0xe0];
          *puVar5 = 0x67;
          puVar5[1] = 0x45;
          puVar5[2] = 0x41;
          puVar5[3] = (char)param_6;
          puVar5[4] = (char)((uint)uVar3 >> 0x18);
          iVar2 = 8 - (int)param_2;
          do {
            cVar1 = *param_2;
            param_2[(int)(puVar5 + iVar2)] = cVar1;
            param_2 = param_2 + 1;
          } while (cVar1 != '\0');
          iVar2 = 0x28 - (int)param_3;
          do {
            cVar1 = *param_3;
            param_3[(int)(puVar5 + iVar2)] = cVar1;
            param_3 = param_3 + 1;
          } while (cVar1 != '\0');
          iVar2 = 0x68 - (int)param_5;
          do {
            cVar1 = *param_5;
            param_5[(int)(puVar5 + iVar2)] = cVar1;
            param_5 = param_5 + 1;
          } while (cVar1 != '\0');
          iVar2 = 0x48 - (int)param_4;
          do {
            cVar1 = *param_4;
            param_4[(int)(puVar5 + iVar2)] = cVar1;
            param_4 = param_4 + 1;
          } while (cVar1 != '\0');
          FUN_00662e80(*(undefined4 *)(param_1 + 0x38),puVar5,0xe0,0,param_1 + 0x3c,0x10);
          DVar6 = GetTickCount();
          *(DWORD *)(puVar5 + 0xe0) = DVar6 + 0xfa;
          FUN_00668d60(param_1);
          *(undefined4 *)(puVar5 + 0x100) = *(undefined4 *)(param_1 + 0x24);
          *(undefined1 **)(param_1 + 0x24) = puVar5;
          FUN_00668df0(param_1);
          return 0;
        }
        iVar4 = FUN_00668fb0();
        if ((iVar4 == 0) && (iVar4 = FUN_00668fb0(), iVar4 == 0)) break;
        iVar2 = *(int *)(iVar2 + 0x100);
      }
      iVar4 = FUN_00668fb0();
      if (iVar4 != 0) {
        iVar4 = (iVar2 + 0x68) - (int)param_5;
        do {
          cVar1 = *param_5;
          param_5[iVar4] = cVar1;
          param_5 = param_5 + 1;
        } while (cVar1 != '\0');
        *(undefined4 *)(iVar2 + 0xe0) = 0;
      }
      return 0;
    }
    return 0xfffffffe;
  }
  return 0xffffffff;
}

