/* spd-match: far pct=12.13 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0043a8a0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Removing unreachable block (ram,0x0043aaaf) */
/* WARNING: Removing unreachable block (ram,0x0043aac1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10  FUN_0043a8a0(int *param_1,float param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_8;
  
  local_8 = _DAT_006b7994 * param_2;
  cVar2 = FUN_0043a2e0();
  if (cVar2 != '\0') {
    if (*(char *)((int)param_1 + 0x19) != '\0') {
      if (param_2 <= _DAT_006cca6c) {
        DAT_0078eb58 = 0;
      }
      else {
        DAT_0078eb58 = DAT_0078eb58 + 1;
        if (0xe < DAT_0078eb58) {
          FUN_004a8e00(param_1[1]);
        }
      }
    }
    cVar2 = FUN_0043a340();
    if (cVar2 == '\0') {
      iVar3 = FUN_00421a30();
      if (iVar3 != 0) {
        FUN_0041f0b0(param_1 + 0x14);
        fVar4 = (float10)FUN_0040ed00();
        FUN_00424c90((float)fVar4);
        FUN_00424cb0();
      }
      FUN_00405560();
      if ((param_2 <= DAT_006cc7a4) || (*param_1 != 6)) {
        FUN_00405560();
        fVar4 = (float10)FUN_0040ed00();
        _DAT_006f0898 = (float)fVar4;
        DAT_0073014c = '\0';
      }
      else if (DAT_0073014c != '\0') {
        fVar4 = (float10)FUN_0040ed00();
        fVar5 = (float10)FUN_0040ed00();
        fVar1 = (float)((float10)(float)fVar4 - fVar5);
        fVar4 = (float10)FUN_00405600(fVar1);
        if (fVar4 <= (float10)_DAT_006b7970) {
          fVar4 = (float10)FUN_00405600(fVar1);
          if (fVar4 <= (float10)_DAT_006b797c) {
            DAT_0073014c = '\0';
          }
          else {
            fVar4 = (float10)FUN_00401c80(param_2 + fVar1,param_2 * _DAT_006b7974,
                                          param_2 * _DAT_006b7978);
            local_8 = (float)fVar4;
          }
        }
        else {
          FUN_0043aae0(fVar1,0);
          FUN_00405560();
          fVar4 = (float10)FUN_0040ed00();
          _DAT_006f0898 = (float)fVar4;
          DAT_0073014c = '\0';
        }
      }
    }
    else {
      FUN_00405560();
    }
  }
  return (float10)local_8;
}

