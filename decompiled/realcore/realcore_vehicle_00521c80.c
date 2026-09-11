/* spd-match: far pct=41.45 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00521C80 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

int __cdecl FUN_00521b90();
int __cdecl FUN_00567de0();
extern int DAT_006b8d20;
extern int DAT_006b8d21;
extern int DAT_006bf4c4;
extern int DAT_006bf4dc;
extern unsigned char *PTR_DAT_006f7ef4;
extern unsigned char *PTR_DAT_006f7f00;
extern unsigned char *PTR_DAT_006f80e0;
extern unsigned char *PTR_s_C0U0_M0_ENG_MB_006f8000;
extern unsigned char *PTR_s_C0U0_M0_EXH_MB_006f8040;
extern unsigned char *PTR_s_Car_0_Eng_UG_0__006f7eb0;
extern unsigned char *PTR_s_ENV_COMMON_MB_006f7f68;
extern unsigned char *PTR_s_FE_COMMON_MB_006f7f60;
extern unsigned char *PTR_s_Global__006f7ef8;
extern unsigned char *PTR_s_IG_GLOBAL__006f7efc;
extern unsigned char *PTR_s_IMPACT_MB_006f7f78;
extern unsigned char *PTR_s_SKID_PAV_MB_006f7f88;
extern unsigned char *PTR_s_STRM_Music_UG0_MB_006f7f10;
extern unsigned char *PTR_s_STRM_Music_UG0_MB_006f7f14;
extern unsigned char *PTR_s_Skids__006f7f04;
extern unsigned char *PTR_s_TURBO_00_MB_006f8090;
extern unsigned char *PTR_s_TURBO__006f7f08;
extern unsigned char *PTR_s_nitrous_00_mb_006f7fc4;
void __fastcall FUN_00521c80(int obj)

{
  int iVar1;

  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 *puVar5;
  
  *(undefined4 *)(obj + 0x34) = 0;
  switch(*(undefined4 *)(obj + 0x38)) {
  case 0:
    *(undefined **)(obj + 0x2c) = (&PTR_s_FE_COMMON_MB_006f7f60)[*(int *)(obj + 0x3c)];
    if (*(int *)(obj + 0x3c) == 0) {
      *(undefined **)(obj + 0x30) = PTR_s_Global__006f7ef8;
    }
    else {
      *(undefined **)(obj + 0x30) = PTR_DAT_006f7ef4;
    }
    break;
  case 1:
    *(undefined **)(obj + 0x2c) =
         (&PTR_s_STRM_Music_UG0_MB_006f7f10)[*(int *)(obj + 0x3c) * 2];
    *(undefined **)(obj + 0x34) =
         (&PTR_s_STRM_Music_UG0_MB_006f7f14)[*(int *)(obj + 0x3c) * 2];
    break;
  default:
    *(undefined4 *)(obj + 0x2c) = 0;
    break;
  case 3:
    *(undefined **)(obj + 0x2c) = (&PTR_s_ENV_COMMON_MB_006f7f68)[*(int *)(obj + 0x3c)];
    *(undefined **)(obj + 0x30) = PTR_s_IG_GLOBAL__006f7efc;
    break;
  case 6:
    *(undefined **)(obj + 0x2c) = (&PTR_s_IMPACT_MB_006f7f78)[*(int *)(obj + 0x3c) * 2];
    *(undefined **)(obj + 0x30) = PTR_s_IG_GLOBAL__006f7efc;
    break;
  case 7:
    *(undefined **)(obj + 0x2c) =
         (&PTR_s_SKID_PAV_MB_006f7f88)[*(int *)(obj + 0x3c) * 5 + *(int *)(obj + 0x40)];
    if (*(int *)(obj + 0x3c) == 2) {
      *(undefined **)(obj + 0x30) = PTR_s_IG_GLOBAL__006f7efc;
    }
    else {
      *(undefined **)(obj + 0x30) = PTR_s_Skids__006f7f04;
    }
    break;
  case 8:
    iVar1 = *(int *)(obj + 0x3c);
    *(undefined **)(obj + 0x2c) =
         (&PTR_s_nitrous_00_mb_006f7fc4)[iVar1 + *(int *)(obj + 0x40) + iVar1 * 4];
    if ((iVar1 == 1) || (iVar1 == 2)) {
      *(undefined **)(obj + 0x30) =
           (&PTR_s_Car_0_Eng_UG_0__006f7eb0)[*(int *)(obj + 0x40) + iVar1 * 4];
    }
    else {
      *(undefined **)(obj + 0x30) = PTR_DAT_006f7f00;
    }
    break;
  case 10:
    *(undefined **)(obj + 0x2c) =
         (&PTR_DAT_006f80e0)[*(int *)(obj + 0x40) + *(int *)(obj + 0x3c)];
    break;
  case 0xc:
    iVar1 = *(int *)(obj + 0x40) + *(int *)(obj + 0x3c) * 4;
    *(undefined **)(obj + 0x2c) = (&PTR_s_C0U0_M0_ENG_MB_006f8000)[iVar1];
    *(undefined **)(obj + 0x30) = (&PTR_s_Car_0_Eng_UG_0__006f7eb0)[iVar1];
    break;
  case 0xd:
    iVar1 = *(int *)(obj + 0x3c);
    *(undefined **)(obj + 0x2c) =
         (&PTR_s_C0U0_M0_EXH_MB_006f8040)[iVar1 + *(int *)(obj + 0x40) + iVar1 * 4];
    *(undefined **)(obj + 0x30) =
         (&PTR_s_Car_0_Eng_UG_0__006f7eb0)[*(int *)(obj + 0x40) + iVar1 * 4];
    break;
  case 0xe:
    *(undefined **)(obj + 0x2c) =
         (&PTR_s_TURBO_00_MB_006f8090)[*(int *)(obj + 0x3c) * 5 + *(int *)(obj + 0x40)];
    *(undefined **)(obj + 0x30) = PTR_s_TURBO__006f7f08;
  }
  if (*(int *)(obj + 0x34) != 0) {
    FUN_00567de0(&DAT_006bf4dc);
    FUN_00567de0(obj + 0x5bc);
    FUN_00567de0(&DAT_006bf4c4);
    FUN_00567de0(obj + 0x5bc);
    FUN_00521b90();
    return;
  }
  uVar2 = FUN_00567de0(&DAT_006bf4dc);
  FUN_00567de0(uVar2);
  FUN_00567de0(obj + 0x63c);
  iVar1 = *(int *)(obj + 0x5b8) * 0x40 + 0xe7c + obj;
  iVar3 = 0;
  cVar4 = 'N';
  do {
    *(char *)(iVar1 + iVar3) = cVar4;
    cVar4 = (&DAT_006b8d21)[iVar3];
    iVar3 = iVar3 + 1;
  } while (cVar4 != '\0');
  cVar4 = 'N';
  puVar5 = &DAT_006b8d20;
  do {
    *(char *)(iVar3 + iVar1) = cVar4;
    cVar4 = puVar5[1];
    iVar3 = iVar3 + 1;
    puVar5 = puVar5 + 1;
  } while (cVar4 != '\0');
  *(undefined1 *)(iVar3 + iVar1) = 0;
  return;
}
