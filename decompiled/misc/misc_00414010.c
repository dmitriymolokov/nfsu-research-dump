/* spd-match: far pct=12.80 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00414010 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00407b40();
int __cdecl FUN_004f65d0();
extern int DAT_0071b808;
extern int DAT_00736344;
extern unsigned char *DAT_0078dce4;
extern unsigned char *DAT_0078dce8;
extern void LAB_004141df(void);
int unaff_ESI;
void __fastcall FUN_00414010(uint val)

{

  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  uVar3 = 0;
  if (val < 0x863a1227) {
    if (val == 0x863a1226) {
      uVar2 = 5;
      goto LAB_004141df;
    }
    if (val < 0x4890bd64) {
      if (val == 0x4890bd63) {
        uVar2 = 1;
      }
      else if (val < 0x3309a5f2) {
        if (val == 0x3309a5f1) {
          uVar2 = 8;
          goto LAB_004141df;
        }
        if (val == 0x1c0af2a2) {
          uVar2 = 8;
        }
        else {
          if (val != 0x22a3bab9) {
            if (val != 0x29b105f2) {
              return;
            }
            uVar2 = 10;
            goto LAB_004141df;
          }
          uVar2 = 6;
        }
      }
      else if (val == 0x34fb3a90) {
        uVar2 = 0xe;
      }
      else {
        if (val != 0x42e9cf4f) {
          return;
        }
        uVar2 = 7;
      }
    }
    else if (val < 0x7d3f26af) {
      if (val == 0x7d3f26ae) {
        uVar2 = 4;
        goto LAB_004141df;
      }
      if (val == 0x5a0a56e3) {
        uVar2 = 10;
      }
      else {
        if (val != 0x6c00828b) {
          if (val != 0x7cd293a8) {
            return;
          }
          uVar2 = 3;
          goto LAB_004141df;
        }
        uVar2 = 0xc;
      }
    }
    else {
      if (val != 0x836d9ef3) {
        if (val != 0x844010f3) {
          return;
        }
        uVar2 = 0xd;
        goto LAB_004141df;
      }
      uVar2 = 9;
    }
  }
  else if (val < 0xe9dac113) {
    if (val == 0xe9dac112) {
      uVar2 = 2;
    }
    else {
      if (0xc9a3969f < val) {
        if (val == 0xd6830a02) {
          uVar2 = 9;
        }
        else {
          if (val != 0xdfd37c48) {
            return;
          }
          uVar2 = 6;
        }
        goto LAB_004141df;
      }
      if (val == 0xc9a3969f) {
        uVar2 = 4;
      }
      else {
        if (val != 0x94882624) {
          if (val == 0x95cb1a5f) {
            uVar2 = 0xe;
          }
          else {
            if (val != 0xb558279a) {
              return;
            }
            uVar2 = 0xc;
          }
          goto LAB_004141df;
        }
        uVar2 = 0xd;
      }
    }
  }
  else if (val < 0xfbc62a1a) {
    if (val != 0xfbc62a19) {
      if (val == 0xf0b31861) {
        uVar2 = 2;
      }
      else {
        if (val != 0xf53f735e) {
          return;
        }
        uVar2 = 7;
      }
      goto LAB_004141df;
    }
    uVar2 = 3;
  }
  else {
    if (val != 0xfd074017) {
      if (val != 0xfe6bcc72) {
        return;
      }
      uVar2 = 1;
      goto LAB_004141df;
    }
    uVar2 = 5;
  }
  uVar3 = 1;
LAB_004141df:
  *(uint *)(unaff_ESI + 0x84) = val;
  iVar1 = DAT_00736344;
  *(undefined1 *)(unaff_ESI + 0x80) = 1;
  iVar1 = (&DAT_0071b808)[iVar1 * 3];
  *(undefined4 *)(&DAT_0078dce4 + iVar1 * 0x270) = uVar2;
  *(undefined4 *)(&DAT_0078dce8 + iVar1 * 0x270) = uVar3;
  FUN_00407b40();
  iVar1 = FUN_004f65d0();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}
