/* spd-match: far pct=18.12 flags=/O2 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_0052F7B0 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

extern unsigned char *DAT_0078eab4;
extern unsigned char *DAT_0078eab8;
extern unsigned char *DAT_0078eabc;
extern unsigned char *DAT_0078eac0;
extern unsigned char *DAT_0078eac4;
extern unsigned char *DAT_0078eac8;
extern unsigned char *DAT_0078eacc;
extern unsigned char *DAT_0078ead0;
extern unsigned char *DAT_0078ead4;
extern unsigned char *DAT_0078ead8;
extern unsigned char *DAT_0078eadc;
int __fastcall FUN_0052f7b0(undefined4 val)

{

  int iVar1;
  
  switch(val) {
  case 0:
  case 7:
  case 8:
  case 0xd:
  case 0xe:
    DAT_0078ead8 = DAT_0078ead8 + 1;
    if (2 < DAT_0078ead8) {
      DAT_0078ead8 = 0;
    }
    return DAT_0078ead8 + 0xd;
  case 1:
    iVar1 = DAT_0078eac8 + 1;
    DAT_0078eac8 = iVar1;
    if (2 < iVar1) {
      DAT_0078eac8 = 0;
      return 0;
    }
    break;
  case 2:
    DAT_0078eac0 = DAT_0078eac0 + 1;
    if (1 < DAT_0078eac0) {
      DAT_0078eac0 = 0;
    }
    return DAT_0078eac0 + 0xb;
  case 3:
    DAT_0078eadc = DAT_0078eadc + 1;
    if (0 < DAT_0078eadc) {
      DAT_0078eadc = 0;
    }
    return DAT_0078eadc + 0x1c;
  case 4:
    DAT_0078ead0 = DAT_0078ead0 + 1;
    if (2 < DAT_0078ead0) {
      DAT_0078ead0 = 0;
    }
    return DAT_0078ead0 + 3;
  case 5:
    DAT_0078eac4 = DAT_0078eac4 + 1;
    if (2 < DAT_0078eac4) {
      DAT_0078eac4 = 0;
    }
    return DAT_0078eac4 + 0x16;
  case 6:
    DAT_0078eabc = DAT_0078eabc + 1;
    if (1 < DAT_0078eabc) {
      DAT_0078eabc = 0;
    }
    return DAT_0078eabc + 6;
  case 9:
  case 10:
  case 0xb:
    DAT_0078ead4 = DAT_0078ead4 + 1;
    if (2 < DAT_0078ead4) {
      DAT_0078ead4 = 0;
    }
    return DAT_0078ead4 + 0x10;
  case 0xc:
    DAT_0078eacc = DAT_0078eacc + 1;
    if (2 < DAT_0078eacc) {
      DAT_0078eacc = 0;
    }
    return DAT_0078eacc + 8;
  case 0xf:
    DAT_0078eab4 = DAT_0078eab4 + 1;
    if (2 < DAT_0078eab4) {
      DAT_0078eab4 = 0;
    }
    return DAT_0078eab4 + 0x19;
  case 0x10:
    DAT_0078eab8 = DAT_0078eab8 + 1;
    if (2 < DAT_0078eab8) {
      DAT_0078eab8 = 0;
    }
    return DAT_0078eab8 + 0x13;
  default:
    iVar1 = 8;
  }
  return iVar1;
}
