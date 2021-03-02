//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMBHttpRequestDelegate.h"

@class NSObject<WebServiceObjectDelegate><NSObject>, NSString, UIActivityIndicatorView, UIView;

@interface WebServiceObject : NSObject <MMBHttpRequestDelegate>
{
    _Bool _isShowNativeLogoutMessageView;
    NSObject<WebServiceObjectDelegate><NSObject> *_wsDelegate;
    NSString *_currentSendTelegramPageWFID;
    UIView *_viewLoading;
    UIActivityIndicatorView *_aivLoading;
    NSString *_sequence;
    NSString *_udid;
    NSString *_signEndTaskId;
}

@property(nonatomic) _Bool isShowNativeLogoutMessageView; // @synthesize isShowNativeLogoutMessageView=_isShowNativeLogoutMessageView;
@property(retain, nonatomic) NSString *signEndTaskId; // @synthesize signEndTaskId=_signEndTaskId;
@property(retain, nonatomic) NSString *udid; // @synthesize udid=_udid;
@property(retain, nonatomic) NSString *sequence; // @synthesize sequence=_sequence;
@property(retain, nonatomic) UIActivityIndicatorView *aivLoading; // @synthesize aivLoading=_aivLoading;
@property(retain, nonatomic) UIView *viewLoading; // @synthesize viewLoading=_viewLoading;
@property(retain, nonatomic) NSString *currentSendTelegramPageWFID; // @synthesize currentSendTelegramPageWFID=_currentSendTelegramPageWFID;
@property(retain, nonatomic) NSObject<WebServiceObjectDelegate><NSObject> *wsDelegate; // @synthesize wsDelegate=_wsDelegate;
- (void)delayLoadMaintainMessage:(id)arg1;
- (void)create2x1xPics:(id)arg1;
- (void)handlerErrorWithSoapAction:(id)arg1 isShowAlert:(_Bool)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 withResponseBody:(id)arg5;
- (void)MMBHttpRequest:(id)arg1 didError:(id)arg2;
- (void)MMBHttpRequestDidFinished:(id)arg1;
- (id)parserMMBHttpRequestError:(id)arg1;
- (id)parseSoapBodyToDictionary:(id)arg1;
- (id)parseLeafNodeToDictionary:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)startJsonRequest:(id)arg1 withPushFuncName:(id)arg2 withAsynchronous:(_Bool)arg3 withTimeoutInterval:(float)arg4;
- (void)startSoapRequest:(id)arg1 withAsynchronous:(_Bool)arg2 withSoapAction:(id)arg3 withRequestXML:(id)arg4 withTimeoutInterval:(float)arg5;
- (id)getMBFunctionStatus:(id)arg1;
- (id);
- (id);
- (id);
- (id)getPH00EJson;
- (id)getPH00DJson;
- (id)getPH00CJson;
- (id)getPH00AJson:(id)arg1;
- (id)getPH009Json:(id)arg1;
- (id)getPH008Json:(id)arg1;
- (id)getPH007Json:(id)arg1;
- (id)getPH004Json:(id)arg1;
- (id)getPH003Json:(id)arg1 messageBoxId:(id)arg2 contentId:(id)arg3;
- (id)getPH002Json:(id)arg1 token:(id)arg2;
- (id)getPH001Json;
- (id)getPH000Json:(id)arg1;
- (id)getSecurityXMLRquestHeader:(id)arg1 tier1XML:(id)arg2 tier2XML:(id)arg3 tier3XML:(id)arg4;
- (id)getSecurityXMLRquestHeader:(id)arg1;
- (id)getSecurityXML:(id)arg1 tier1XML:(id)arg2 tier2XML:(id)arg3 tier3XML:(id)arg4 withRequesBody:(id)arg5;
- (id)getSecurityXML:(id)arg1 withRequesBody:(id)arg2;
- (void)doPH00E;
- (void)doPH00D;
- (void)doPH00C;
- (void)doPH00A:(id)arg1;
- (void)doPH009:(id)arg1;
- (void)doPH008:(id)arg1;
- (void)doPH007:(id)arg1;
- (void)doPH004:(id)arg1;
- (void)doPH003:(id)arg1 messageBoxId:(id)arg2 contentId:(id)arg3;
- (void)doPH002:(id)arg1 token:(id)arg2;
- (void)doPH001;
- (void)doPH000:(id)arg1;
- (void)doGenAuthenticateParamWithTarget:(id)arg1;
- (void)doCallHNCBAPIWithGuideWFID:(id)arg1 funcTXID:(id)arg2 paramter:(id)arg3;
- (void)doCustServiceWithType:(id)arg1 version:(id)arg2;
- (void)doArxanExceptionHandlerWithCallFunctionName:(id)arg1 errMsg:(id)arg2 appID:(id)arg3 uniqueID:(id)arg4 domainName:(id)arg5 version:(id)arg6 occurrenceTime:(id)arg7;
- (void)doCheckQRCodeP2PWithType:(id)arg1 qrCodeStr:(id)arg2;
- (void)doGetUserAccount;
- (void)doSignEndWithTaskId:(id)arg1;
- (void)doSignBeginWithKeypascoStatus:(id)arg1 messageText:(id)arg2 taskTitle:(id)arg3;
- (void)doAuthenticate;
- (void)doListDevices;
- (void)doQuickLoginWithLongitude:(id)arg1 latitude:(id)arg2 gestureConnectPosition:(id)arg3 forceLogin:(id)arg4;
- (void)doQuickLoginSettingWithType:(id)arg1 authenticationID:(id)arg2 identityID:(id)arg3 gestureConnectPosition:(id)arg4 defaultMainMenuWFID:(id)arg5;
- (void)doLogoutWithIsShowNativeLogoutMessageView:(_Bool)arg1;
- (void)doClickPageView:(id)arg1;
- (void);
- (void);
- (void);
- (void);
- (void);
- (void);
- (void);
- (void);
- (void);
- (void);
- (void)doAP0001;
- (void)dispatchWebServiceDelegate:(id)arg1 withResponseHeader:(id)arg2 withResponseBody:(id)arg3;
- (void)dealloc;
- (id)init;

@end
