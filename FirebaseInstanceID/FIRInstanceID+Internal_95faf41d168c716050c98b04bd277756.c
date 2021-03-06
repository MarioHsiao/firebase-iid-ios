/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2015 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int _FIRInstanceID_Internal__notifyTokenRefresh_();
int __fastcall _FIRInstanceID_Internal__handleTokenRefreshWithDelay__(void *a1, double a2);
int _FIRInstanceID_Internal__notifyIdentityLost_();
int __fastcall _FIRInstanceID_Internal__handleCommandResetWithDelay__(void *a1, double a2);
int __fastcall _FIRInstanceID_Internal__handleCommandResetFullWithDelay__(void *a1, double a2);
// int __usercall _FIRInstanceID_Internal__handleRefreshMessage_withSubType__@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, void *a3@<rdi>);
int __fastcall _FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay__(double a1);
int __66__FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay___block_invoke();
int __66__FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay___block_invoke_2();
// int __fastcall FIRInstanceIDSharedLogger(_QWORD); weak
// int __fastcall dispatch_after(_QWORD, _QWORD, _QWORD); weak
// int __fastcall dispatch_async(_QWORD, _QWORD); weak
// dispatch_time_t __cdecl dispatch_time(dispatch_time_t when, int64_t delta);
// void *objc_msgSend(void *, const char *, ...); idb
// int __fastcall objc_retainAutoreleasedReturnValue(_QWORD); weak

//-------------------------------------------------------------------------
// Data declarations

__int64 qword_480 = 4611686018427387904LL; // weak
void *off_498 = &OBJC_CLASS___FIRInstanceID; // weak
__int64 (__fastcall *paInstanceid)() = &aInstanceid; // weak
__CFString cfstr_FailedToDelete =
{
  &__CFConstantStringClassReference,
  1992LL,
  "Failed to delete tokens from the cache %@",
  41LL
}; // weak
void *__block_literal_global = &_NSConcreteGlobalBlock; // weak
void *__block_literal_global_30 = &_NSConcreteGlobalBlock; // weak
// extern _UNKNOWN OBJC_CLASS___FIRInstanceID; weak
// extern _UNKNOWN _dispatch_main_q; weak
// extern _UNKNOWN kFIRInstanceIDKeyPairSubType; weak
// extern _UNKNOWN kFIRInstanceIDTokenRefreshNotification; weak
// extern _UNKNOWN kFIRInstanceID_CMD_PING; weak
// extern _UNKNOWN kFIRInstanceID_CMD_RST; weak
// extern _UNKNOWN kFIRInstanceID_CMD_RST_FULL; weak
// extern _UNKNOWN kFIRInstanceID_CMD_SYNC; weak
// extern int (__fastcall *objc_release)(_QWORD); weak
// extern int (__fastcall *objc_retain)(_QWORD); weak


//----- (0000000000000000) ----------------------------------------------------
int _FIRInstanceID_Internal__notifyTokenRefresh_()
{
  void *v0; // rax@1
  void *v1; // rax@1
  void *v2; // rbx@1

  v0 = objc_msgSend(&OBJC_CLASS___FIRInstanceID, (const char *)paInstanceid);
  LODWORD(v1) = objc_retainAutoreleasedReturnValue(v0);
  v2 = v1;
  objc_msgSend(v1, (const char *)*(&paInstanceid + 1), COERCE_DOUBLE(0x4000000000000000LL));
  return objc_release(v2);
}
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (000000000000004C) ----------------------------------------------------
int __fastcall _FIRInstanceID_Internal__handleTokenRefreshWithDelay__(void *a1, double a2)
{
  void *v2; // rax@1
  void *v3; // rax@1
  void *v4; // rbx@1
  __int64 v5; // rax@1
  __int64 v6; // r15@1
  __int64 v7; // rax@2
  void *v8; // rax@2
  void *v9; // rbx@2
  __int64 v11; // [sp+0h] [bp-30h]@1
  double v12; // [sp+8h] [bp-28h]@1

  v12 = a2;
  v2 = objc_msgSend(a1, (const char *)*(&paInstanceid + 2));
  LODWORD(v3) = objc_retainAutoreleasedReturnValue(v2);
  v4 = v3;
  v11 = 0LL;
  objc_msgSend(v3, (const char *)*(&paInstanceid + 3), &v11, 0LL);
  LODWORD(v5) = objc_retain(v11);
  v6 = v5;
  objc_release(v4);
  if ( v6 )
  {
    LODWORD(v7) = FIRInstanceIDSharedLogger(v4);
    LODWORD(v8) = objc_retainAutoreleasedReturnValue(v7);
    v9 = v8;
    objc_msgSend(
      v8,
      (const char *)*(&paInstanceid + 4),
      "-[FIRInstanceID(Internal) handleTokenRefreshWithDelay:]",
      2000LL,
      &cfstr_FailedToDelete,
      v6,
      v11);
    objc_release(v9);
  }
  objc_msgSend(a1, (const char *)*(&paInstanceid + 5), v12, v11);
  return objc_release(v6);
}
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 728: using guessed type __CFString cfstr_FailedToDelete;
// 36F0: using guessed type int __fastcall FIRInstanceIDSharedLogger(_QWORD);
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3778: using guessed type int (__fastcall *objc_retain)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000120) ----------------------------------------------------
int _FIRInstanceID_Internal__notifyIdentityLost_()
{
  void *v0; // rax@1
  void *v1; // rax@1
  void *v2; // rbx@1

  v0 = objc_msgSend(&OBJC_CLASS___FIRInstanceID, (const char *)paInstanceid);
  LODWORD(v1) = objc_retainAutoreleasedReturnValue(v0);
  v2 = v1;
  objc_msgSend(v1, (const char *)*(&paInstanceid + 6), *((double *)&qword_480 + 1));
  return objc_release(v2);
}
// 480: using guessed type __int64 qword_480;
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (000000000000016C) ----------------------------------------------------
int __fastcall _FIRInstanceID_Internal__handleCommandResetWithDelay__(void *a1, double a2)
{
  void *v2; // rax@1
  void *v3; // rax@1
  void *v4; // rbx@1
  __int64 v5; // rdx@1
  __int64 v6; // rax@1
  __int64 v7; // r15@1
  __int64 v9; // [sp+8h] [bp-38h]@1
  double v10; // [sp+10h] [bp-30h]@1

  v10 = a2;
  v2 = objc_msgSend(a1, (const char *)*(&paInstanceid + 7));
  LODWORD(v3) = objc_retainAutoreleasedReturnValue(v2);
  v4 = v3;
  v5 = *kFIRInstanceIDKeyPairSubType;
  v9 = 0LL;
  objc_msgSend(v3, (const char *)*(&paInstanceid + 8), v5, &v9);
  LODWORD(v6) = objc_retain(v9);
  v7 = v6;
  objc_release(v4);
  objc_msgSend(a1, (const char *)*(&paInstanceid + 5), v10);
  return objc_release(v7);
}
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3778: using guessed type int (__fastcall *objc_retain)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000206) ----------------------------------------------------
int __fastcall _FIRInstanceID_Internal__handleCommandResetFullWithDelay__(void *a1, double a2)
{
  const char *v2; // r14@1
  void *v3; // rax@1
  void *v4; // rax@1
  void *v5; // rbx@1
  int v6; // er12@1
  int result; // eax@1
  void *v8; // rax@2
  void *v9; // rax@2
  void *v10; // rbx@2
  __int64 v11; // rdx@2
  __int64 v12; // rax@2
  __int64 v13; // r14@2
  __int64 v14; // [sp+8h] [bp-38h]@2
  double v15; // [sp+10h] [bp-30h]@1

  v15 = a2;
  v2 = (const char *)*(&paInstanceid + 7);
  v3 = objc_msgSend(a1, (const char *)*(&paInstanceid + 7));
  LODWORD(v4) = objc_retainAutoreleasedReturnValue(v3);
  v5 = v4;
  v6 = (unsigned __int64)objc_msgSend(v4, (const char *)*(&paInstanceid + 9));
  result = objc_release(v5);
  if ( (_BYTE)v6 )
  {
    v8 = objc_msgSend(a1, v2);
    LODWORD(v9) = objc_retainAutoreleasedReturnValue(v8);
    v10 = v9;
    v11 = *kFIRInstanceIDKeyPairSubType;
    v14 = 0LL;
    objc_msgSend(v9, (const char *)*(&paInstanceid + 8), v11, &v14);
    LODWORD(v12) = objc_retain(v14);
    v13 = v12;
    objc_release(v10);
    objc_msgSend(a1, (const char *)*(&paInstanceid + 5), v15);
    result = objc_release(v13);
  }
  return result;
}
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3778: using guessed type int (__fastcall *objc_retain)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (00000000000002D5) ----------------------------------------------------
int __usercall _FIRInstanceID_Internal__handleRefreshMessage_withSubType__@<eax>(__int64 a1@<rax>, __int64 a2@<rdx>, void *a3@<rdi>)
{
  __int64 v3; // ST00_8@1
  __int64 v4; // rax@1
  __int64 v5; // rbx@1
  const char *v6; // r15@1
  const char *v7; // rsi@2

  v3 = a1;
  LODWORD(v4) = objc_retain(a2);
  v5 = v4;
  v6 = (const char *)*(&paInstanceid + 10);
  if ( (unsigned __int8)objc_msgSend((void *)*kFIRInstanceID_CMD_RST, (const char *)*(&paInstanceid + 10), v4, v3) )
  {
    v7 = (const char *)*(&paInstanceid + 6);
  }
  else if ( (unsigned __int8)objc_msgSend((void *)*kFIRInstanceID_CMD_RST_FULL, v6, v5) )
  {
    v7 = (const char *)*(&paInstanceid + 11);
  }
  else
  {
    if ( !(unsigned __int8)objc_msgSend((void *)*kFIRInstanceID_CMD_SYNC, v6, v5) )
    {
      objc_msgSend((void *)*kFIRInstanceID_CMD_PING, v6, v5);
      return objc_release(v5);
    }
    v7 = (const char *)*(&paInstanceid + 1);
  }
  objc_msgSend(a3, v7, COERCE_DOUBLE(0LL));
  return objc_release(v5);
}
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3778: using guessed type int (__fastcall *objc_retain)(_QWORD);

//----- (0000000000000393) ----------------------------------------------------
int __fastcall _FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay__(double a1)
{
  dispatch_time_t v1; // rax@3
  int result; // eax@2

  if ( a1 == 0.0 )
  {
    result = dispatch_async(_dispatch_main_q, &__block_literal_global);
  }
  else
  {
    v1 = dispatch_time(0LL, (unsigned int)(signed int)floor(a1 * *((double *)&qword_480 + 2)));
    result = dispatch_after(v1, _dispatch_main_q, &__block_literal_global_30);
  }
  return result;
}
// 480: using guessed type __int64 qword_480;
// 770: using guessed type void *__block_literal_global;
// 7B0: using guessed type void *__block_literal_global_30;
// 3720: using guessed type int __fastcall dispatch_after(_QWORD, _QWORD, _QWORD);
// 3728: using guessed type int __fastcall dispatch_async(_QWORD, _QWORD);

//----- (00000000000003E0) ----------------------------------------------------
int __66__FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay___block_invoke()
{
  void *v0; // rax@1
  void *v1; // rax@1
  void *v2; // rbx@1

  v0 = objc_msgSend(*(&off_498 + 1), (const char *)*(&paInstanceid + 12));
  LODWORD(v1) = objc_retainAutoreleasedReturnValue(v0);
  v2 = v1;
  objc_msgSend(v1, (const char *)*(&paInstanceid + 13), *kFIRInstanceIDTokenRefreshNotification, 0LL);
  return objc_release(v2);
}
// 498: using guessed type void *off_498;
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

//----- (0000000000000430) ----------------------------------------------------
int __66__FIRInstanceID_Internal__postTokenRefreshNotificationAfterDelay___block_invoke_2()
{
  void *v0; // rax@1
  void *v1; // rax@1
  void *v2; // rbx@1

  v0 = objc_msgSend(*(&off_498 + 1), (const char *)*(&paInstanceid + 12));
  LODWORD(v1) = objc_retainAutoreleasedReturnValue(v0);
  v2 = v1;
  objc_msgSend(v1, (const char *)*(&paInstanceid + 13), *kFIRInstanceIDTokenRefreshNotification, 0LL);
  return objc_release(v2);
}
// 498: using guessed type void *off_498;
// 650: using guessed type __int64 (__fastcall *paInstanceid)();
// 3770: using guessed type int (__fastcall *objc_release)(_QWORD);
// 3780: using guessed type int __fastcall objc_retainAutoreleasedReturnValue(_QWORD);

// ALL OK, 9 function(s) have been successfully decompiled
