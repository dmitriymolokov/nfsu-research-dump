/* Decompiled from Speed.exe @ 0054b4e0 */
/* Module: Realcore_Vehicle */
/* Ghidra DecompileAll */


undefined4 FUN_0054b4e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_808 [8];
  undefined1 local_800 [2048];
  
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0xffffffff;
  }
  iVar2 = 0;
  if (DAT_0073505d != '\0') {
    do {
      pcVar4 = &DAT_0073505e + iVar2;
      iVar2 = iVar2 + 1;
    } while (*pcVar4 != '\0');
    if (0 < iVar2) {
      local_800[0] = 0;
      FUN_00667950(local_800,0x800,&DAT_006bd328,&DAT_00734fd8);
      FUN_00667c40(local_800,0x800,&DAT_006bd320,DAT_00735018);
      FUN_00667950(local_800,0x800,&DAT_006bd318,&DAT_0073501c);
      iVar2 = 0;
      pcVar4 = &DAT_00735029;
      do {
        iVar3 = 0;
        if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) break;
        do {
          iVar1 = iVar3 + 1;
          iVar3 = iVar3 + 1;
        } while (pcVar4[iVar1] != '\0');
        if (iVar3 < 1) break;
        FUN_00565da0("NAME%d",iVar2);
        FUN_00667950(local_800,0x800,auStack_808,pcVar4);
        pcVar4 = pcVar4 + 0xd;
        iVar2 = iVar2 + 1;
      } while ((int)pcVar4 < 0x73505d);
      iVar2 = 0;
      if (DAT_0073505d != '\0') {
        do {
          pcVar4 = &DAT_0073505e + iVar2;
          iVar2 = iVar2 + 1;
        } while (*pcVar4 != '\0');
        if (0 < iVar2) {
          FUN_00667950(local_800,0x800,&DAT_006bd308,&DAT_0073505d);
        }
      }
      if (DAT_0073d8d0 != 0) {
        FUN_00664e00(DAT_0073d8d0,0x72616e6b,local_800,&LAB_0054c440,0);
      }
      *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x538);
      *(undefined4 *)(param_1 + 0x538) = 0xb;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x53c) = *(undefined4 *)(param_1 + 0x538);
  *(undefined4 *)(param_1 + 0x538) = 0xc;
  return 0;
}

