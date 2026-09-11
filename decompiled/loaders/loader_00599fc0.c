/* Decompiled from Speed.exe @ 00599fc0 */
/* Module: Loader */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0059a17e) */
/* WARNING: Removing unreachable block (ram,0x0059a231) */
/* WARNING: Removing unreachable block (ram,0x00599ff3) */
/* WARNING: Removing unreachable block (ram,0x0059a205) */
/* WARNING: Removing unreachable block (ram,0x0059a298) */

int FUN_00599fc0(float param_1,float param_2,undefined4 param_3,float param_4,int param_5,
                char param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  int local_6c;
  int local_68;
  int local_5c;
  int aiStack_54 [20];
  
  iVar3 = DAT_0078a300;
  local_5c = 0;
  for (local_6c = 0; iVar2 = FUN_0042ae30(), local_6c < iVar2; local_6c = local_6c + 1) {
    iVar2 = FUN_0042ae20();
    if (*(char *)(iVar2 + 0x100) < '\x06') {
      if ((*(short *)(iVar2 + 4 + param_5 * 2) == -1) ||
         (*(char *)(iVar2 + 0xd0 + param_7 + iVar3 * 4 + param_5 * 2) == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        local_78 = 0.0;
        local_80 = 0.0;
        if (param_6 != '\0') {
          fVar4 = (float10)FUN_00401c40(param_4 * *(float *)(iVar2 + 0x10 + iVar3 * 8 + param_7 * 4)
                                        ,DAT_006b5a4c);
          local_78 = (float)fVar4;
          fVar4 = (float10)FUN_00401c40(param_4 * *(float *)(iVar2 + 0xe0 + iVar3 * 8 + param_7 * 4)
                                        ,DAT_006b5a48);
          local_80 = (float)fVar4;
        }
        fVar5 = param_1;
        fVar4 = (float10)FUN_005ab160(param_1);
        fVar4 = (float10)FUN_00443d60((float)fVar4,fVar5);
        local_84 = (float)fVar4;
        if (param_7 == DAT_0078a2fc) {
          local_74 = param_1 + local_78;
          local_7c = param_2 + local_80;
        }
        else {
          local_84 = -local_84;
          local_74 = param_1 - local_80;
          local_7c = param_2 - local_78;
        }
        if ((DAT_006cc7a4 < local_84) && (local_84 < local_7c - local_74)) {
          aiStack_54[local_5c] = iVar2;
          local_5c = local_5c + 1;
        }
      }
    }
  }
  local_68 = 0;
  if (0 < local_5c) {
    iVar3 = FUN_004216b0(local_5c);
    local_68 = aiStack_54[iVar3];
  }
  return local_68;
}

