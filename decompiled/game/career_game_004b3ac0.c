/* Decompiled from Speed.exe @ 004b3ac0 */
/* Module: Career_Game */
/* Ghidra DecompileAll */


void FUN_004b3ac0(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_e8c;
  int local_e88;
  int local_e84;
  undefined1 local_e80 [3708];
  
  iVar8 = DAT_0078a300;
  if (DAT_0078a347 == '\0') {
    if (DAT_0078a300 == 0) {
      local_e8c = 0;
    }
    else {
      iVar2 = FUN_00441fe0();
      local_e8c = (int)*(char *)(DAT_0078a2fc + iVar2 + 0xc0 + iVar8 * 2);
    }
    local_e88 = 0;
    if (0 < local_e8c) {
      do {
        iVar8 = DAT_0078a41c;
        local_e84 = 0;
        while ((iVar2 = FUN_0057d000(), iVar2 != -1 && (iVar5 = 0, pcVar3 = DAT_0078a418, 0 < iVar8)
               )) {
          while ((*pcVar3 != '\0' || (*(int *)(pcVar3 + 0x10) != iVar2))) {
            iVar5 = iVar5 + 1;
            pcVar3 = pcVar3 + 0x750;
            if (iVar8 <= iVar5) goto LAB_004b3b74;
          }
          local_e84 = local_e84 + 1;
          if (99 < local_e84) break;
        }
LAB_004b3b74:
        FUN_00417600();
        iVar8 = iVar2 * 0xc90 + DAT_00734588;
        if (*(int *)(iVar2 * 0xc90 + 0xc54 + DAT_00734588) == 1) {
          iVar8 = (DAT_006ee6f0 != 0) + 1;
        }
        else {
          cVar1 = *(char *)(iVar8 + 0xd9);
          if (cVar1 == '\0') {
            iVar8 = 0;
          }
          else {
            uVar7 = DAT_006f227c % (uint)(int)cVar1;
            uVar6 = DAT_006f227c ^ 0x1d872b41;
            uVar4 = uVar6 >> 5 ^ uVar6;
            DAT_006f227c = uVar4 << 0x1b ^ uVar4 ^ uVar6;
            iVar8 = (int)*(char *)(uVar7 + 0xc80 + iVar8);
          }
        }
        FUN_0057d160(iVar8,0,0);
        FUN_0057d340(local_e80);
        FUN_0057e9a0(local_e80);
        FUN_005809c0(local_e88 + 0x32,3,local_e80,&DAT_006b9172,0xffffffff,0,0);
        FUN_004322a0(&DAT_0078a2f0);
        local_e88 = local_e88 + 1;
      } while (local_e88 < local_e8c);
    }
  }
  return;
}

