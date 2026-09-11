/* Decompiled from Speed.exe @ 0041e670 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041e670(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_11c [256];
  int local_1c;
  float local_18;
  float local_14;
  int local_10;
  int local_c;
  char local_5;
  
  if (DAT_00736220 == 0) {
    return;
  }
  local_5 = '\0';
  local_c = FUN_004f6630();
  while ((local_c != 0 && (iVar2 = FUN_004081e0(), iVar2 == 0))) {
    local_c = FUN_00417490();
  }
  if (local_c != 0) {
    local_10 = FUN_0041e4a0();
    FUN_004134c0();
    iVar2 = FUN_004055f0();
    if ((float)iVar2 < _DAT_006cc7bc) {
      FUN_0041e4c0();
      iVar2 = FUN_004055f0();
      if ((float)iVar2 < _DAT_006cc7bc) {
        if (_DAT_0078eb74 == DAT_006cc7a4) {
          fVar4 = (float10)FUN_0040ed00();
          _DAT_0078eb74 = (float)(fVar4 + (float10)_DAT_006cc7bc);
        }
        fVar4 = (float10)FUN_0040ed00();
        if ((float10)_DAT_0078eb74 < fVar4) {
          iVar2 = FUN_00417490();
          local_14 = (float)iVar2;
          iVar2 = FUN_004ee660();
          local_18 = (float)iVar2;
          while (local_10 != 0) {
            local_1c = 0;
            if (*(int *)(local_10 + 0x18) == 2) {
              local_1c = local_10;
            }
            if (((local_1c != 0) && ((*(uint *)(local_1c + 0x1c) & 0x10) != 0)) &&
               (cVar1 = FUN_004f7660(local_14 - _DAT_006cc910,local_18 - _DAT_006cc91c),
               cVar1 != '\0')) {
              uVar3 = FUN_0041e4b0();
              FUN_0067101f(local_11c,"PCHELP_%s",uVar3);
              uVar3 = FUN_00567c70();
              FUN_0041e600(local_14,local_18,uVar3);
              local_5 = '\x01';
            }
            local_10 = FUN_00417490();
          }
        }
        goto LAB_0041e84e;
      }
    }
    _DAT_0078eb74 = 0.0;
  }
LAB_0041e84e:
  if (local_5 == '\0') {
    FUN_0041e650();
  }
  return;
}

