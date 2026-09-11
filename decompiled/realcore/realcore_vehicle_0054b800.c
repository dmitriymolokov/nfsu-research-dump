/* spd-match: far pct=8.21 flags=/O1 /Gr /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0054B800 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00672a10();
extern unsigned char *PTR_s_You_have_been_kicked_out_of_the_r_006f3d7c;
extern unsigned char *PTR_s_has_entered_the_room_006f3d5c;
undefined4 __fastcall FUN_0054b800(int obj, int param_1)

{
  char cVar1;
  char cVar2;

  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *unaff_EBX;
  int iVar6;
  undefined **ppuVar7;
  
  iVar6 = 0;
  do {
    iVar3 = __stricmp(unaff_EBX,(&PTR_s_has_entered_the_room_006f3d5c)[iVar6]);
    if (iVar3 == 0) {
      if (iVar6 == 6) {
        *(undefined4 *)(obj + 0x54c) = 3;
        return 1;
      }
      if (iVar6 != 7) {
        return 1;
      }
      *(undefined4 *)(obj + 0x54c) = 4;
      return 1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  ppuVar7 = &PTR_s_You_have_been_kicked_out_of_the_r_006f3d7c;
  do {
    pcVar5 = *ppuVar7;
    pcVar4 = pcVar5;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar6 = __strnicmp(unaff_EBX,pcVar5,(int)pcVar4 - (int)(pcVar5 + 1));
    if ((iVar6 == 0) &&
       (iVar6 = FUN_00672a10(unaff_EBX + ((int)pcVar4 - (int)(pcVar5 + 1)),0x20), iVar6 == 0)) {
      return 1;
    }
    ppuVar7 = ppuVar7 + 1;
  } while ((int)ppuVar7 < 0x6f3d84);
  if (param_1 != 0) {
    pcVar5 = "Server";
    do {
      cVar1 = pcVar5[param_1 + -0x6bd300];
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      if ((cVar1 == '\0') || (cVar2 == '\0')) break;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}
