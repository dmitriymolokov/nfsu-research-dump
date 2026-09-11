/* Decompiled from Speed.exe @ 0047cda0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


undefined4 FUN_0047cda0(int param_1,int *param_2,int *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *local_8;
  
  piVar4 = DAT_00779798;
  local_8 = DAT_00779798;
  piVar5 = (int *)FUN_0040a880();
  if (piVar4 == piVar5) {
    return 0;
  }
  do {
    iVar3 = local_8[5];
    if (iVar3 != 0) {
      iVar7 = 0;
      if (0 < *(int *)(iVar3 + 4)) {
        puVar9 = *(undefined4 **)(iVar3 + 0x10);
        do {
          pbVar6 = (byte *)*puVar9;
          iVar8 = -1;
          bVar2 = *pbVar6;
          while (bVar2 != 0) {
            iVar8 = iVar8 * 0x21 + (uint)bVar2;
            pbVar1 = pbVar6 + 1;
            pbVar6 = pbVar6 + 1;
            bVar2 = *pbVar1;
          }
          if (param_1 == iVar8) {
            *param_2 = iVar3;
            *param_3 = iVar7;
            return 1;
          }
          iVar7 = iVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (iVar7 < *(int *)(iVar3 + 4));
      }
    }
    local_8 = (int *)*local_8;
    if (local_8 == piVar5) {
      return 0;
    }
  } while( true );
}

