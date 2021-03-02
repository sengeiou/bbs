//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "InspectionCertificateDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIApplicationDelegate.h"
#import "UNUserNotificationCenterDelegate.h"
#import "WebServiceObjectDelegate.h"

@class AIRobotFloatingIconWindow, AdvertisingViewController, GoogleAnaliticsTools, NSDictionary, NSMutableArray, NSString, NSTimer, UIAlertView, UIView, UIWindow, WebServiceObject;

@interface HNCAppDelegate : UIResponder <UIApplicationDelegate, UIAlertViewDelegate, UNUserNotificationCenterDelegate, WebServiceObjectDelegate, InspectionCertificateDelegate>
{
    _Bool _isAIRobotFloatingIconWindowHiddenPage;
    _Bool _isOpenAccessibility;
    _Bool _isShortcutGuideWFID;
    _Bool _isNowShowInquiryAddFavoritesAlert;
    _Bool _needRefreshFunc;
    _Bool _isDelayRefreshFunc;
    _Bool _isRefreshFuncToQuickLoginVerification;
    _Bool _isReceicePrivatePushNotGuideQuickLoginVerification;
    _Bool _isSendPH00ATelegram;
    _Bool _isGetPushToken;
    _Bool _isReceivePushFromBackgroundClickNotificationBarEnterForeground;
    _Bool _isPermissionDescShowing;
    _Bool _isProcessCrashReport;
    _Bool _isProcessBackgroundEnterForegroundEvent;
    int _iMessageType;
    UIWindow *_window;
    UIWindow *_loadingFromTelegramWindow;
    UIWindow *_loadingFromWebWindow;
    AIRobotFloatingIconWindow *_aiRobotFloatingIconWindow;
    WebServiceObject *_wsObject;
    AdvertisingViewController *_advertisingViewController;
    GoogleAnaliticsTools *_gaTools;
    NSTimer *_timerCheckShowTimeoutHint;
    UIAlertView *_alvTimeoutHint;
    UIAlertView *_privatePushBindingAlertView;
    NSMutableArray *_aiRobotFloatingIconWindowHideArray;
    NSMutableArray *_advertisingHNCBArray;
    NSMutableArray *_advertisingIBMArray;
    NSMutableArray *_mtaWhiteList;
    NSString *_pushUnreadPrivateMessagesNumber;
    NSString *_sFuncName;
    NSString *_taskId;
    NSString *_sessionID;
    NSString *_walletProviderId;
    NSString *_smartCustomerServiceUrl;
    NSString *_bigDataLatitude;
    NSString *_bigDataLongitude;
    double _screenBrightness;
    double _dCheckShowHintTimeInterval;
    double _dAutoLogoutTimeInterval;
    double _dDefaultAutoLogoutTimeInterval;
    double _dDefaultSessionAliveTimeInterval;
    double _dLastActionTimeInterval;
    double _dShowHintTimeInterval;
    double _dSessionRemainingTimeInterval;
    UIView *_viewMask;
    NSString *_receivePushMessageType;
    NSString *_receivePushMessageBoxId;
    NSString *_receivePushGuideWFID;
    NSDictionary *_remoteNotificationInfo;
}

@property(nonatomic) _Bool isProcessBackgroundEnterForegroundEvent; // @synthesize isProcessBackgroundEnterForegroundEvent=_isProcessBackgroundEnterForegroundEvent;
@property(nonatomic) _Bool isProcessCrashReport; // @synthesize isProcessCrashReport=_isProcessCrashReport;
@property(nonatomic) _Bool isPermissionDescShowing; // @synthesize isPermissionDescShowing=_isPermissionDescShowing;
@property(nonatomic) _Bool isReceivePushFromBackgroundClickNotificationBarEnterForeground; // @synthesize isReceivePushFromBackgroundClickNotificationBarEnterForeground=_isReceivePushFromBackgroundClickNotificationBarEnterForeground;
@property(nonatomic) _Bool isGetPushToken; // @synthesize isGetPushToken=_isGetPushToken;
@property(retain, nonatomic) NSDictionary *remoteNotificationInfo; // @synthesize remoteNotificationInfo=_remoteNotificationInfo;
@property(retain, nonatomic) NSString *receivePushGuideWFID; // @synthesize receivePushGuideWFID=_receivePushGuideWFID;
@property(retain, nonatomic) NSString *receivePushMessageBoxId; // @synthesize receivePushMessageBoxId=_receivePushMessageBoxId;
@property(retain, nonatomic) NSString *receivePushMessageType; // @synthesize receivePushMessageType=_receivePushMessageType;
@property(retain, nonatomic) UIView *viewMask; // @synthesize viewMask=_viewMask;
@property(nonatomic) int iMessageType; // @synthesize iMessageType=_iMessageType;
@property(nonatomic) double dSessionRemainingTimeInterval; // @synthesize dSessionRemainingTimeInterval=_dSessionRemainingTimeInterval;
@property(nonatomic) double dShowHintTimeInterval; // @synthesize dShowHintTimeInterval=_dShowHintTimeInterval;
@property(nonatomic) double dLastActionTimeInterval; // @synthesize dLastActionTimeInterval=_dLastActionTimeInterval;
@property(nonatomic) double dDefaultSessionAliveTimeInterval; // @synthesize dDefaultSessionAliveTimeInterval=_dDefaultSessionAliveTimeInterval;
@property(nonatomic) double dDefaultAutoLogoutTimeInterval; // @synthesize dDefaultAutoLogoutTimeInterval=_dDefaultAutoLogoutTimeInterval;
@property(nonatomic) double dAutoLogoutTimeInterval; // @synthesize dAutoLogoutTimeInterval=_dAutoLogoutTimeInterval;
@property(nonatomic) double dCheckShowHintTimeInterval; // @synthesize dCheckShowHintTimeInterval=_dCheckShowHintTimeInterval;
@property(nonatomic) double screenBrightness; // @synthesize screenBrightness=_screenBrightness;
@property(nonatomic) _Bool isSendPH00ATelegram; // @synthesize isSendPH00ATelegram=_isSendPH00ATelegram;
@property(nonatomic) _Bool isReceicePrivatePushNotGuideQuickLoginVerification; // @synthesize isReceicePrivatePushNotGuideQuickLoginVerification=_isReceicePrivatePushNotGuideQuickLoginVerification;
@property(nonatomic) _Bool isRefreshFuncToQuickLoginVerification; // @synthesize isRefreshFuncToQuickLoginVerification=_isRefreshFuncToQuickLoginVerification;
@property(nonatomic) _Bool isDelayRefreshFunc; // @synthesize isDelayRefreshFunc=_isDelayRefreshFunc;
@property(nonatomic) _Bool needRefreshFunc; // @synthesize needRefreshFunc=_needRefreshFunc;
@property(nonatomic) _Bool isNowShowInquiryAddFavoritesAlert; // @synthesize isNowShowInquiryAddFavoritesAlert=_isNowShowInquiryAddFavoritesAlert;
@property(nonatomic) _Bool isShortcutGuideWFID; // @synthesize isShortcutGuideWFID=_isShortcutGuideWFID;
@property(nonatomic) _Bool isOpenAccessibility; // @synthesize isOpenAccessibility=_isOpenAccessibility;
@property(nonatomic) _Bool isAIRobotFloatingIconWindowHiddenPage; // @synthesize isAIRobotFloatingIconWindowHiddenPage=_isAIRobotFloatingIconWindowHiddenPage;
@property(retain, nonatomic) NSString *bigDataLongitude; // @synthesize bigDataLongitude=_bigDataLongitude;
@property(retain, nonatomic) NSString *bigDataLatitude; // @synthesize bigDataLatitude=_bigDataLatitude;
@property(retain, nonatomic) NSString *smartCustomerServiceUrl; // @synthesize smartCustomerServiceUrl=_smartCustomerServiceUrl;
@property(retain, nonatomic) NSString *walletProviderId; // @synthesize walletProviderId=_walletProviderId;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(retain, nonatomic) NSString *sFuncName; // @synthesize sFuncName=_sFuncName;
@property(retain, nonatomic) NSString *pushUnreadPrivateMessagesNumber; // @synthesize pushUnreadPrivateMessagesNumber=_pushUnreadPrivateMessagesNumber;
@property(retain, nonatomic) NSMutableArray *mtaWhiteList; // @synthesize mtaWhiteList=_mtaWhiteList;
@property(retain, nonatomic) NSMutableArray *advertisingIBMArray; // @synthesize advertisingIBMArray=_advertisingIBMArray;
@property(retain, nonatomic) NSMutableArray *advertisingHNCBArray; // @synthesize advertisingHNCBArray=_advertisingHNCBArray;
@property(retain, nonatomic) NSMutableArray *aiRobotFloatingIconWindowHideArray; // @synthesize aiRobotFloatingIconWindowHideArray=_aiRobotFloatingIconWindowHideArray;
@property(retain, nonatomic) UIAlertView *privatePushBindingAlertView; // @synthesize privatePushBindingAlertView=_privatePushBindingAlertView;
@property(retain, nonatomic) UIAlertView *alvTimeoutHint; // @synthesize alvTimeoutHint=_alvTimeoutHint;
@property(retain, nonatomic) NSTimer *timerCheckShowTimeoutHint; // @synthesize timerCheckShowTimeoutHint=_timerCheckShowTimeoutHint;
@property(retain, nonatomic) GoogleAnaliticsTools *gaTools; // @synthesize gaTools=_gaTools;
@property(retain, nonatomic) AdvertisingViewController *advertisingViewController; // @synthesize advertisingViewController=_advertisingViewController;
@property(retain, nonatomic) WebServiceObject *wsObject; // @synthesize wsObject=_wsObject;
@property(retain, nonatomic) AIRobotFloatingIconWindow *aiRobotFloatingIconWindow; // @synthesize aiRobotFloatingIconWindow=_aiRobotFloatingIconWindow;
@property(retain, nonatomic) UIWindow *loadingFromWebWindow; // @synthesize loadingFromWebWindow=_loadingFromWebWindow;
@property(retain, nonatomic) UIWindow *loadingFromTelegramWindow; // @synthesize loadingFromTelegramWindow=_loadingFromTelegramWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)filterCacheByURL:(id)arg1 withRecord:(id)arg2;
- (void)cleanCache;
- (id)convertDictionaryToString:(id)arg1;
- (id)newDateToAES256;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)WebServiceObject:(id)arg1 didCompletePH001WithHeader:(id)arg2 withPH001ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompletePH000WithHeader:(id)arg2 withPH000ResponseBody:(id)arg3;
- (void)WebServiceObject:(id)arg1 didCompleteAP0001WithHeader:(id)arg2 withAP0001ResponseBody:(id)arg3;
- (void)logoutSuccess:(_Bool)arg1 isShowNativeLogoutMessageView:(_Bool)arg2;
- (void)refreshiBankingSession:(long long)arg1;
- (void)doTimeoutToLogout;
- (void)checkShowTimeoutHint;
- (void)pushMsgDetailBackMainMenuSendGetAppInitInfoTelegramObserver:(id)arg1;
- (void)pushGuideViewControllerWithReceiveNotFromForeground:(_Bool)arg1 guideWFID1:(id)arg2 guideWFID2:(id)arg3 guideWFID3:(id)arg4 forceGuideMobileBankWFID:(id)arg5 isOpenAIRobot:(id)arg6 funcTXID:(id)arg7 param1:(id)arg8;
- (void)decisionRefreshFunc;
- (void)showMessageViewWithAryNotice:(id)arg1 iMessageType:(int)arg2;
- (void)delaySendGetAppInitInfoTelegram:(id)arg1;
- (void)delayConnectionSetting:(id)arg1;
- (void)decisionGuideAccessibilityViewControllerWithRemoteNotificationInfo:(id)arg1 isProcessCrashReport:(_Bool)arg2;
- (void)delayCreateOtherWindows:(id)arg1;
- (void)handleCAResponseFailure:(id)arg1 WithMessage:(id)arg2;
- (void);
- (_Bool);
- (void);
- (void)getReceiveRemoteNotification:(id)arg1 applicationState:(long long)arg2;
- (void)getReceiveSmartBankLocalNotification:(id)arg1;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (id)serializeDeviceToken:(id)arg1;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 shouldAllowExtensionPointIdentifier:(id)arg2;
- (void)application:(id)arg1 handleWatchKitExtensionRequest:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

