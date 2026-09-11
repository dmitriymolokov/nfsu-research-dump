/* spd-match: far pct=24.76 flags=/O1 /c /nologo /TC method=pass_a_tc source=reports/m375_p3/buckets/research_misc/batches/20260724T142537Z_w0_tc0 */
#include "ghidra_compat.h"

#undef NAN
#define NAN(x) ((x)!=(x))
typedef unsigned int WPARAM;
typedef long LRESULT;
typedef struct tagMSG { unsigned char _[48]; } MSG, tagMSG, *LPMSG;
int __cdecl FUN_m375_thunk_helper(void);

int __cdecl FUN_0063f150();
int __cdecl FUN_00640a10();
extern unsigned int uRam0070f700;
extern unsigned int uRam0070f70c;
extern unsigned int uRam0070fd64;
int __cdecl func_0x0063fed0();

extern int iRam0070fd98;
extern int uRam0070f700;
extern int uRam0070fd64;
extern int uRam0070f70c;
extern unsigned char UNK_00640540[];
extern unsigned char UNK_006405a0[];
extern unsigned char UNK_006405c0[];
extern unsigned char UNK_00640840[];
extern unsigned char UNK_00640710[];
extern unsigned char UNK_00640770[];
extern unsigned char UNK_00640aa0[];
extern unsigned char UNK_006407e0[];
extern unsigned char UNK_006407b0[];
extern unsigned char UNK_00640740[];
extern unsigned char UNK_006408a0[];
extern unsigned char UNK_00640900[];
extern unsigned char UNK_006409b0[];
extern unsigned char UNK_006412d0[];
extern unsigned char UNK_00641330[];
extern unsigned char UNK_00640ad0[];






void FUN_00641550(void)

{
  if (iRam0070fd98 == 0) {
    FUN_0063f150(0x70f6d4);
    uRam0070f700 = 0x20;
    uRam0070fd64 = 0;
    uRam0070f70c = 0;
    func_0x0063fed0(1,&UNK_00640540);
    func_0x0063fed0(0x1c,&UNK_006405a0);
    func_0x0063fed0(6,&UNK_006405c0);
    func_0x0063fed0(5,&UNK_00640840);
    func_0x0063fed0(3,&UNK_00640840);
    func_0x0063fed0(0x10,&UNK_00640710);
    func_0x0063fed0(2,&UNK_00640770);
    func_0x0063fed0(0xf,FUN_00640a10);
    func_0x0063fed0(0x14,&UNK_00640aa0);
    func_0x0063fed0(0x1a,&UNK_006407e0);
    func_0x0063fed0(0x112,&UNK_006407b0);
    func_0x0063fed0(0x466,&UNK_00640740);
    func_0x0063fed0(0x102,&UNK_006408a0);
    func_0x0063fed0(0x100,&UNK_00640900);
    func_0x0063fed0(0x104,&UNK_00640900);
    func_0x0063fed0(0x101,&UNK_006409b0);
    func_0x0063fed0(0x105,&UNK_006409b0);
    func_0x0063fed0(0x201,&UNK_006412d0);
    func_0x0063fed0(0x207,&UNK_006412d0);
    func_0x0063fed0(0x204,&UNK_006412d0);
    func_0x0063fed0(0x203,&UNK_006412d0);
    func_0x0063fed0(0x209,&UNK_006412d0);
    func_0x0063fed0(0x206,&UNK_006412d0);
    func_0x0063fed0(0x202,&UNK_00641330);
    func_0x0063fed0(0x208,&UNK_00641330);
    func_0x0063fed0(0x205,&UNK_00641330);
    func_0x0063fed0(0x200,&UNK_00641330);
    func_0x0063fed0(0x218,&UNK_00640ad0);
    iRam0070fd98 = 1;
  }
  return;
}
