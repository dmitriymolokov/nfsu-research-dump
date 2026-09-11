/* Decompiled from Speed.exe @ 004e1290 */
/* Module: FEng_FE */
/* Ghidra DecompileAll */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e1290(int param_1,uint param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined1 extraout_CL;
  undefined4 extraout_ECX;
  
  if (param_2 < 0x9120409f) {
    if (param_2 != 0x9120409e) {
      if (0x46671a09 < param_2) {
        if (param_2 != 0x911ab364) {
          return;
        }
        cVar1 = FUN_004e0bf0();
        if (((cVar1 != '\0') && (*(int *)(param_1 + 0xc0) == 0)) ||
           ((cVar1 = FUN_004e0bf0(), cVar1 != '\0' && (*(int *)(param_1 + 0xc0) == 1)))) {
          FUN_004f6430("GarageMain_2p.fng");
          FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
          return;
        }
        if (*(char *)(param_1 + 200) != '\0') {
          return;
        }
        cVar1 = FUN_004e0bf0();
        if (cVar1 == '\0') {
          cVar1 = FUN_004e0bf0();
          if (cVar1 == '\0') {
            return;
          }
          if ((*(char *)(param_1 + 0xad) != '\0') && (DAT_00777cc8 != 5)) {
            *(undefined1 *)(param_1 + 0x7c) = 0;
            FUN_004e02d0(param_1 + 0xa4);
            return;
          }
          if ((*(char *)(param_1 + 0xac) != '\0') && (DAT_00777cc8 != 5)) {
            *(undefined1 *)(param_1 + 0xac) = 0;
            FUN_004e0270();
            FUN_00414a10();
            return;
          }
          FUN_004f6430("GarageMain_2p.fng");
          FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
          return;
        }
        if ((*(char *)(param_1 + 0x91) != '\0') && (DAT_00777cc8 != 5)) {
          *(undefined1 *)(param_1 + 0x58) = extraout_CL;
          FUN_004e02d0(param_1 + 0x88);
          return;
        }
        if ((*(char *)(param_1 + 0x90) != '\0') && (DAT_00777cc8 != 5)) {
          *(undefined1 *)(param_1 + 0x90) = 0;
          FUN_004e0270();
          FUN_00414a10();
          return;
        }
        FUN_004f6430("GarageMain_2p.fng");
        FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
        return;
      }
      if (param_2 == 0x46671a09) {
        if (*(int *)(param_3 + 0x10) == -0x728cc398) {
          FUN_004f6b70("Highlight",1);
          return;
        }
        if (*(int *)(param_3 + 0x10) != -0x217fc917) {
          return;
        }
        FUN_004f6b70("Highlight",1);
        return;
      }
      if (param_2 == 0x12341110) {
        *(undefined1 *)(param_1 + 200) = 0;
        cVar1 = FUN_004e0bf0();
        if (cVar1 == '\0') {
          FUN_004e0d10(1);
          return;
        }
        FUN_004e0d10(extraout_ECX);
        return;
      }
      if (param_2 != 0x406415e3) {
        return;
      }
      if (*(char *)(param_1 + 200) != '\0') {
        return;
      }
      cVar1 = FUN_004e0bf0();
      if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc0) == 0)) {
        return;
      }
      cVar1 = FUN_004e0bf0();
      if (cVar1 != '\0') {
        if (*(int *)(param_1 + 0xc0) == 1) {
          return;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          return;
        }
      }
      cVar1 = FUN_004e0bf0();
      if (cVar1 == '\0') {
        cVar1 = FUN_004e0bf0();
        if (cVar1 == '\0') goto LAB_004e141a;
        if (*(char *)(param_1 + 0x7c) == '\0') {
          *(undefined1 *)(param_1 + 0x7c) = 1;
          if (DAT_00777cc8 == 5) {
            *(undefined1 *)(param_1 + 0xac) = 1;
            FUN_00414a60();
          }
          else {
            FUN_004e0270();
          }
          goto LAB_004e141a;
        }
        if (*(char *)(param_1 + 0xac) != '\0') goto LAB_004e141a;
        FUN_00414a60();
        *(undefined1 *)(param_1 + 0xac) = 1;
        if (DAT_00777cc8 == 5) goto LAB_004e141a;
        iVar2 = param_1 + 0xa4;
      }
      else {
        if (*(char *)(param_1 + 0x58) == '\0') {
          *(undefined1 *)(param_1 + 0x58) = 1;
          if (DAT_00777cc8 == 5) {
            *(undefined1 *)(param_1 + 0x90) = 1;
            FUN_00414a60();
          }
          else {
            FUN_004e0270();
          }
          goto LAB_004e141a;
        }
        if (*(char *)(param_1 + 0x90) != '\0') goto LAB_004e141a;
        FUN_00414a60();
        *(undefined1 *)(param_1 + 0x90) = 1;
        if (DAT_00777cc8 == 5) goto LAB_004e141a;
        iVar2 = param_1 + 0x88;
      }
      FUN_004e02d0(iVar2);
LAB_004e141a:
      if (*(char *)(param_1 + 0x58) == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x7c) == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x90) == '\0') {
        return;
      }
      if (*(char *)(param_1 + 0xac) == '\0') {
        return;
      }
      FUN_004f6360(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  else {
    if (0xc519bfc0 < param_2) {
      if (param_2 != 0xc98356ba) {
        return;
      }
      if (((DAT_00746968 != 0) && (DAT_00746968 != 0x7fffffff)) &&
         (_DAT_006faf00 <= (float)(DAT_0073ad3c - DAT_00746968) * _DAT_006cca38)) {
        FUN_004b23b0(*(int *)(param_1 + 0x4c) + 0x10,1);
        DAT_00746968 = 0;
      }
      if (((DAT_00746964 != 0) && (DAT_00746964 != 0x7fffffff)) &&
         (_DAT_006faf00 <= (float)(DAT_0073ad3c - DAT_00746964) * _DAT_006cca38)) {
        FUN_004b23b0(*(int *)(param_1 + 0x70) + 0x10,1);
        DAT_00746964 = 0;
      }
      iVar2 = *(int *)(param_1 + 0xc0);
      if (((iVar2 == 0) || (iVar2 == 1)) && (iVar2 != 1)) {
        return;
      }
      FUN_004f3f90(&DAT_00746104);
      return;
    }
    if (param_2 == 0xc519bfc0) {
      cVar1 = FUN_004e0bf0();
      if (((cVar1 == '\0') || (*(int *)(param_1 + 0xc0) == 0)) ||
         (*(char *)(param_1 + 0x58) != '\0')) {
        cVar1 = FUN_004e0bf0();
        if (cVar1 == '\0') {
          return;
        }
        if (*(int *)(param_1 + 0xc0) == 1) {
          return;
        }
        if (*(int *)(param_1 + 0xc0) == 0) {
          return;
        }
        if (*(char *)(param_1 + 0x7c) != '\0') {
          return;
        }
      }
      if (*(char *)(param_1 + 200) != '\0') {
        return;
      }
      *(uint *)(param_1 + 0xc4) = param_4;
      FUN_004e1b20(0xc519bfc0);
      return;
    }
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xb5af2461) {
        return;
      }
      if (*(int *)(param_1 + 0xc0) == 0) {
        FUN_004e0cb0(param_1);
        *(undefined4 *)(param_1 + 0xc0) = 1;
        FUN_00495fc0();
        FUN_00495f70();
        FUN_00495f70();
        return;
      }
      if (*(int *)(param_1 + 0xc0) != 1) {
        return;
      }
      if ((param_4 & 1) == 0) {
        if ((param_4 & 2) == 0) {
          if ((param_4 & 4) == 0) {
            iVar2 = (-(uint)((param_4 & 8) != 0) & 4) - 1;
          }
          else {
            iVar2 = 2;
          }
        }
        else {
          iVar2 = 1;
        }
      }
      else {
        iVar2 = 0;
      }
      if (DAT_00748f78 == iVar2) {
        return;
      }
      DAT_00748f7c = iVar2;
      FUN_00495f70();
      FUN_004e0c50();
      FUN_004b2220();
      return;
    }
  }
  if (*(char *)(param_1 + 200) == '\0') {
    cVar1 = FUN_004e0bf0();
    if ((cVar1 == '\0') || (*(int *)(param_1 + 0xc0) == 0)) {
      cVar1 = FUN_004e0bf0();
      if ((cVar1 != '\0') && ((*(int *)(param_1 + 0xc0) != 1 && (*(int *)(param_1 + 0xc0) != 0)))) {
        if (*(char *)(param_1 + 0x7c) == '\0') goto LAB_004e1807;
        if ((*(char *)(param_1 + 0xac) == '\0') && (DAT_00777cc8 != 5)) {
          FUN_004e0560();
          return;
        }
      }
    }
    else {
      if (*(char *)(param_1 + 0x58) == '\0') {
LAB_004e1807:
        FUN_004e1a10(param_2);
        return;
      }
      if ((*(char *)(param_1 + 0x90) == '\0') && (DAT_00777cc8 != 5)) {
        FUN_004e0560();
        return;
      }
    }
  }
  return;
}

