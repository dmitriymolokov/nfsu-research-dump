/* spd-match: far pct=22.95 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142537Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0063e8b0();
int __cdecl FUN_0063f150();
int __cdecl FUN_0063f170();
int __cdecl FUN_0063f190();
int __cdecl FUN_0063f1a0();
int __cdecl FUN_00641a70();
int __cdecl FUN_00642450();
int __cdecl FUN_00642570();
extern int DAT_0070ff3c;
extern int DAT_0070ff90;
extern unsigned int uRam0070ff6c;
extern unsigned int uRam0070ff94;

extern int uRam0070ff94;
extern int uRam0070ff6c;
extern unsigned char UNK_00643010[];
extern unsigned char UNK_00642fb0[];






void FUN_00643090(void)

{
  char cVar1;
  
  FUN_00642570(&UNK_00643010);
  FUN_0063f150(0x70ff44);
  uRam0070ff94 = 1;
  uRam0070ff6c = 0;
  FUN_00641a70(&DAT_0070ff3c);
  DAT_0070ff90 = 1;
  FUN_0063f190(0x70ff44);
  cVar1 = FUN_0063e8b0(0x70ff60,&UNK_00642fb0,0,0,1);
  if (cVar1 == '\0') {
    FUN_0063f170();
    uRam0070ff94 = 0;
    FUN_00642450("wininittimer - FAILED TO CREATE SECONDARY TIMER`S THREAD.\n");
    return;
  }
  FUN_0063f1a0(0x70ff44);
  return;
}
