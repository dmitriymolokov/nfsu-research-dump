/* Decompiled from Speed.exe @ 0059d830 */
/* Module: Loader */
/* Ghidra DecompileVAs */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0059d830(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int unaff_EDI;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  float local_24;
  undefined1 local_20 [12];
  float local_14;
  
  local_40 = *(float *)(unaff_EDI + 0x10);
  local_44 = *(float *)(unaff_EDI + 0xc);
  if (*(int *)(unaff_EDI + 4) == 0) {
    local_44 = local_44 - _DAT_006cc8bc;
  }
  else if (*(int *)(unaff_EDI + 4) == 2) {
    local_40 = (float)(int)-(uint)*(ushort *)(unaff_EDI + 0x1e);
    local_44 = (float)*(ushort *)(unaff_EDI + 0x1e);
    local_44 = local_44 + local_44;
  }
  if (local_40 < local_44) {
    FUN_0059d350(local_30,local_40,0);
    local_38 = local_24;
    FUN_0059d350(local_20,local_44,0);
    local_34 = local_14;
    if ((local_14 != local_24) && (param_1 < local_24 == (param_1 == local_24))) {
      if (local_14 <= param_1) {
        return (float10)local_44;
      }
      iVar3 = 0;
      do {
        fVar1 = (param_1 - local_38) / (local_34 - local_38);
        fVar1 = fVar1 * local_44 + (_DAT_006cc7bc - fVar1) * local_40;
        FUN_0059d350(local_30,fVar1,0);
        iVar3 = iVar3 + 1;
        fVar2 = ABS(param_1 - local_24);
        if (fVar2 < _DAT_006b5a08 != (fVar2 == _DAT_006b5a08)) break;
        if (param_1 < local_24) {
          local_34 = local_24;
          local_44 = fVar1;
        }
        if (local_24 < param_1) {
          local_38 = local_24;
          local_40 = fVar1;
        }
      } while (iVar3 < 0x28);
      if (iVar3 < DAT_0073444c) {
        iVar3 = DAT_0073444c;
      }
      DAT_0073444c = iVar3;
      if (fVar2 < _DAT_00734450) {
        fVar2 = _DAT_00734450;
      }
      _DAT_00734450 = fVar2;
      return (float10)fVar1;
    }
  }
  return (float10)local_40;
}

