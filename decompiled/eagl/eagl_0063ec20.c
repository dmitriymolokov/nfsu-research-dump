/* spd-match: far pct=14.37 M4.0.2-CE */
/* Decompiled from Speed.exe @ 0063ec20 */
/* Module: EAGL */
/* Ghidra DecompileAll */


#include "ghidra_compat.h"

typedef struct {
    unsigned int wPeriodMin;
    unsigned int wPeriodMax;
} TIMECAPS_FIXED;

extern int DAT_0070f52c;
extern unsigned int DAT_0070fe00;
extern int DAT_0070f514;
extern int DAT_0070f518;
extern int DAT_0070fe24;
extern int DAT_0070fe20;
extern int DAT_0070f4f4;
extern int DAT_0070f4f8;
extern void * DAT_0070f4fc;
extern void * LAB_0063ea00;
extern void * DAT_0070f51c;
extern int DAT_0070f524;
extern int DAT_0070f50c;
extern unsigned int DAT_0070f508;

int FUN_0063ec20(int param_1)

{
  unsigned int uVar1;
  char cVar2;
  unsigned int MVar3;
  int iVar4;
  unsigned long DVar5;
  unsigned long DVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  int local_c;
  TIMECAPS_FIXED local_8;
  
  local_c = 5;
  if (DAT_0070f52c == 0) {
    DAT_0070f52c = 1;
    puVar9 = &DAT_0070fe00;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  do {
    FUN_0063eb90();
    if (param_1 == 0) {
LAB_0063ec83:
      param_1 = 100;
    }
    else if ((param_1 < 1) || (10000 < param_1)) {
      FUN_00642450("TIMER_init - BAD TIMER FREQUENCY SPECIFIED %d\n",param_1);
      goto LAB_0063ec83;
    }
    DAT_0070f514 = (int)(0x3e80000 / (longlong)param_1);
    DAT_0070f518 = 0;
    DAT_0070fe24 = 0;
    MVar3 = timeGetDevCaps(&local_8,8);
    if (MVar3 != 0) {
      FUN_00642450("TIMER_init - MULTIMEDIA TIMER NOT FOUND.\n");
      DAT_0070fe20 = 0;
      DAT_0070f4f4 = 0;
      return 0;
    }
    local_8.wPeriodMin = 1;
    local_8.wPeriodMax = 1;
    DAT_0070f4f8 = 1;
    if (DAT_0070f514 < 0x10000) {
      FUN_00642450("TIMER_init - MULTIMEDIA TIMER CANNOT SUPPORT THIS FREQUENCY.\n");
      DAT_0070fe20 = 0;
      DAT_0070f4f4 = 0;
      return 0;
    }
    FUN_0063f210(&DAT_0070f4fc,0xc);
    cVar2 = FUN_0063e8b0(&DAT_0070f4fc,&LAB_0063ea00,0,0,2);
    if (cVar2 == '\0') {
      FUN_00642450("TIMER_init - FAILED TO CREATE TIMER THREAD.\n");
      DAT_0070fe20 = 0;
      DAT_0070f4f4 = 0;
      return 0;
    }
    MVar3 = timeBeginPeriod(DAT_0070f4f8);
    if (MVar3 != 0) {
      DAT_0070fe20 = 0;
      DAT_0070f4f4 = 0;
      FUN_00641a90(&DAT_0070f51c);
      FUN_00642450("TIMER_init - FAILED TO INITIALIZE MULTIMEDIA TIMER : 0x%x.\n",MVar3);
      return DAT_0070fe20;
    }
    FUN_00642570(FUN_0063eb90);
    uVar1 = DAT_0070f524;
    DAT_0070f4f4 = param_1;
    DAT_0070fe20 = param_1;
    if ((param_1 != 0) && (DAT_0070f50c == 0)) {
      DAT_0070f524 = 1;
      DAT_0070f508 = GetTickCount();
      FUN_0063eaa0(0,0,0,0,0);
    }
    DAT_0070f524 = uVar1;
    iVar4 = FUN_0063fc90();
    DVar5 = GetTickCount();
    iVar8 = DAT_0070fe20 * 5;
    DVar6 = GetTickCount();
    while (((int)DVar6 < (int)(DVar5 + iVar8) && (iVar7 = FUN_0063fc90(), iVar4 == iVar7))) {
      FUN_0063e5c0(1);
      DVar6 = GetTickCount();
    }
    iVar8 = FUN_0063fc90();
    if (iVar4 == iVar8) {
      FUN_0063eb90();
    }
    if (DAT_0070fe20 != 0) {
      return DAT_0070fe20;
    }
    local_c = local_c + -1;
    if (local_c == 0) {
      FUN_00642450("TIMER_init - FAILED TO INITIALIZE WINDOWS MULTIMEDIA TIMER, TRY RE-RUNNING.\n");
      return DAT_0070fe20;
    }
  } while( true );
}

