/* spd-match: far pct=7.32 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00638260 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern void LAB_0063835e(void);
extern void LAB_0063837f(void);
extern void LAB_00638410(void);
extern void LAB_0063843c(void);
extern void LAB_0063848c(void);
extern void LAB_006384da(void);
extern void LAB_00638502(void);
extern void LAB_00638558(void);
void __fastcall FUN_00638260(int obj)

{
  uint uVar1;

  int iVar2;
  uint uVar3;
  
  if (((*(byte *)(obj + 0x250) & 0x10) == 0) || ((*(byte *)(obj + 0x254) & 2) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = *(uint *)(obj + 0x2f8) ^ (iVar2 << 4 ^ *(uint *)(obj + 0x2f8)) & 0x10;
  uVar1 = *(uint *)(obj + 0x204);
  *(uint *)(obj + 0x2f8) = uVar3;
  if (uVar1 < 0x10de0030) {
    if (0x10de0027 < uVar1) {
LAB_0063843c:
      *(uint *)(obj + 0x2f8) = uVar3 | 1;
      return;
    }
    if (0x10025144 < uVar1) {
      if (uVar1 < 0x10330047) {
        if (uVar1 == 0x10330046) {
LAB_0063837f:
          *(undefined4 *)(obj + 700) = 1;
          *(uint *)(obj + 0x2f8) = *(uint *)(obj + 0x2f8) | 0x10;
          return;
        }
        if (uVar1 < 0x102b0522) {
          if (0x102b051f < uVar1) {
            return;
          }
          if (uVar1 == 0x10025157) goto LAB_0063835e;
        }
        else if (uVar1 == 0x1033002a) goto LAB_0063837f;
      }
      else {
        if (uVar1 == 0x10396326) {
          return;
        }
        if (uVar1 == 0x104c3d07) {
LAB_0063848c:
          *(undefined4 *)(obj + 700) = 1;
          *(uint *)(obj + 0x2f8) = *(uint *)(obj + 0x2f8) | 0x20;
          goto LAB_00638558;
        }
        if (uVar1 == 0x10de0020) {
          *(uint *)(obj + 0x2f8) = uVar3 | 1;
          return;
        }
      }
      goto LAB_00638502;
    }
    if (uVar1 == 0x10025144) {
LAB_0063835e:
      *(uint *)(obj + 0x248) = *(uint *)(obj + 0x248) & 0xffeffeff;
      return;
    }
    if (uVar1 < 0x10024c43) {
      if (uVar1 != 0x10024c42) {
        if (uVar1 < 0x10024745) {
          if (uVar1 != 0x10024744) {
            if (uVar1 == 0x3d00d1) goto LAB_00638410;
            if (uVar1 != 0x10024742) goto LAB_00638502;
          }
        }
        else if (uVar1 != 0x10024749) goto LAB_00638502;
      }
    }
    else if (((uVar1 != 0x10024c44) && (uVar1 != 0x10024c47)) && (uVar1 != 0x10024c49))
    goto LAB_00638502;
  }
  else {
    if (uVar1 < 0x3d3d000b) {
      if (uVar1 == 0x3d3d000a) goto LAB_0063843c;
      if (uVar1 < 0x121a0004) {
        if (uVar1 == 0x121a0003) {
          return;
        }
        if (uVar1 < 0x121a0002) {
          if (uVar1 == 0x121a0001) {
            *(undefined4 *)(obj + 700) = 1;
            *(uint *)(obj + 0x2f8) = *(uint *)(obj + 0x2f8) | 1;
            return;
          }
          if (0x10de00ff < uVar1) {
            if (uVar1 < 0x10de0104) {
              return;
            }
            if (uVar1 == 0x110b0004) goto LAB_00638410;
          }
        }
        else if (uVar1 == 0x121a0002) goto LAB_0063843c;
      }
      else if (uVar1 < 0x12d2001a) {
        if (0x12d20017 < uVar1) {
          *(undefined4 *)(obj + 700) = 1;
          *(uint *)(obj + 0x2f8) = *(uint *)(obj + 0x2f8) | 0x30;
          goto LAB_00638558;
        }
        if ((0x121a0003 < uVar1) && (uVar1 < 0x121a0006)) {
          return;
        }
      }
      else if (uVar1 == 0x3d3d0009) goto LAB_0063848c;
    }
    else if (uVar1 < 0x53338a22) {
      if (0x53338a1f < uVar1) {
        uVar3 = uVar3 & 0xfffffffb;
LAB_006384da:
        *(uint *)(obj + 0x2f8) = uVar3 | 3;
        return;
      }
      if ((uVar1 == 0x53335631) || (uVar1 == 0x5333883d)) {
LAB_00638410:
        *(undefined4 *)(obj + 700) = 1;
        return;
      }
      if (uVar1 == 0x53338a01) {
        *(undefined4 *)(obj + 700) = 1;
        return;
      }
    }
    else {
      if (uVar1 == 0x53338a22) goto LAB_006384da;
      if (uVar1 == 0x53339102) {
        *(uint *)(obj + 0x2f8) = uVar3 | 0x43;
        *(undefined4 *)(obj + 0x298) = 0;
        *(undefined4 *)(obj + 0x2a0) = 0;
        *(undefined4 *)(obj + 0x29c) = 0;
        *(undefined4 *)(obj + 0x2a4) = 0;
        return;
      }
      if (uVar1 == 0x80867800) goto LAB_00638410;
    }
LAB_00638502:
    if ((((0x10025040 < uVar1) && (uVar1 < 0x100250ff)) ||
        ((0x10025240 < uVar1 && (uVar1 < 0x100252ff)))) ||
       ((0x10025340 < uVar1 && (uVar1 < 0x100253ff)))) goto LAB_00638558;
    if (((uVar1 < 0x1002474d) || (0x10024751 < uVar1)) &&
       ((uVar1 < 0x10024c49 || (0x10024c53 < uVar1)))) {
      return;
    }
  }
  *(undefined4 *)(obj + 700) = 1;
LAB_00638558:
  *(uint *)(obj + 0x248) = *(uint *)(obj + 0x248) & 0xffefffff;
  return;
}
