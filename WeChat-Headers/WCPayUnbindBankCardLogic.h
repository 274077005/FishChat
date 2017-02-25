//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayPayPwdViewControllerDelegate.h"

@class JSEvent, NSString;

@interface WCPayUnbindBankCardLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
{
    JSEvent *m_jsEvent;
}

- (void).cxx_destruct;
- (void)stopLogic;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)BackToRootView;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnUnBindCard:(id)arg1 Error:(id)arg2;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)startLogic;
- (id)initWithJSEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
