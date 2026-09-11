/* spd-match: far pct=50.93 flags=/O1 /c /nologo /TC method=m39 build_strip source=m39/3.9.26.5/va_00548E30 */
/* M3.9.26.5: Ghidra EAX local → __fastcall typed arg (build strip; % may drop). */
#include "ghidra_compat.h"

char * __fastcall FUN_00548e30(undefined4 val)

{

  switch(val) {
  case 0:
    return "R_SC_WELCOME";
  case 1:
    return "R_BI_CARDESCRIPTION";
  case 2:
    return "U_BI_CARSPAM";
  case 3:
    return "U_CS_CLOCKSYNC";
  case 4:
    return "U_SC_CARSPAMCLOCKSYNC";
  case 5:
    return "U_BI_SCORE";
  case 6:
    return "U_SC_SYNCANIMATION";
  case 7:
    return "R_BI_DRIVERFINISH";
  case 8:
    return "R_BI_KEEPALIVE";
  case 9:
    return "R_CS_CLIENTQUIT";
  case 10:
    return "R_SC_SERVERQUIT";
  case 0xb:
    return "R_SC_CLIENTLEFT";
  case 0xc:
    return "R_CS_CSTATECHANGE";
  case 0xd:
    return "R_SC_SSTATECHANGE";
  case 0xe:
    return "R_BI_DATACRC";
  default:
    return "Unknown";
  }
}
