/* Decompiled from Speed.exe @ 0041ece0 */
/* Module: Registry_Paths */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_0041ece0(int param_1)

{
  uint uVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x42c);
  fVar3 = (float10)_DAT_006cc8a8;
  uVar2 = *(uint *)(param_1 + 0x428);
  if (uVar2 < 0x104b) {
    switch(uVar2) {
    case 0x1002:
      if ((uVar1 < 0x5144) || (0x5147 < uVar1)) {
        if ((0x514b < uVar1) && (uVar1 < 0x5150)) {
          return (float10)_DAT_006cca20;
        }
        if (0x4c66 < uVar1) {
          if (uVar1 < 0x4e69) {
            if (uVar1 == 0x4e68) {
switchD_0041ee07_caseD_4e44:
              return (float10)_DAT_006cca18;
            }
            switch(uVar1) {
            case 0x4e44:
            case 0x4e45:
            case 0x4e48:
            case 0x4e64:
            case 0x4e65:
              goto switchD_0041ee07_caseD_4e44;
            default:
              goto switchD_0041ed1a_caseD_1003;
            }
          }
          if (uVar1 < 0x5942) {
            if (uVar1 == 0x5941) {
LAB_0041ee52:
              return (float10)_DAT_006cc7dc;
            }
            if (uVar1 == 0x5157) goto LAB_0041ee3b;
            if (uVar1 != 0x5940) {
              return fVar3;
            }
          }
          else if (uVar1 != 0x5960) {
            if (uVar1 != 0x5961) {
              return fVar3;
            }
            goto LAB_0041ee52;
          }
          return (float10)_DAT_006cca14;
        }
        if (uVar1 == 0x4c66) {
LAB_0041ede0:
          return (float10)_DAT_006cc7b4;
        }
        if (uVar1 < 0x4173) {
          if (uVar1 == 0x4172) {
switchD_0041ed79_caseD_4152:
            return (float10)_DAT_006cc95c;
          }
          switch(uVar1) {
          case 0x4144:
          case 0x4164:
            return (float10)_DAT_006cca04;
          default:
            goto switchD_0041ed1a_caseD_1003;
          case 0x4150:
          case 0x4170:
            goto LAB_0041ed82;
          case 0x4152:
            goto switchD_0041ed79_caseD_4152;
          }
        }
        if (uVar1 < 0x496f) {
          if (uVar1 != 0x496e) {
            if (uVar1 == 0x4242) goto LAB_0041ee3b;
            if (uVar1 != 0x4966) {
              return fVar3;
            }
          }
          return (float10)_DAT_006cc830;
        }
        if (0x4c56 < uVar1) {
          if (uVar1 < 0x4c59) {
LAB_0041ee3b:
            return (float10)_DAT_006cca10;
          }
          if (uVar1 == 0x4c64) goto LAB_0041ede0;
        }
      }
    }
  }
  else if ((uVar2 == 0x10de) && (0x10f < uVar1)) {
    if (0x342 < uVar1) {
      return (float10)_DAT_006cc7bc;
    }
    if (uVar1 < 0x114) {
      return (float10)_DAT_006cc7b8;
    }
    if ((0x14f < uVar1) && (uVar1 < 0x154)) {
      return (float10)_DAT_006cc960;
    }
    if ((0x16f < uVar1) && (uVar1 < 0x183)) goto LAB_0041ede0;
    if ((0x19f < uVar1) && (uVar1 < 0x1f1)) {
      return (float10)_DAT_006cc90c;
    }
    if ((0x1ff < uVar1) && (uVar1 < 0x204)) goto LAB_0041ee52;
    if ((0x24f < uVar1) && (uVar1 < 0x28a)) {
      return (float10)_DAT_006cca0c;
    }
    if ((0x300 < uVar1) && (uVar1 < 0x333)) {
      if (uVar1 < 0x30b) {
LAB_0041ed82:
        return (float10)_DAT_006cca1c;
      }
      if (uVar1 < 0x31d) {
        return (float10)_DAT_006cca08;
      }
      if (uVar1 < 0x32e) {
        return (float10)_DAT_006cc834;
      }
      fVar3 = (float10)_DAT_006cc968;
    }
  }
switchD_0041ed1a_caseD_1003:
  return fVar3;
}

