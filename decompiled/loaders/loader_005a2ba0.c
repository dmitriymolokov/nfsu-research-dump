/* spd-match: far pct=5.95 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_005A2BA0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
extern char s_WorldViewProj_00701860[];
extern char s_SND_WORLDImpact_006be750[];
extern int iRam00000000;
extern int iRam00000008;


extern int iRam00000008;
uint __fastcall FUN_005a2ba0(int * obj)

{

  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = (**(code **)(*obj + 4))();
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  iVar3 = obj[0x1619];
  iVar2 = 0;
  if (0 < *(int *)(iVar3 + 0xb08)) {
    piVar4 = (int *)(iVar3 + 0x2c);
    do {
      if (*piVar4 == 0) {
        iVar3 = iVar2 * 0x15c + iVar3 + 0x28;
        return CONCAT31((int3)((uint)iVar3 >> 8),*(int *)(iVar3 + 8) == 1);
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 0x57;
    } while (iVar2 < *(int *)(iVar3 + 0xb08));
  }
  return (uint)(iRam00000008 == 1);
}
