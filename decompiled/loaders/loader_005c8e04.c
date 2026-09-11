/* Decompiled from Speed.exe @ 005c8e04 */
/* Module: Loader */
/* Ghidra DecompileAll */


undefined4 FUN_005c8e04(uint param_1,int *param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int local_10;
  uint local_c;
  undefined4 local_8;
  
  *param_2 = 0;
  local_8 = 0;
  local_10 = 0;
  iVar3 = FUN_005d7113(param_1,0x42415443,&local_10,&param_1);
  if (iVar3 < 0) {
    local_8 = 0;
  }
  else if (local_10 != 0) {
    if (param_1 < 0x14) {
      local_8 = 0x80004005;
    }
    else {
      uVar2 = *(uint *)(local_10 + 0xc);
      if (param_1 < uVar2 * 4 + 0x14) {
LAB_005c8e66:
        local_8 = 0x80004005;
      }
      else {
        local_c = 0;
        if (uVar2 != 0) {
          piVar4 = (int *)(*(int *)(local_10 + 0x10) + local_10 + 0x10);
          do {
            iVar3 = 0;
            for (uVar5 = piVar4[-4]; (uVar5 < param_1 && (*(char *)(uVar5 + local_10) != '\0'));
                uVar5 = uVar5 + 1) {
              iVar3 = iVar3 + 1;
            }
            if (param_1 <= (uint)(piVar4[-4] + iVar3)) goto LAB_005c8e66;
            sVar1 = (short)piVar4[-3];
            iVar3 = 0;
            if (sVar1 == 0) {
              iVar3 = 4;
            }
            else if ((sVar1 == 1) || (sVar1 == 2)) {
              iVar3 = 0x10;
            }
            else if (sVar1 != 3) goto LAB_005c8e66;
            if (((*piVar4 != 0) && (iVar3 != 0)) &&
               (param_1 <= (uint)*(ushort *)(piVar4 + -2) * iVar3 + *piVar4)) goto LAB_005c8e66;
            local_c = local_c + 1;
            piVar4 = piVar4 + 5;
          } while (local_c < uVar2);
        }
        *param_2 = local_10;
      }
    }
  }
  return local_8;
}

