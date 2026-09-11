/* Decompiled from Speed.exe @ 0040f3d0 */
/* Module: FEng_FE */
/* Ghidra DecompileModule */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f3d0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  int iStack_84;
  float fVar5;
  float fStack_74;
  undefined1 auStack_68 [32];
  float fStack_48;
  float fStack_44;
  
  if ((DAT_00736404 != param_1) || (DAT_00736408 != DAT_0073640c)) {
    iStack_84 = *(int *)(*param_1 + 0x18);
    DAT_00736404 = param_1;
    if (iStack_84 != 0) {
      if (DAT_0073640c == (int *)0x0) {
        (**(code **)(*DAT_0073636c + 0x104))(DAT_0073636c,0);
      }
      else {
        (**(code **)(*(int *)DAT_0073640c[6] + 0xd0))((int *)DAT_0073640c[6],DAT_0073640c[0x10]);
      }
      FUN_00410650();
      if (*(char *)((int)param_1 + 0x56) == '\0') {
        _DAT_007070cc = 0xffffffff;
        _DAT_007070c8 = 0xffffffff;
        if (DAT_0073640c == (int *)0x0) {
          (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x1b);
          _DAT_007070d0 = 0;
        }
        else {
          (**(code **)(*(int *)DAT_0073640c[6] + 0x68))((int *)DAT_0073640c[6],DAT_0073640c[0x31],0)
          ;
          _DAT_007070d0 = 0;
        }
      }
      else {
        FUN_00410550(1);
      }
      if (*(char *)((int)param_1 + 0x56) == '\0') {
        if (*DAT_0073640c == 5) {
          (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x16,1);
        }
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
      }
      else if (*DAT_0073640c == 5) {
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0x16,2);
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,1);
      }
      else {
        (**(code **)(*DAT_0073636c + 0xe4))(DAT_0073636c,0xe,0);
      }
      piVar3 = DAT_0073640c;
      uVar2 = DAT_00701094;
      if (DAT_0073640c[0x34] != 0) {
        fVar5 = 0.0;
        fStack_74 = 0.0;
        if ((DAT_00700ea4 != 0) &&
           (((*DAT_0073640c == 0 || (*DAT_0073640c == 1)) &&
            (*(char *)((int)param_1 + 0x52) != '\0')))) {
          fVar1 = (float)DAT_0073ad34 * _DAT_006cca38;
          if (*(char *)((int)param_1 + 0x52) == '\x03') {
            fVar5 = (float)(int)*(short *)((int)param_1 + 0x5e) * _DAT_006ccba0;
            fVar4 = (float10)(int)(short)param_1[0x18] * (float10)_DAT_006ccba0;
          }
          else if ((_DAT_007363e0 == DAT_006cc7a4) && (_DAT_007363e4 == DAT_006cc7a4)) {
            fVar4 = (float10)FUN_0040ec20(fVar1);
            fVar5 = (float)fVar4;
            fVar4 = (float10)FUN_0040ec90(fVar1);
          }
          else {
            fVar4 = (float10)FUN_00546180(param_1,fVar1,
                                          _DAT_007363e0 / (float)(int)(short)param_1[0x11],
                                          DAT_00701094);
            fVar5 = (float)fVar4;
            fVar4 = (float10)FUN_00546180(param_1,fVar1,
                                          _DAT_007363e4 /
                                          (float)(int)*(short *)((int)param_1 + 0x46),uVar2);
            piVar3 = DAT_0073640c;
          }
          fStack_74 = (float)fVar4;
        }
        FUN_00565020();
        fStack_44 = fStack_74;
        fStack_48 = fVar5;
        (**(code **)(*(int *)piVar3[6] + 0x98))((int *)piVar3[6],piVar3[0x35],auStack_68);
        (**(code **)(*(int *)DAT_0073640c[6] + 0x88))
                  ((int *)DAT_0073640c[6],DAT_0073640c[0x34],&iStack_84);
      }
    }
  }
  return;
}

