/* spd-match: far pct=12.66 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_004C5680 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00495f00();
int __cdecl FUN_00495f70();
int __cdecl FUN_00495fc0();
int __cdecl FUN_004ad6d0();
int __cdecl FUN_004ad7b0();
int __cdecl FUN_004c55f0();
int __cdecl FUN_004c5ce0();
int __cdecl FUN_004ef050();
int __cdecl FUN_004f42f0();
int __cdecl FUN_004f5f80();
int __cdecl FUN_004f65d0();
int __cdecl FUN_004f6850();
int __cdecl FUN_004f6910();
int __cdecl FUN_004f6970();
int __cdecl FUN_004ffb70();
int __cdecl FUN_00674898();
extern int DAT_006ca778;
extern int DAT_0073578c;
extern int DAT_0075f240;
extern void LAB_004c57d9(void);
extern void LAB_004c5820(void);
extern void LAB_004c58b2(void);
extern void LAB_004c58f9(void);
extern void LAB_004c5940(void);
extern void LAB_004c5987(void);
extern void LAB_004c59ce(void);
extern void LAB_004c5a15(void);
extern void LAB_004c5af6(void);
extern void LAB_004c5b3d(void);
extern void LAB_004c5bb3(void);
extern void LAB_004c5bfa(void);
extern void LAB_004c5c1f(void);
void __fastcall FUN_004c5680(int obj)

{
  undefined4 *puVar1;

  undefined4 uVar2;
  int iVar3;
  
  if ((*(char *)(obj + 0x44) == '\0') || (*(int *)(obj + 0x48) != 1)) {
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
      if (DAT_0073578c != 0) {
        FUN_004f5f80(DAT_0073578c,0);
      }
    }
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c57d9:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x4f876b6f);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c57d9;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c57d9;
    }
    FUN_004f6910(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5820:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x2c119933);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5820;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5820;
    }
    FUN_004f6910(iVar3);
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,1);
      if (DAT_0073578c != 0) {
        FUN_004f5f80(DAT_0073578c,1);
        if (DAT_0073578c != 0) {
          FUN_004f5f80(DAT_0073578c,1);
        }
      }
    }
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c58b2:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x14dd31);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c58b2;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c58b2;
    }
    FUN_004f6970(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c58f9:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x6baa2200);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c58f9;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c58f9;
    }
    FUN_004f6970(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5940:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x16821e);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5940;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5940;
    }
    FUN_004f6970(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5987:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x64ddfdff);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5987;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5987;
    }
    FUN_004f6970(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c59ce:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x22ad620e);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c59ce;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c59ce;
    }
    FUN_004f6970(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5a15:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x3434e0ac);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5a15;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5a15;
    }
    FUN_004f6970(iVar3);
  }
  else {
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,1);
      if (DAT_0073578c != 0) {
        FUN_004f5f80(DAT_0073578c,1);
      }
    }
    FUN_00495fc0();
    FUN_00495fc0();
    if (DAT_0073578c != 0) {
      FUN_004f5f80(DAT_0073578c,0);
      if (DAT_0073578c != 0) {
        FUN_004f5f80(DAT_0073578c,0);
        if (DAT_0073578c != 0) {
          FUN_004f5f80(DAT_0073578c,0);
        }
      }
    }
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
    FUN_00495f70();
  }
  puVar1 = *(undefined4 **)(*(int *)(obj + 0x40) + 8);
  FUN_004f6850("Event %d",*puVar1);
  uVar2 = FUN_00674898();
  FUN_004f6850(&DAT_006ca778,uVar2);
  uVar2 = FUN_00674898();
  FUN_004f6850(&DAT_006ca778,uVar2);
  uVar2 = FUN_00674898();
  FUN_004f6850(&DAT_006ca778,uVar2);
  uVar2 = FUN_004ad6d0((int)*(char *)((int)puVar1 + 0x7b));
  FUN_00495f00(uVar2);
  if (puVar1[0x4c] == 0) {
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5bb3:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x4e31ee9f);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5bb3;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5bb3;
    }
    FUN_004f6910(iVar3);
    if (*(int *)(obj + 0xc) == 0) {
LAB_004c5bfa:
      if (DAT_0073578c == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004ef050(0x2e8af64);
      }
    }
    else {
      iVar3 = FUN_004f65d0();
      if (iVar3 == 0) goto LAB_004c5bfa;
      iVar3 = FUN_004ffb70();
      if (iVar3 == 0) goto LAB_004c5bfa;
    }
    FUN_004f6910(iVar3);
    goto LAB_004c5c1f;
  }
  if (*(int *)(obj + 0xc) == 0) {
LAB_004c5af6:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x2e8af64);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004c5af6;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004c5af6;
  }
  FUN_004f6970(iVar3);
  if (*(int *)(obj + 0xc) == 0) {
LAB_004c5b3d:
    if (DAT_0073578c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004ef050(0x4e31ee9f);
    }
  }
  else {
    iVar3 = FUN_004f65d0();
    if (iVar3 == 0) goto LAB_004c5b3d;
    iVar3 = FUN_004ffb70();
    if (iVar3 == 0) goto LAB_004c5b3d;
  }
  FUN_004f6970(iVar3);
  FUN_004ad7b0(puVar1[0x4c]);
  uVar2 = FUN_004c55f0();
  FUN_004f6850(uVar2);
LAB_004c5c1f:
  FUN_004c5ce0(obj,DAT_0075f240);
  uVar2 = FUN_004f42f0("EVENT_%d_REWARD_BLURB",*puVar1);
  FUN_00495f00(uVar2);
  return;
}
