/* Decompiled from Speed.exe @ 005e6111 */
/* Module: Loader */
/* Ghidra DecompileAll */


uint __thiscall FUN_005e6111(undefined4 *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  uint local_c;
  uint local_8;
  
  pcVar3 = *(char **)(param_2 + 8);
  iVar5 = 0;
  local_c = 0;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
    local_c = 0xe40000;
  }
  else {
    local_8 = 0x10;
    pcVar4 = pcVar3;
    do {
      cVar2 = *pcVar4;
      if (cVar2 != '\0') {
        if (cVar2 < 'x') {
          if ((cVar2 == 'w') || (cVar2 == 'a')) {
            iVar5 = 3;
          }
          else {
            if (cVar2 != 'b') {
              if (cVar2 == 'g') goto LAB_005e61b5;
              if (cVar2 == 'r') goto LAB_005e6162;
              goto LAB_005e617e;
            }
LAB_005e61b1:
            iVar5 = 2;
          }
        }
        else if (cVar2 == 'x') {
LAB_005e6162:
          iVar5 = 0;
        }
        else {
          if (cVar2 != 'y') {
            if (cVar2 == 'z') goto LAB_005e61b1;
            goto LAB_005e617e;
          }
LAB_005e61b5:
          iVar5 = 1;
        }
        pcVar4 = pcVar4 + 1;
      }
      uVar1 = local_8 + 2;
      local_c = local_c | iVar5 << ((byte)local_8 & 0x1f);
      local_8 = uVar1;
    } while (uVar1 < 0x18);
    if (*pcVar4 != '\0') {
LAB_005e617e:
      FUN_005b1f01(*param_1,param_2,0x7d4,"invalid swizzle \'%s\'",pcVar3);
      param_1[0x13] = 1;
      local_c = 0;
    }
  }
  return local_c;
}

