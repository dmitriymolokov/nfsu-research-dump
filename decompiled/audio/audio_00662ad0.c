/* spd-match: far pct=15.15 flags=/O1 /c /nologo /TC method=m39 source=m39/3.9.26.4/va_00662AD0 */
/* Build form: Ghidra in_EAX → __fastcall status (callers pass prior Winsock return).
 * Matching wall: orig test eax,eax vs mov eax,ecx — ledger/inventory 42.62% was in_EAX+/Gr. */
int __stdcall Ordinal_111(void);

int __fastcall FUN_00662ad0(int status)
{
  int err;

  if (status >= 0) {
    return status;
  }
  err = Ordinal_111();
  if (err == 0x2733 || err == 0x2746) {
    return 0;
  }
  if (err == 0x2743) {
    return -5;
  }
  if (err == 0x2749) {
    return -2;
  }
  if (err == 0x274d) {
    return -6;
  }
  return -7;
}
